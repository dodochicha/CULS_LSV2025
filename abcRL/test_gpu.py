import abc_py
import os

# 1. 初始化 ABC
abc = abc_py.AbcInterface()

# 2. 測試基本 ABC 功能
print("--- 基礎測試 ---")
abc.abc_command("read_aig /nfs/home/tensore/CULS_LSV2025/abc/examples/test.aig") # 確保路徑有檔案
abc.abc_command("print_stats")

# 3. 測試 CULS 特有 GPU 指令
print("\n--- CULS GPU 指令測試 ---")
# 嘗試執行 CULS 的指令，若報 "Unknown command" 代表連結的是原版而非 CULS 版
try:
    abc.abc_command("gget")    # 將 AIG 搬移到 GPU
    abc.abc_command("gresyn2") # 執行 GPU 加速的 resyn2
    abc.abc_command("gput")    # 將結果搬回 CPU
    print("\n✅ 成功驗證：GPU 指令可用！")
except Exception as e:
    print(f"\n❌ 指令執行失敗：{e}")
