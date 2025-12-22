"""
Utility script for checking whether the GPU-specific ABC commands
(`gget`, `gresyn2`, `gput`, etc.) are available in the current build.

The flow mirrors how `EnvNaive2` in `env.py` initializes `AbcInterface`,
but instead of running reinforcement learning actions we simply execute
the provided command sequence and report any failures.
"""

import argparse
import os
import sys

import abc_py as abcPy


SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
DEFAULT_AIG_PATH = os.path.normpath(os.path.join(SCRIPT_DIR, "../abc/i10.aig"))


DEFAULT_COMMANDS = [
    "read ../abc/i10.aig",
    "gget",
    "gresyn2",
    "gput",
    "print_stats",
    "cec -n",
]


def run_commands(command_list):
    """Executes the given ABC commands sequentially."""
    abc = abcPy.AbcInterface()
    if not hasattr(abc, "abc_command"):
        raise AttributeError(
            "abc_py.AbcInterface is missing 'abc_command'. "
            "Please rebuild/install the abc_py package from this repository "
            "(e.g., `pip install -e /nfs/home/tensore/CULS_LSV2025/abc_py`)."
        )
    abc.start()
    try:
        for idx, command in enumerate(command_list, start=1):
            print(f"[{idx}/{len(command_list)}] abc> {command}")
            abc.abc_command(command)
    finally:
        abc.end()


def build_command_list(aig_path):
    commands = DEFAULT_COMMANDS.copy()
    commands[0] = f"read {aig_path}"
    return commands


def main():
    parser = argparse.ArgumentParser(
        description="Run a fixed flow to verify GPU-enabled ABC commands."
    )
    parser.add_argument(
        "--aig",
        default=DEFAULT_AIG_PATH,
        help="Path to the .aig file to load before issuing GPU commands.",
    )
    args = parser.parse_args()

    aig_path = os.path.abspath(args.aig)
    if not os.path.exists(aig_path):
        print(f"Error: {aig_path} does not exist.", file=sys.stderr)
        sys.exit(1)

    commands = build_command_list(aig_path)
    try:
        run_commands(commands)
    except Exception as exc:
        print(f"Command sequence failed: {exc}", file=sys.stderr)
        sys.exit(1)
    print("\nAll GPU commands executed successfully.")


if __name__ == "__main__":
    main()
