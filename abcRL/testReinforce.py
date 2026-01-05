##
# @file testReinforce.py
# @author Keren Zhu
# @date 10/31/2019
# @brief The main for test REINFORCE
#

from datetime import datetime
import time
import os
import warnings

import reinforce as RF
# from env import EnvGraph as Env
from env import EnvGraphGPU as Env

import numpy as np
import statistics
import matplotlib.pyplot as plt


class AbcReturn:
    def __init__(self, returns):
        self.numNodes = float(returns[0])
        self.level = float(returns[1])
    def __lt__(self, other):
        if (int(self.level) == int(other.level)):
            return self.numNodes < other.numNodes
        else:
            return self.level < other.level
    def __eq__(self, other):
        return int(self.level) == int(other.level) and int(self.numNodes) == int(self.numNodes)

def testReinforce(filename, ben):
    now = datetime.now()
    dateTime = now.strftime("%m/%d/%Y, %H:%M:%S") + "\n"
    print("Time ", dateTime)
    env = Env(filename,filename+".cxx")
    #vApprox = Linear(env.dimState(), env.numActions())
    vApprox = RF.PiApprox(env.dimState(), env.numActions(), 8e-4, RF.FcModelGraph)
    baseline = RF.Baseline(0)
    vbaseline = RF.BaselineVApprox(env.dimState(), 3e-3, RF.FcModel)
    reinforce = RF.Reinforce(env, 0.9, vApprox, vbaseline)

    lastfive = []
    bestReward = None
    bestActions = None
    rewardHistory = []
    nodeHistory = []
    levelHistory = []
    episodeTimeHistory = []
    stepTimeHistory = []
    seqLenHistory = []

    for idx in range(200):
        t0 = time.perf_counter()
        try:
            returns = reinforce.episode(phaseTrain=True)
        except Exception as exc:
            warnings.warn(
                f"abc error at iter {idx}: {exc}. continuing.",
                RuntimeWarning,
            )
            continue
        if returns is None or len(returns) < 2:
            warnings.warn(
                f"abc returned invalid result at iter {idx}: {returns}. continuing.",
                RuntimeWarning,
            )
            continue
        t1 = time.perf_counter()
        seqLen = reinforce.lenSeq
        episodeTime = t1 - t0
        stepTime = episodeTime / seqLen if seqLen else 0.0
        line = "iter " + str(idx) + " returns "+ str(returns) + " seq Length " + str(seqLen) + "\n"
        if idx >= 0:
            lastfive.append(AbcReturn(returns))
        line = line.strip() + " episodeTime " + f"{episodeTime:.6f}" + " stepTime " + f"{stepTime:.6f}" + "\n"
        print(line)
        if reinforce.lastSumReward is not None:
            if bestReward is None or reinforce.lastSumReward > bestReward:
                bestReward = reinforce.lastSumReward
                bestActions = list(reinforce.lastTrajectory.actions)
        if reinforce.lastSumReward is not None:
            rewardHistory.append(reinforce.lastSumReward)
        nodeHistory.append(returns[0])
        levelHistory.append(returns[1])
        episodeTimeHistory.append(episodeTime)
        stepTimeHistory.append(stepTime)
        seqLenHistory.append(seqLen)
        #reinforce.replay()
    resultName = "./results/" + ben + ".csv"
    #lastfive.sort(key=lambda x : x.level)
    lastfive = sorted(lastfive)
    with open(resultName, 'a') as andLog:
        line = ""
        line += str(lastfive[0].numNodes)
        line += " "
        line += str(lastfive[0].level)
        line += "\n"
        andLog.write(line)
    rewards = reinforce.sumRewards
    if rewards:
        fig, axes = plt.subplots(3, 1, figsize=(8, 10), sharex=True)
        axes[0].plot(rewardHistory)
        axes[0].set_ylabel("Reward")
        axes[0].set_title("Reward")
        axes[1].plot(levelHistory)
        axes[1].set_ylabel("Level")
        axes[1].set_title("Level")
        axes[2].plot(nodeHistory)
        axes[2].set_ylabel("Nodes")
        axes[2].set_title("Nodes")
        axes[2].set_xlabel("Episode")
        fig.tight_layout()
        plotPath = "./results/" + ben + ".png"
        fig.savefig(plotPath)
        plt.close(fig)
    if bestActions is not None:
        print("best action sequence", bestActions)
    if episodeTimeHistory:
        avgEpisodeTime = statistics.mean(episodeTimeHistory)
        avgStepTime = statistics.mean(stepTimeHistory)
        avgSeqLen = statistics.mean(seqLenHistory) if seqLenHistory else 0.0
        with open("timing.txt", "a") as timingLog:
            timingLine = (
                f"{ben} {avgSeqLen:.3f} {avgEpisodeTime:.6f} {avgStepTime:.6f}\n"
            )
            timingLog.write(timingLine)
    """
    with open('./results/sum_rewards.csv', 'a') as rewardLog:
        line = ""
        for idx in range(len(rewards)):
            line += str(rewards[idx]) 
            if idx != len(rewards) - 1:
                line += ","
        line += "\n"
        rewardLog.write(line)
    with open ('./results/converge.csv', 'a') as convergeLog:
        line = ""
        returns = reinforce.episode(phaseTrain=False)
        line += str(returns[0])
        line += ","
        line += str(returns[1])
        line += "\n"
        convergeLog.write(line)
    """




