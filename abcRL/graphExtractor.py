##
# @file graphExtractor.py
# @author Keren Zhu
# @date 11/16/2019
# @brief The functions and classes for processing the graph
#

import abc_py as abcPy
import numpy as np
from numpy import linalg as LA
import numpy as np
import dgl
import torch

def symmetricLaplacian(abc):
    numNodes = abc.numNodes()
    L = np.zeros((numNodes, numNodes))
    print("numNodes", numNodes)
    for nodeIdx in range(numNodes):
        aigNode = abc.aigNode(nodeIdx)
        degree = float(aigNode.numFanouts())
        if (aigNode.hasFanin0()):
            degree += 1.0
            fanin = aigNode.fanin0()
            L[nodeIdx][fanin] = -1.0
            L[fanin][nodeIdx] = -1.0
        if (aigNode.hasFanin1()):
            degree += 1.0
            fanin = aigNode.fanin1()
            L[nodeIdx][fanin] = -1.0
            L[fanin][nodeIdx] = -1.0
        L[nodeIdx][nodeIdx] = degree
    return L

def symmetricLapalacianEigenValues(abc):
    L = symmetricLaplacian(abc)
    print("L", L)
    eigVals = np.real(LA.eigvals(L))
    print("eigVals", eigVals)
    return eigVals

def extract_dgl_graph(abc):
    numNodes = abc.numNodes()
    src_nodes = []
    dst_nodes = []
    features = torch.zeros(numNodes, 6)
    for nodeIdx in range(numNodes):
        aigNode = abc.aigNode(nodeIdx)
        nodeType = aigNode.nodeType()
        features[nodeIdx][nodeType] = 1.0
        if (aigNode.hasFanin0()):
            fanin = aigNode.fanin0()
            src_nodes.append(fanin)
            dst_nodes.append(nodeIdx)
        if (aigNode.hasFanin1()):
            fanin = aigNode.fanin1()
            src_nodes.append(fanin)
            dst_nodes.append(nodeIdx)
    G = dgl.graph(
        (
            torch.tensor(src_nodes, dtype=torch.int64),
            torch.tensor(dst_nodes, dtype=torch.int64),
        ),
        num_nodes=numNodes,
    )
    # DGL's GraphConv (by default) errors on 0-in-degree nodes (e.g., PIs).
    # Adding self-loops ensures every node has at least one incoming edge.
    G = dgl.add_self_loop(G)
    G.ndata['feat'] = features
    return G