if __name__ == "__main__":
    """
    env = Env("./bench/i10.aig")
    vbaseline = RF.BaselineVApprox(4, 3e-3, RF.FcModel)
    for i in range(10000000):
        with open('log', 'a', 0) as outLog:
            line = "iter  "+ str(i) + "\n"
            outLog.write(line)
        vbaseline.update(np.array([2675.0 / 2675, 50.0 / 50, 2675. / 2675, 50.0 / 50]), 422.5518 / 2675)
        vbaseline.update(np.array([2282. / 2675,   47. / 50, 2675. / 2675,   47. / 50]), 29.8503 / 2675)
        vbaseline.update(np.array([2264. / 2675,   45. / 50, 2282. / 2675,   45. / 50]), 11.97 / 2675)
        vbaseline.update(np.array([2255. / 2675,   44. / 50, 2264. / 2675,   44. / 50]), 3 / 2675)
    """
    # testReinforce("./bench/MCNC/Combinational/blif/dalu.blif", "dalu")
    # testReinforce("./bench/MCNC/Combinational/blif/prom1.blif", "prom1")
    # testReinforce("./bench/MCNC/Combinational/blif/mainpla.blif", "mainpla")
    # testReinforce("./bench/MCNC/Combinational/blif/k2.blif", "k2")
    # testReinforce("./bench/ISCAS/blif/c5315.blif", "c5315")
    # testReinforce("./bench/ISCAS/blif/c6288.blif", "c6288")
    # testReinforce("./bench/MCNC/Combinational/blif/apex1.blif", "apex1")
    # testReinforce("./bench/MCNC/Combinational/blif/bc0.blif", "bc0")
    # testReinforce("./bench/i10.aig", "i10")
    # testReinforce("./bench/apex1.aig", "apex1")
    # testReinforce("./bench/bc0.aig", "bc0")
    # testReinforce("./bench/C1355.aig", "C1355")
    testReinforce("./bench/C5315.aig", "C5315")
    # testReinforce("./bench/k2.aig", "k2")
    # testReinforce("./bench/C7552.aig", "C7552")
    # testReinforce("./bench/dalu.aig", "dalu")
    # testReinforce("./bench/log2.aig", "log2")
    # testReinforce("./bench/mainpla.aig", "mainpla")
    # testReinforce("./bench/hyp.aig", "hyp")
    # testReinforce("./bench/div.aig", "div")
    
    #testReinforce("./bench/ISCAS/blif/c1355.blif", "c1355")
    #testReinforce("./bench/ISCAS/blif/c7552.blif", "c7552")
