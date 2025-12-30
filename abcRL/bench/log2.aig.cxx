
*****Perform Balance*****
Phase 1 time: 0.017813
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.315422
Total time: 0.333445
balance: alg time 0.33, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 6.344] Rewrite Iteration
0 in EvaluateNode 
[ 6.451] Finished GPU enumeration and pre-evaluation
[ 6.452] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 6.453] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.454] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.10, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.12, full time 0.12

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019691
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.285570
Total time: 0.305359
balance: alg time 0.31, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 6.885] Rewrite Iteration
0 in EvaluateNode 
[ 6.960] Finished GPU enumeration and pre-evaluation
[ 6.961] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 6.962] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.962] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 6.973] Rewrite Iteration
0 in EvaluateNode 
[ 7.051] Finished GPU enumeration and pre-evaluation
[ 7.051] Replacing sub-graphs
0 after replace 
N = 35759   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35744
successfully replaced 2402 cones (pos 20, zero 2382), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8985 cones
after replace, n = 35744
[ 7.052] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.053] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35744
 before deduplicate, nNodes = 35712
 after deduplicate, nNodes = 35712, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35712
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018138
Max cover len: 18
Total number of covers: 23252
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23252
#nodes = 29428
Phase 2 time: 0.190349
Total time: 0.208587
balance: alg time 0.21, full time 0.21

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 7.341] Rewrite Iteration
0 in EvaluateNode 
[ 7.421] Finished GPU enumeration and pre-evaluation
[ 7.422] Replacing sub-graphs
0 after replace 
N = 34759   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34512
successfully replaced 1944 cones (pos 50, zero 1894), reverted 14 cones, compromised 412 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34512
[ 7.426] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.427] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.32, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34512
 before deduplicate, nNodes = 34480
 after deduplicate, nNodes = 34479, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34479
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.016763
Max cover len: 12
Total number of covers: 23827
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23827
#nodes = 29365
Phase 2 time: 0.152358
Total time: 0.169216
balance: alg time 0.17, full time 0.17

*****Perform Balance*****
Phase 1 time: 0.014352
Max cover len: 21
Total number of covers: 21969
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21969
#nodes = 29352
Phase 2 time: 0.260550
Total time: 0.274991
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 7.893] Rewrite Iteration
0 in EvaluateNode 
[ 7.965] Finished GPU enumeration and pre-evaluation
[ 7.965] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 7.966] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.967] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.39, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.018176
Max cover len: 21
Total number of covers: 22019
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22019
#nodes = 29281
Phase 2 time: 0.259524
Total time: 0.277794
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 8.335] Rewrite Iteration
0 in EvaluateNode 
[ 8.405] Finished GPU enumeration and pre-evaluation
[ 8.406] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 8.406] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.407] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 8.418] Rewrite Iteration
0 in EvaluateNode 
[ 8.493] Finished GPU enumeration and pre-evaluation
[ 8.493] Replacing sub-graphs
0 after replace 
N = 32016   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32014
successfully replaced 1185 cones (pos 7, zero 1178), reverted 3 cones, compromised 54 cones, pre-eval rejected 18084 cones, small cut reject 0 cones, new idx reject 9968 cones
after replace, n = 32014
[ 8.494] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.495] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32014
 before deduplicate, nNodes = 31982
 after deduplicate, nNodes = 31982, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31982
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.017524
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.185231
Total time: 0.202885
balance: alg time 0.20, full time 0.21

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[ 8.772] Rewrite Iteration
0 in EvaluateNode 
[ 8.849] Finished GPU enumeration and pre-evaluation
[ 8.850] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 8.854] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.855] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.016730
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.146585
Total time: 0.163419
balance: alg time 0.16, full time 0.17

*****Perform Balance*****
Phase 1 time: 0.017376
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.310508
Total time: 0.328174
balance: alg time 0.33, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[13.948] Rewrite Iteration
0 in EvaluateNode 
[14.053] Finished GPU enumeration and pre-evaluation
[14.054] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38621
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38621
[14.055] Finished eval and replace
 *** Topo sort time: 0.00 sec
[14.056] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 0.70, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38621
 before deduplicate, nNodes = 38589
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.45 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[15.737] Rewrite Iteration
0 in EvaluateNode 
[15.832] Finished GPU enumeration and pre-evaluation
[15.833] Replacing sub-graphs
0 after replace 
N = 31463   n = 30180   n * RATIO = 69414
before rebuild, nn = 30180
after rebuild, n = 31459
successfully replaced 639 cones (pos 639, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29506 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 31459
[15.834] Finished eval and replace
 *** Topo sort time: 0.00 sec
[15.834] Rewrite Iteration Ends
real reduction: 639
** Total Time breakdown: ENUM 0.79, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31459
 before deduplicate, nNodes = 31427
 after deduplicate, nNodes = 31424, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31424
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[17.105] Rewrite Iteration
0 in EvaluateNode 
[17.183] Finished GPU enumeration and pre-evaluation
[17.184] Replacing sub-graphs
0 after replace 
N = 29623   n = 29541   n * RATIO = 67944
before rebuild, nn = 29541
after rebuild, n = 29623
successfully replaced 41 cones (pos 41, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29468 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29623
[17.184] Finished eval and replace
 *** Topo sort time: 0.00 sec
[17.185] Rewrite Iteration Ends
real reduction: 41
** Total Time breakdown: ENUM 0.87, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29623
 before deduplicate, nNodes = 29591
 after deduplicate, nNodes = 29591, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29591
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[18.706] Rewrite Iteration
0 in EvaluateNode 
[18.780] Finished GPU enumeration and pre-evaluation
[18.781] Replacing sub-graphs
0 after replace 
N = 29502   n = 29500   n * RATIO = 67850
before rebuild, nn = 29500
after rebuild, n = 29502
successfully replaced 1 cones (pos 1, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29467 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29502
[18.782] Finished eval and replace
 *** Topo sort time: 0.00 sec
[18.782] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 0.94, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29502
 before deduplicate, nNodes = 29470
 after deduplicate, nNodes = 29470, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29470
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014610
Max cover len: 21
Total number of covers: 21978
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 21978
#nodes = 29447
Phase 2 time: 0.278007
Total time: 0.292726
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5067
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5140
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35350
Start reordering ...
Reordered network new nObjs: 29458, original nObjs: 29480
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5064
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5147
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34853
Start reordering ...
Reordered network new nObjs: 29451, original nObjs: 29458
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[24.561] Rewrite Iteration
0 in EvaluateNode 
[24.635] Finished GPU enumeration and pre-evaluation
[24.636] Replacing sub-graphs
0 after replace 
N = 29510   n = 29450   n * RATIO = 67735
before rebuild, nn = 29450
after rebuild, n = 29508
successfully replaced 30 cones (pos 30, zero 0), reverted 5 cones, compromised 1 cones, pre-eval rejected 29382 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29508
[24.637] Finished eval and replace
 *** Topo sort time: 0.00 sec
[24.637] Rewrite Iteration Ends
real reduction: 30
** Total Time breakdown: ENUM 1.01, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29508
 before deduplicate, nNodes = 29476
 after deduplicate, nNodes = 29472, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29472
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5136
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34777
Start reordering ...
Reordered network new nObjs: 29418, original nObjs: 29421
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014612
Max cover len: 21
Total number of covers: 22013
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22013
#nodes = 29375
Phase 2 time: 0.273633
Total time: 0.288347
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[29.479] Rewrite Iteration
0 in EvaluateNode 
[29.553] Finished GPU enumeration and pre-evaluation
[29.554] Replacing sub-graphs
0 after replace 
N = 32273   n = 29407   n * RATIO = 67636
before rebuild, nn = 29407
after rebuild, n = 32261
successfully replaced 1203 cones (pos 20, zero 1183), reverted 6 cones, compromised 93 cones, pre-eval rejected 18012 cones, small cut reject 0 cones, new idx reject 10061 cones
after replace, n = 32261
[29.555] Finished eval and replace
 *** Topo sort time: 0.00 sec
[29.556] Rewrite Iteration Ends
real reduction: 20
** Total Time breakdown: ENUM 1.09, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32261
 before deduplicate, nNodes = 32229
 after deduplicate, nNodes = 32229, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32229
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5034
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5111
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35802
Start reordering ...
Reordered network new nObjs: 29383, original nObjs: 29388
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[32.261] Rewrite Iteration
0 in EvaluateNode 
[32.334] Finished GPU enumeration and pre-evaluation
[32.335] Replacing sub-graphs
0 after replace 
N = 34538   n = 29382   n * RATIO = 67578
before rebuild, nn = 29382
after rebuild, n = 34282
successfully replaced 1933 cones (pos 39, zero 1894), reverted 16 cones, compromised 335 cones, pre-eval rejected 18234 cones, small cut reject 0 cones, new idx reject 8832 cones
after replace, n = 34282
[32.336] Finished eval and replace
 *** Topo sort time: 0.00 sec
[32.337] Rewrite Iteration Ends
real reduction: 40
** Total Time breakdown: ENUM 1.16, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34282
 before deduplicate, nNodes = 34250
 after deduplicate, nNodes = 34250, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34250
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35722
Start reordering ...
Reordered network new nObjs: 29342, original nObjs: 29343
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5042
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35260
Start reordering ...
Reordered network new nObjs: 29342, original nObjs: 29342
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013575
Max cover len: 21
Total number of covers: 22012
*** Max Level: 356
Reconstruct complete! #reconstructed covers = 22012
#nodes = 29304
Phase 2 time: 0.249792
Total time: 0.263474
balance: alg time 0.26, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[38.095] Rewrite Iteration
0 in EvaluateNode 
[38.168] Finished GPU enumeration and pre-evaluation
[38.169] Replacing sub-graphs
0 after replace 
N = 29480   n = 29336   n * RATIO = 67472
before rebuild, nn = 29336
after rebuild, n = 29459
successfully replaced 35 cones (pos 35, zero 0), reverted 25 cones, compromised 0 cones, pre-eval rejected 29244 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29459
[38.169] Finished eval and replace
 *** Topo sort time: 0.00 sec
[38.170] Rewrite Iteration Ends
real reduction: 35
** Total Time breakdown: ENUM 1.23, EVAL 0.03, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29459
 before deduplicate, nNodes = 29427
 after deduplicate, nNodes = 29426, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29426
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[39.539] Rewrite Iteration
0 in EvaluateNode 
[39.611] Finished GPU enumeration and pre-evaluation
[39.612] Replacing sub-graphs
0 after replace 
N = 29301   n = 29301   n * RATIO = 67392
before rebuild, nn = 29301
after rebuild, n = 29301
successfully replaced 1 cones (pos 1, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29301
[39.613] Finished eval and replace
 *** Topo sort time: 0.00 sec
[39.613] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 1.30, EVAL 0.03, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29301
 before deduplicate, nNodes = 29269
 after deduplicate, nNodes = 29269, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29269
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[40.939] Rewrite Iteration
0 in EvaluateNode 
[41.011] Finished GPU enumeration and pre-evaluation
[41.012] Replacing sub-graphs
0 after replace 
N = 29300   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 29300
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29300
[41.012] Finished eval and replace
 *** Topo sort time: 0.00 sec
[41.013] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 1.37, EVAL 0.03, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29300
 before deduplicate, nNodes = 29268
 after deduplicate, nNodes = 29268, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29268
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[42.326] Rewrite Iteration
0 in EvaluateNode 
[42.398] Finished GPU enumeration and pre-evaluation
[42.399] Replacing sub-graphs
0 after replace 
N = 29300   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 29300
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29300
[42.399] Finished eval and replace
 *** Topo sort time: 0.00 sec
[42.400] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 1.44, EVAL 0.03, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29300
 before deduplicate, nNodes = 29268
 after deduplicate, nNodes = 29268, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29268
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.015785
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.287665
Total time: 0.303692
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[61.088] Rewrite Iteration
0 in EvaluateNode 
[61.194] Finished GPU enumeration and pre-evaluation
[61.195] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38617
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38617
[61.196] Finished eval and replace
 *** Topo sort time: 0.00 sec
[61.197] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 1.54, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38617
 before deduplicate, nNodes = 38585
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.45 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[62.742] Rewrite Iteration
0 in EvaluateNode 
[62.838] Finished GPU enumeration and pre-evaluation
[62.838] Replacing sub-graphs
0 after replace 
N = 31463   n = 30180   n * RATIO = 69414
before rebuild, nn = 30180
after rebuild, n = 31459
successfully replaced 639 cones (pos 639, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29506 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 31459
[62.839] Finished eval and replace
 *** Topo sort time: 0.00 sec
[62.840] Rewrite Iteration Ends
real reduction: 639
** Total Time breakdown: ENUM 1.63, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31459
 before deduplicate, nNodes = 31427
 after deduplicate, nNodes = 31424, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31424
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[64.134] Rewrite Iteration
0 in EvaluateNode 
[64.212] Finished GPU enumeration and pre-evaluation
[64.213] Replacing sub-graphs
0 after replace 
N = 32571   n = 29541   n * RATIO = 67944
before rebuild, nn = 29541
after rebuild, n = 32541
successfully replaced 1345 cones (pos 45, zero 1300), reverted 2 cones, compromised 83 cones, pre-eval rejected 17907 cones, small cut reject 0 cones, new idx reject 10172 cones
after replace, n = 32541
[64.214] Finished eval and replace
 *** Topo sort time: 0.00 sec
[64.215] Rewrite Iteration Ends
real reduction: 45
** Total Time breakdown: ENUM 1.71, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32541
 before deduplicate, nNodes = 32509
 after deduplicate, nNodes = 32509, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32509
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5086
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5167
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 36075
Start reordering ...
Reordered network new nObjs: 29471, original nObjs: 29497
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5069
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5154
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35394
Start reordering ...
Reordered network new nObjs: 29471, original nObjs: 29471
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[68.344] Rewrite Iteration
0 in EvaluateNode 
[68.417] Finished GPU enumeration and pre-evaluation
[68.417] Replacing sub-graphs
0 after replace 
N = 29739   n = 29470   n * RATIO = 67781
before rebuild, nn = 29470
after rebuild, n = 29731
successfully replaced 72 cones (pos 72, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29359 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29731
[68.418] Finished eval and replace
 *** Topo sort time: 0.00 sec
[68.419] Rewrite Iteration Ends
real reduction: 72
** Total Time breakdown: ENUM 1.78, EVAL 0.04, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29731
 before deduplicate, nNodes = 29699
 after deduplicate, nNodes = 29696, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29696
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[69.716] Rewrite Iteration
0 in EvaluateNode 
[69.789] Finished GPU enumeration and pre-evaluation
[69.789] Replacing sub-graphs
0 after replace 
N = 29398   n = 29398   n * RATIO = 67615
before rebuild, nn = 29398
after rebuild, n = 29398
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29366 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29398
[69.790] Finished eval and replace
 *** Topo sort time: 0.00 sec
[69.791] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 1.85, EVAL 0.04, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29398
 before deduplicate, nNodes = 29366
 after deduplicate, nNodes = 29366, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29366
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[71.283] Rewrite Iteration
0 in EvaluateNode 
[71.356] Finished GPU enumeration and pre-evaluation
[71.356] Replacing sub-graphs
0 after replace 
N = 29398   n = 29398   n * RATIO = 67615
before rebuild, nn = 29398
after rebuild, n = 29398
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29366 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29398
[71.357] Finished eval and replace
 *** Topo sort time: 0.00 sec
[71.357] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 1.92, EVAL 0.04, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29398
 before deduplicate, nNodes = 29366
 after deduplicate, nNodes = 29366, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29366
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014534
Max cover len: 21
Total number of covers: 21897
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21897
#nodes = 29347
Phase 2 time: 0.262319
Total time: 0.276970
balance: alg time 0.28, full time 0.28

*****Perform Balance*****
Phase 1 time: 0.013755
Max cover len: 21
Total number of covers: 21916
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21916
#nodes = 29336
Phase 2 time: 0.257391
Total time: 0.271247
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.014028
Max cover len: 21
Total number of covers: 21927
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21927
#nodes = 29336
Phase 2 time: 0.261383
Total time: 0.275511
balance: alg time 0.28, full time 0.28

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5083
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5157
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35636
Start reordering ...
Reordered network new nObjs: 29365, original nObjs: 29369
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[78.941] Rewrite Iteration
0 in EvaluateNode 
[79.014] Finished GPU enumeration and pre-evaluation
[79.015] Replacing sub-graphs
0 after replace 
N = 29414   n = 29364   n * RATIO = 67537
before rebuild, nn = 29364
after rebuild, n = 29409
successfully replaced 22 cones (pos 22, zero 0), reverted 8 cones, compromised 0 cones, pre-eval rejected 29302 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29409
[79.016] Finished eval and replace
 *** Topo sort time: 0.00 sec
[79.016] Rewrite Iteration Ends
real reduction: 22
** Total Time breakdown: ENUM 1.99, EVAL 0.04, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29409
 before deduplicate, nNodes = 29377
 after deduplicate, nNodes = 29373, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29373
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013697
Max cover len: 21
Total number of covers: 21946
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 21946
#nodes = 29309
Phase 2 time: 0.257765
Total time: 0.271561
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5073
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5146
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35565
Start reordering ...
Reordered network new nObjs: 29342, original nObjs: 29342
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013673
Max cover len: 21
Total number of covers: 21947
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 21947
#nodes = 29308
Phase 2 time: 0.257223
Total time: 0.270986
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[84.905] Rewrite Iteration
0 in EvaluateNode 
[84.976] Finished GPU enumeration and pre-evaluation
[84.977] Replacing sub-graphs
0 after replace 
N = 31815   n = 29340   n * RATIO = 67482
before rebuild, nn = 29340
after rebuild, n = 31805
successfully replaced 1085 cones (pos 21, zero 1064), reverted 4 cones, compromised 64 cones, pre-eval rejected 18094 cones, small cut reject 0 cones, new idx reject 10061 cones
after replace, n = 31805
[84.978] Finished eval and replace
 *** Topo sort time: 0.00 sec
[84.979] Rewrite Iteration Ends
real reduction: 21
** Total Time breakdown: ENUM 2.06, EVAL 0.04, REPLACE 0.04, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31805
 before deduplicate, nNodes = 31773
 after deduplicate, nNodes = 31772, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31772
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5062
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35699
Start reordering ...
Reordered network new nObjs: 29320, original nObjs: 29320
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[87.750] Rewrite Iteration
0 in EvaluateNode 
[87.823] Finished GPU enumeration and pre-evaluation
[87.824] Replacing sub-graphs
0 after replace 
N = 34247   n = 29319   n * RATIO = 67433
before rebuild, nn = 29319
after rebuild, n = 34065
successfully replaced 1896 cones (pos 14, zero 1882), reverted 35 cones, compromised 307 cones, pre-eval rejected 18211 cones, small cut reject 0 cones, new idx reject 8838 cones
after replace, n = 34065
[87.825] Finished eval and replace
 *** Topo sort time: 0.00 sec
[87.826] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 2.13, EVAL 0.04, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34065
 before deduplicate, nNodes = 34033
 after deduplicate, nNodes = 34033, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34033
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[89.169] Rewrite Iteration
0 in EvaluateNode 
[89.241] Finished GPU enumeration and pre-evaluation
[89.242] Replacing sub-graphs
0 after replace 
N = 32371   n = 29305   n * RATIO = 67401
before rebuild, nn = 29305
after rebuild, n = 32291
successfully replaced 1294 cones (pos 4, zero 1290), reverted 3 cones, compromised 151 cones, pre-eval rejected 18033 cones, small cut reject 0 cones, new idx reject 9792 cones
after replace, n = 32291
[89.243] Finished eval and replace
 *** Topo sort time: 0.00 sec
[89.244] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 2.20, EVAL 0.05, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32291
 before deduplicate, nNodes = 32259
 after deduplicate, nNodes = 32259, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32259
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[107.062] Rewrite Iteration
0 in EvaluateNode 
[107.170] Finished GPU enumeration and pre-evaluation
[107.171] Replacing sub-graphs
0 after replace 
N = 39369   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 38424
successfully replaced 1658 cones (pos 1658, zero 0), reverted 475 cones, compromised 499 cones, pre-eval rejected 29428 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38424
[107.172] Finished eval and replace
 *** Topo sort time: 0.00 sec
[107.173] Rewrite Iteration Ends
real reduction: 1660
** Total Time breakdown: ENUM 2.31, EVAL 0.05, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38424
 before deduplicate, nNodes = 38392
 after deduplicate, nNodes = 36977, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36977
rewrite: alg time 0.12, full time 0.12

*****Perform Balance*****
Phase 1 time: 0.015346
Max cover len: 22
Total number of covers: 22494
*** Max Level: 401
Reconstruct complete! #reconstructed covers = 22494
#nodes = 30315
Phase 2 time: 0.293016
Total time: 0.308583
balance: alg time 0.31, full time 0.31

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.48 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[110.219] Rewrite Iteration
0 in EvaluateNode 
[110.316] Finished GPU enumeration and pre-evaluation
[110.317] Replacing sub-graphs
0 after replace 
N = 36332   n = 30347   n * RATIO = 69798
before rebuild, nn = 30347
after rebuild, n = 36285
successfully replaced 3483 cones (pos 790, zero 2693), reverted 15 cones, compromised 129 cones, pre-eval rejected 17233 cones, small cut reject 0 cones, new idx reject 9455 cones
after replace, n = 36285
[110.318] Finished eval and replace
 *** Topo sort time: 0.00 sec
[110.319] Rewrite Iteration Ends
real reduction: 793
** Total Time breakdown: ENUM 2.40, EVAL 0.05, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 36285
 before deduplicate, nNodes = 36253
 after deduplicate, nNodes = 36253, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36253
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[111.808] Rewrite Iteration
0 in EvaluateNode 
[111.882] Finished GPU enumeration and pre-evaluation
[111.883] Replacing sub-graphs
0 after replace 
N = 29944   n = 29554   n * RATIO = 67974
before rebuild, nn = 29554
after rebuild, n = 29937
successfully replaced 131 cones (pos 131, zero 0), reverted 11 cones, compromised 0 cones, pre-eval rejected 29380 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29937
[111.884] Finished eval and replace
 *** Topo sort time: 0.00 sec
[111.885] Rewrite Iteration Ends
real reduction: 132
** Total Time breakdown: ENUM 2.47, EVAL 0.05, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29937
 before deduplicate, nNodes = 29905
 after deduplicate, nNodes = 29900, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29900
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014213
Max cover len: 22
Total number of covers: 21903
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21903
#nodes = 29365
Phase 2 time: 0.267966
Total time: 0.282286
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[114.729] Rewrite Iteration
0 in EvaluateNode 
[114.802] Finished GPU enumeration and pre-evaluation
[114.803] Replacing sub-graphs
0 after replace 
N = 31923   n = 29397   n * RATIO = 67613
before rebuild, nn = 29397
after rebuild, n = 31907
successfully replaced 1110 cones (pos 24, zero 1086), reverted 6 cones, compromised 60 cones, pre-eval rejected 18109 cones, small cut reject 0 cones, new idx reject 10080 cones
after replace, n = 31907
[114.804] Finished eval and replace
 *** Topo sort time: 0.00 sec
[114.805] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 2.54, EVAL 0.05, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31907
 before deduplicate, nNodes = 31875
 after deduplicate, nNodes = 31875, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31875
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5082
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35849
Start reordering ...
Reordered network new nObjs: 29362, original nObjs: 29374
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[117.408] Rewrite Iteration
0 in EvaluateNode 
[117.481] Finished GPU enumeration and pre-evaluation
[117.482] Replacing sub-graphs
0 after replace 
N = 34340   n = 29361   n * RATIO = 67530
before rebuild, nn = 29361
after rebuild, n = 34167
successfully replaced 1911 cones (pos 13, zero 1898), reverted 33 cones, compromised 319 cones, pre-eval rejected 18222 cones, small cut reject 0 cones, new idx reject 8844 cones
after replace, n = 34167
[117.483] Finished eval and replace
 *** Topo sort time: 0.00 sec
[117.484] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 2.61, EVAL 0.05, REPLACE 0.06, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34167
 before deduplicate, nNodes = 34135
 after deduplicate, nNodes = 34134, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34134
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5047
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35650
Start reordering ...
Reordered network new nObjs: 29345, original nObjs: 29348
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5026
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35143
Start reordering ...
Reordered network new nObjs: 29343, original nObjs: 29345
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[121.464] Rewrite Iteration
0 in EvaluateNode 
[121.536] Finished GPU enumeration and pre-evaluation
[121.537] Replacing sub-graphs
0 after replace 
N = 34046   n = 29342   n * RATIO = 67486
before rebuild, nn = 29342
after rebuild, n = 33796
successfully replaced 1674 cones (pos 8, zero 1666), reverted 5 cones, compromised 450 cones, pre-eval rejected 18186 cones, small cut reject 0 cones, new idx reject 8995 cones
after replace, n = 33796
[121.538] Finished eval and replace
 *** Topo sort time: 0.00 sec
[121.539] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 2.68, EVAL 0.05, REPLACE 0.06, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33796
 before deduplicate, nNodes = 33764
 after deduplicate, nNodes = 33743, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33743
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[122.960] Rewrite Iteration
0 in EvaluateNode 
[123.032] Finished GPU enumeration and pre-evaluation
[123.032] Replacing sub-graphs
0 after replace 
N = 32254   n = 29334   n * RATIO = 67468
before rebuild, nn = 29334
after rebuild, n = 32193
successfully replaced 1175 cones (pos 5, zero 1170), reverted 26 cones, compromised 153 cones, pre-eval rejected 18064 cones, small cut reject 0 cones, new idx reject 9884 cones
after replace, n = 32193
[123.033] Finished eval and replace
 *** Topo sort time: 0.00 sec
[123.034] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 2.75, EVAL 0.06, REPLACE 0.06, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32193
 before deduplicate, nNodes = 32161
 after deduplicate, nNodes = 32161, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32161
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[124.396] Rewrite Iteration
0 in EvaluateNode 
[124.467] Finished GPU enumeration and pre-evaluation
[124.468] Replacing sub-graphs
0 after replace 
N = 31812   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 31754
successfully replaced 1059 cones (pos 2, zero 1057), reverted 4 cones, compromised 106 cones, pre-eval rejected 18009 cones, small cut reject 0 cones, new idx reject 10119 cones
after replace, n = 31754
[124.469] Finished eval and replace
 *** Topo sort time: 0.00 sec
[124.470] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 2.82, EVAL 0.06, REPLACE 0.06, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31754
 before deduplicate, nNodes = 31722
 after deduplicate, nNodes = 31722, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31722
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[125.890] Rewrite Iteration
0 in EvaluateNode 
[125.962] Finished GPU enumeration and pre-evaluation
[125.962] Replacing sub-graphs
0 after replace 
N = 29330   n = 29327   n * RATIO = 67452
before rebuild, nn = 29327
after rebuild, n = 29330
successfully replaced 2 cones (pos 2, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29293 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29330
[125.963] Finished eval and replace
 *** Topo sort time: 0.00 sec
[125.964] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 2.89, EVAL 0.06, REPLACE 0.06, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29330
 before deduplicate, nNodes = 29298
 after deduplicate, nNodes = 29298, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29298
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013609
Max cover len: 22
Total number of covers: 21990
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21990
#nodes = 29284
Phase 2 time: 0.248805
Total time: 0.262516
balance: alg time 0.26, full time 0.26

*****Perform Balance*****
Phase 1 time: 0.014444
Max cover len: 21
Total number of covers: 21999
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21999
#nodes = 29280
Phase 2 time: 0.269257
Total time: 0.283809
balance: alg time 0.28, full time 0.28

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5042
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35683
Start reordering ...
Reordered network new nObjs: 29311, original nObjs: 29313
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5037
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35025
Start reordering ...
Reordered network new nObjs: 29310, original nObjs: 29311
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[133.115] Rewrite Iteration
0 in EvaluateNode 
[133.187] Finished GPU enumeration and pre-evaluation
[133.188] Replacing sub-graphs
0 after replace 
N = 34087   n = 29309   n * RATIO = 67410
before rebuild, nn = 29309
after rebuild, n = 33923
successfully replaced 1744 cones (pos 8, zero 1736), reverted 7 cones, compromised 424 cones, pre-eval rejected 18276 cones, small cut reject 0 cones, new idx reject 8826 cones
after replace, n = 33923
[133.189] Finished eval and replace
 *** Topo sort time: 0.00 sec
[133.190] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 2.96, EVAL 0.06, REPLACE 0.06, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33923
 before deduplicate, nNodes = 33891
 after deduplicate, nNodes = 33891, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33891
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5053
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35591
Start reordering ...
Reordered network new nObjs: 29301, original nObjs: 29302
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[135.985] Rewrite Iteration
0 in EvaluateNode 
[136.057] Finished GPU enumeration and pre-evaluation
[136.058] Replacing sub-graphs
0 after replace 
N = 33894   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 33695
successfully replaced 1764 cones (pos 5, zero 1759), reverted 34 cones, compromised 307 cones, pre-eval rejected 18216 cones, small cut reject 0 cones, new idx reject 8947 cones
after replace, n = 33695
[136.059] Finished eval and replace
 *** Topo sort time: 0.00 sec
[136.060] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 3.03, EVAL 0.06, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33695
 before deduplicate, nNodes = 33663
 after deduplicate, nNodes = 33663, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33663
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.016166
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.296875
Total time: 0.313275
balance: alg time 0.31, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[156.387] Rewrite Iteration
0 in EvaluateNode 
[156.493] Finished GPU enumeration and pre-evaluation
[156.494] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38617
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38617
[156.495] Finished eval and replace
 *** Topo sort time: 0.00 sec
[156.496] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 3.13, EVAL 0.06, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38617
 before deduplicate, nNodes = 38585
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.45 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[158.367] Rewrite Iteration
0 in EvaluateNode 
[158.464] Finished GPU enumeration and pre-evaluation
[158.465] Replacing sub-graphs
0 after replace 
N = 35695   n = 30180   n * RATIO = 69414
before rebuild, nn = 30180
after rebuild, n = 35660
successfully replaced 3160 cones (pos 642, zero 2518), reverted 2 cones, compromised 130 cones, pre-eval rejected 17323 cones, small cut reject 0 cones, new idx reject 9533 cones
after replace, n = 35660
[158.466] Finished eval and replace
 *** Topo sort time: 0.00 sec
[158.467] Rewrite Iteration Ends
real reduction: 642
** Total Time breakdown: ENUM 3.23, EVAL 0.07, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35660
 before deduplicate, nNodes = 35628
 after deduplicate, nNodes = 35627, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35627
rewrite: alg time 0.11, full time 0.11

*****Perform Balance*****
Phase 1 time: 0.013960
Max cover len: 21
Total number of covers: 21962
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21962
#nodes = 29474
Phase 2 time: 0.264032
Total time: 0.278095
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[161.384] Rewrite Iteration
0 in EvaluateNode 
[161.458] Finished GPU enumeration and pre-evaluation
[161.459] Replacing sub-graphs
0 after replace 
N = 32653   n = 29506   n * RATIO = 67863
before rebuild, nn = 29506
after rebuild, n = 32610
successfully replaced 1293 cones (pos 107, zero 1186), reverted 23 cones, compromised 99 cones, pre-eval rejected 17965 cones, small cut reject 0 cones, new idx reject 10094 cones
after replace, n = 32610
[161.460] Finished eval and replace
 *** Topo sort time: 0.00 sec
[161.461] Rewrite Iteration Ends
real reduction: 108
** Total Time breakdown: ENUM 3.30, EVAL 0.07, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32610
 before deduplicate, nNodes = 32578
 after deduplicate, nNodes = 32578, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32578
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5086
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36028
Start reordering ...
Reordered network new nObjs: 29385, original nObjs: 29399
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[164.491] Rewrite Iteration
0 in EvaluateNode 
[164.564] Finished GPU enumeration and pre-evaluation
[164.565] Replacing sub-graphs
0 after replace 
N = 29524   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29523
successfully replaced 44 cones (pos 44, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29305 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29523
[164.566] Finished eval and replace
 *** Topo sort time: 0.00 sec
[164.567] Rewrite Iteration Ends
real reduction: 45
** Total Time breakdown: ENUM 3.37, EVAL 0.07, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29523
 before deduplicate, nNodes = 29491
 after deduplicate, nNodes = 29490, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29490
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[166.044] Rewrite Iteration
0 in EvaluateNode 
[166.118] Finished GPU enumeration and pre-evaluation
[166.119] Replacing sub-graphs
0 after replace 
N = 29339   n = 29339   n * RATIO = 67479
before rebuild, nn = 29339
after rebuild, n = 29339
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29307 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29339
[166.119] Finished eval and replace
 *** Topo sort time: 0.00 sec
[166.120] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 3.44, EVAL 0.07, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29339
 before deduplicate, nNodes = 29307
 after deduplicate, nNodes = 29307, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29307
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5063
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35133
Start reordering ...
Reordered network new nObjs: 29338, original nObjs: 29340
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[168.967] Rewrite Iteration
0 in EvaluateNode 
[169.040] Finished GPU enumeration and pre-evaluation
[169.040] Replacing sub-graphs
0 after replace 
N = 34255   n = 29337   n * RATIO = 67475
before rebuild, nn = 29337
after rebuild, n = 34075
successfully replaced 1740 cones (pos 9, zero 1731), reverted 32 cones, compromised 450 cones, pre-eval rejected 18217 cones, small cut reject 0 cones, new idx reject 8866 cones
after replace, n = 34075
[169.041] Finished eval and replace
 *** Topo sort time: 0.00 sec
[169.042] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 3.51, EVAL 0.07, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34075
 before deduplicate, nNodes = 34043
 after deduplicate, nNodes = 34042, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34042
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[170.435] Rewrite Iteration
0 in EvaluateNode 
[170.508] Finished GPU enumeration and pre-evaluation
[170.509] Replacing sub-graphs
0 after replace 
N = 32247   n = 29328   n * RATIO = 67454
before rebuild, nn = 29328
after rebuild, n = 32175
successfully replaced 1218 cones (pos 5, zero 1213), reverted 1 cones, compromised 155 cones, pre-eval rejected 18064 cones, small cut reject 0 cones, new idx reject 9858 cones
after replace, n = 32175
[170.510] Finished eval and replace
 *** Topo sort time: 0.00 sec
[170.511] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 3.58, EVAL 0.07, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32175
 before deduplicate, nNodes = 32143
 after deduplicate, nNodes = 32143, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32143
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[171.826] Rewrite Iteration
0 in EvaluateNode 
[171.899] Finished GPU enumeration and pre-evaluation
[171.899] Replacing sub-graphs
0 after replace 
N = 29331   n = 29322   n * RATIO = 67440
before rebuild, nn = 29322
after rebuild, n = 29331
successfully replaced 5 cones (pos 5, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29285 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29331
[171.900] Finished eval and replace
 *** Topo sort time: 0.00 sec
[171.901] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 3.65, EVAL 0.07, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29331
 before deduplicate, nNodes = 29299
 after deduplicate, nNodes = 29299, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29299
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[173.251] Rewrite Iteration
0 in EvaluateNode 
[173.323] Finished GPU enumeration and pre-evaluation
[173.324] Replacing sub-graphs
0 after replace 
N = 29317   n = 29317   n * RATIO = 67429
before rebuild, nn = 29317
after rebuild, n = 29317
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29285 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29317
[173.325] Finished eval and replace
 *** Topo sort time: 0.00 sec
[173.325] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 3.72, EVAL 0.08, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29317
 before deduplicate, nNodes = 29285
 after deduplicate, nNodes = 29285, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29285
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5065
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35652
Start reordering ...
Reordered network new nObjs: 29317, original nObjs: 29318
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013584
Max cover len: 21
Total number of covers: 21985
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21985
#nodes = 29280
Phase 2 time: 0.252713
Total time: 0.266400
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5045
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35688
Start reordering ...
Reordered network new nObjs: 29312, original nObjs: 29313
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013473
Max cover len: 21
Total number of covers: 21990
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21990
#nodes = 29276
Phase 2 time: 0.250955
Total time: 0.264536
balance: alg time 0.26, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[180.511] Rewrite Iteration
0 in EvaluateNode 
[180.584] Finished GPU enumeration and pre-evaluation
[180.585] Replacing sub-graphs
0 after replace 
N = 29323   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 29321
successfully replaced 7 cones (pos 7, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29321
[180.586] Finished eval and replace
 *** Topo sort time: 0.00 sec
[180.586] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 3.79, EVAL 0.08, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29321
 before deduplicate, nNodes = 29289
 after deduplicate, nNodes = 29287, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29287
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5042
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35668
Start reordering ...
Reordered network new nObjs: 29301, original nObjs: 29302
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013363
Max cover len: 21
Total number of covers: 22001
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22001
#nodes = 29268
Phase 2 time: 0.251005
Total time: 0.264485
balance: alg time 0.26, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013686
Max cover len: 21
Total number of covers: 22001
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22001
#nodes = 29265
Phase 2 time: 0.252136
Total time: 0.265930
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[201.987] Rewrite Iteration
0 in EvaluateNode 
[202.111] Finished GPU enumeration and pre-evaluation
[202.112] Replacing sub-graphs
0 after replace 
N = 39369   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 38424
successfully replaced 1658 cones (pos 1658, zero 0), reverted 475 cones, compromised 499 cones, pre-eval rejected 29428 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38424
[202.113] Finished eval and replace
 *** Topo sort time: 0.00 sec
[202.114] Rewrite Iteration Ends
real reduction: 1660
** Total Time breakdown: ENUM 3.92, EVAL 0.08, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38424
 before deduplicate, nNodes = 38392
 after deduplicate, nNodes = 36977, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36977
rewrite: alg time 0.14, full time 0.14

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.50 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[203.505] Rewrite Iteration
0 in EvaluateNode 
[203.605] Finished GPU enumeration and pre-evaluation
[203.605] Replacing sub-graphs
0 after replace 
N = 31743   n = 30432   n * RATIO = 69993
before rebuild, nn = 30432
after rebuild, n = 31743
successfully replaced 656 cones (pos 656, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29743 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 31743
[203.606] Finished eval and replace
 *** Topo sort time: 0.00 sec
[203.607] Rewrite Iteration Ends
real reduction: 656
** Total Time breakdown: ENUM 4.01, EVAL 0.08, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31743
 before deduplicate, nNodes = 31711
 after deduplicate, nNodes = 31711, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31711
rewrite: alg time 0.11, full time 0.11

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5190
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5213
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 37144
Start reordering ...
Reordered network new nObjs: 29696, original nObjs: 29777
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.34 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[206.253] Rewrite Iteration
0 in EvaluateNode 
[206.332] Finished GPU enumeration and pre-evaluation
[206.332] Replacing sub-graphs
0 after replace 
N = 30051   n = 29695   n * RATIO = 68298
before rebuild, nn = 29695
after rebuild, n = 30002
successfully replaced 153 cones (pos 153, zero 0), reverted 54 cones, compromised 1 cones, pre-eval rejected 29455 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 30002
[206.333] Finished eval and replace
 *** Topo sort time: 0.00 sec
[206.334] Rewrite Iteration Ends
real reduction: 153
** Total Time breakdown: ENUM 4.09, EVAL 0.08, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 30002
 before deduplicate, nNodes = 29970
 after deduplicate, nNodes = 29924, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29924
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[207.583] Rewrite Iteration
0 in EvaluateNode 
[207.660] Finished GPU enumeration and pre-evaluation
[207.661] Replacing sub-graphs
0 after replace 
N = 29546   n = 29542   n * RATIO = 67946
before rebuild, nn = 29542
after rebuild, n = 29546
successfully replaced 2 cones (pos 2, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29508 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29546
[207.661] Finished eval and replace
 *** Topo sort time: 0.00 sec
[207.662] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 4.16, EVAL 0.08, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29546
 before deduplicate, nNodes = 29514
 after deduplicate, nNodes = 29514, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29514
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5164
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5248
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35478
Start reordering ...
Reordered network new nObjs: 29535, original nObjs: 29541
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[210.209] Rewrite Iteration
0 in EvaluateNode 
[210.284] Finished GPU enumeration and pre-evaluation
[210.285] Replacing sub-graphs
0 after replace 
N = 36026   n = 29534   n * RATIO = 67928
before rebuild, nn = 29534
after rebuild, n = 35748
successfully replaced 2276 cones (pos 16, zero 2260), reverted 21 cones, compromised 596 cones, pre-eval rejected 18086 cones, small cut reject 0 cones, new idx reject 8523 cones
after replace, n = 35748
[210.286] Finished eval and replace
 *** Topo sort time: 0.00 sec
[210.287] Rewrite Iteration Ends
real reduction: 17
** Total Time breakdown: ENUM 4.24, EVAL 0.09, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35748
 before deduplicate, nNodes = 35716
 after deduplicate, nNodes = 35716, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35716
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5142
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 36295
Start reordering ...
Reordered network new nObjs: 29503, original nObjs: 29518
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013703
Max cover len: 21
Total number of covers: 21896
*** Max Level: 358
Reconstruct complete! #reconstructed covers = 21896
#nodes = 29409
Phase 2 time: 0.256415
Total time: 0.270312
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[214.434] Rewrite Iteration
0 in EvaluateNode 
[214.507] Finished GPU enumeration and pre-evaluation
[214.507] Replacing sub-graphs
0 after replace 
N = 32377   n = 29441   n * RATIO = 67714
before rebuild, nn = 29441
after rebuild, n = 32322
successfully replaced 1224 cones (pos 82, zero 1142), reverted 7 cones, compromised 92 cones, pre-eval rejected 17983 cones, small cut reject 0 cones, new idx reject 10103 cones
after replace, n = 32322
[214.508] Finished eval and replace
 *** Topo sort time: 0.00 sec
[214.509] Rewrite Iteration Ends
real reduction: 86
** Total Time breakdown: ENUM 4.31, EVAL 0.09, REPLACE 0.09, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32322
 before deduplicate, nNodes = 32290
 after deduplicate, nNodes = 32289, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32289
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013876
Max cover len: 21
Total number of covers: 21988
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 21988
#nodes = 29312
Phase 2 time: 0.251798
Total time: 0.265779
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[217.358] Rewrite Iteration
0 in EvaluateNode 
[217.429] Finished GPU enumeration and pre-evaluation
[217.430] Replacing sub-graphs
0 after replace 
N = 29483   n = 29344   n * RATIO = 67491
before rebuild, nn = 29344
after rebuild, n = 29478
successfully replaced 40 cones (pos 40, zero 0), reverted 5 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29478
[217.431] Finished eval and replace
 *** Topo sort time: 0.00 sec
[217.431] Rewrite Iteration Ends
real reduction: 40
** Total Time breakdown: ENUM 4.38, EVAL 0.09, REPLACE 0.09, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29478
 before deduplicate, nNodes = 29446
 after deduplicate, nNodes = 29441, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29441
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[218.760] Rewrite Iteration
0 in EvaluateNode 
[218.832] Finished GPU enumeration and pre-evaluation
[218.833] Replacing sub-graphs
0 after replace 
N = 29307   n = 29304   n * RATIO = 67399
before rebuild, nn = 29304
after rebuild, n = 29306
successfully replaced 1 cones (pos 1, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29270 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29306
[218.833] Finished eval and replace
 *** Topo sort time: 0.00 sec
[218.834] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 4.45, EVAL 0.09, REPLACE 0.09, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29306
 before deduplicate, nNodes = 29274
 after deduplicate, nNodes = 29273, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29273
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014092
Max cover len: 21
Total number of covers: 22011
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22011
#nodes = 29268
Phase 2 time: 0.253754
Total time: 0.267949
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[221.681] Rewrite Iteration
0 in EvaluateNode 
[221.753] Finished GPU enumeration and pre-evaluation
[221.753] Replacing sub-graphs
0 after replace 
N = 31595   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 31587
successfully replaced 1018 cones (pos 5, zero 1013), reverted 2 cones, compromised 53 cones, pre-eval rejected 18097 cones, small cut reject 0 cones, new idx reject 10098 cones
after replace, n = 31587
[221.754] Finished eval and replace
 *** Topo sort time: 0.00 sec
[221.755] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 4.52, EVAL 0.09, REPLACE 0.09, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31587
 before deduplicate, nNodes = 31555
 after deduplicate, nNodes = 31555, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31555
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[223.131] Rewrite Iteration
0 in EvaluateNode 
[223.204] Finished GPU enumeration and pre-evaluation
[223.205] Replacing sub-graphs
0 after replace 
N = 29306   n = 29295   n * RATIO = 67378
before rebuild, nn = 29295
after rebuild, n = 29306
successfully replaced 6 cones (pos 6, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29257 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29306
[223.205] Finished eval and replace
 *** Topo sort time: 0.00 sec
[223.206] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 4.59, EVAL 0.09, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29306
 before deduplicate, nNodes = 29274
 after deduplicate, nNodes = 29274, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29274
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[224.470] Rewrite Iteration
0 in EvaluateNode 
[224.543] Finished GPU enumeration and pre-evaluation
[224.544] Replacing sub-graphs
0 after replace 
N = 31219   n = 29289   n * RATIO = 67364
before rebuild, nn = 29289
after rebuild, n = 31213
successfully replaced 857 cones (pos 1, zero 856), reverted 1 cones, compromised 39 cones, pre-eval rejected 18144 cones, small cut reject 0 cones, new idx reject 10216 cones
after replace, n = 31213
[224.544] Finished eval and replace
 *** Topo sort time: 0.00 sec
[224.545] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 4.66, EVAL 0.09, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31213
 before deduplicate, nNodes = 31181
 after deduplicate, nNodes = 31181, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31181
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5049
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35687
Start reordering ...
Reordered network new nObjs: 29287, original nObjs: 29289
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013575
Max cover len: 21
Total number of covers: 22035
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22035
#nodes = 29253
Phase 2 time: 0.247350
Total time: 0.261039
balance: alg time 0.26, full time 0.26

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5035
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35651
Start reordering ...
Reordered network new nObjs: 29286, original nObjs: 29286
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5033
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35060
Start reordering ...
Reordered network new nObjs: 29286, original nObjs: 29286
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[247.962] Rewrite Iteration
0 in EvaluateNode 
[248.071] Finished GPU enumeration and pre-evaluation
[248.072] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[248.074] Finished eval and replace
 *** Topo sort time: 0.00 sec
[248.076] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 4.76, EVAL 0.10, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.53 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[249.694] Rewrite Iteration
0 in EvaluateNode 
[249.793] Finished GPU enumeration and pre-evaluation
[249.794] Replacing sub-graphs
0 after replace 
N = 32547   n = 30557   n * RATIO = 70281
before rebuild, nn = 30557
after rebuild, n = 32512
successfully replaced 939 cones (pos 939, zero 0), reverted 43 cones, compromised 8 cones, pre-eval rejected 29535 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 32512
[249.795] Finished eval and replace
 *** Topo sort time: 0.00 sec
[249.795] Rewrite Iteration Ends
real reduction: 941
** Total Time breakdown: ENUM 4.86, EVAL 0.10, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32512
 before deduplicate, nNodes = 32480
 after deduplicate, nNodes = 32447, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32447
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.33 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[251.093] Rewrite Iteration
0 in EvaluateNode 
[251.173] Finished GPU enumeration and pre-evaluation
[251.173] Replacing sub-graphs
0 after replace 
N = 36679   n = 29616   n * RATIO = 68116
before rebuild, nn = 29616
after rebuild, n = 36502
successfully replaced 2224 cones (pos 45, zero 2179), reverted 13 cones, compromised 834 cones, pre-eval rejected 17629 cones, small cut reject 0 cones, new idx reject 8884 cones
after replace, n = 36502
[251.174] Finished eval and replace
 *** Topo sort time: 0.00 sec
[251.176] Rewrite Iteration Ends
real reduction: 45
** Total Time breakdown: ENUM 4.94, EVAL 0.10, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 36502
 before deduplicate, nNodes = 36470
 after deduplicate, nNodes = 36470, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36470
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5188
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36442
Start reordering ...
Reordered network new nObjs: 29549, original nObjs: 29572
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5169
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35904
Start reordering ...
Reordered network new nObjs: 29540, original nObjs: 29549
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[255.239] Rewrite Iteration
0 in EvaluateNode 
[255.315] Finished GPU enumeration and pre-evaluation
[255.315] Replacing sub-graphs
0 after replace 
N = 29706   n = 29539   n * RATIO = 67939
before rebuild, nn = 29539
after rebuild, n = 29700
successfully replaced 52 cones (pos 52, zero 0), reverted 9 cones, compromised 1 cones, pre-eval rejected 29445 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29700
[255.316] Finished eval and replace
 *** Topo sort time: 0.00 sec
[255.317] Rewrite Iteration Ends
real reduction: 52
** Total Time breakdown: ENUM 5.01, EVAL 0.10, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29700
 before deduplicate, nNodes = 29668
 after deduplicate, nNodes = 29662, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29662
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5155
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35611
Start reordering ...
Reordered network new nObjs: 29482, original nObjs: 29488
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015008
Max cover len: 22
Total number of covers: 21865
*** Max Level: 356
Reconstruct complete! #reconstructed covers = 21865
#nodes = 29381
Phase 2 time: 0.264753
Total time: 0.280009
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[259.525] Rewrite Iteration
0 in EvaluateNode 
[259.598] Finished GPU enumeration and pre-evaluation
[259.599] Replacing sub-graphs
0 after replace 
N = 29535   n = 29413   n * RATIO = 67649
before rebuild, nn = 29413
after rebuild, n = 29516
successfully replaced 52 cones (pos 52, zero 0), reverted 22 cones, compromised 0 cones, pre-eval rejected 29307 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29516
[259.599] Finished eval and replace
 *** Topo sort time: 0.00 sec
[259.600] Rewrite Iteration Ends
real reduction: 54
** Total Time breakdown: ENUM 5.08, EVAL 0.10, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29516
 before deduplicate, nNodes = 29484
 after deduplicate, nNodes = 29468, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29468
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5066
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35635
Start reordering ...
Reordered network new nObjs: 29356, original nObjs: 29360
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014199
Max cover len: 22
Total number of covers: 21975
*** Max Level: 356
Reconstruct complete! #reconstructed covers = 21975
#nodes = 29310
Phase 2 time: 0.259236
Total time: 0.273539
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[263.650] Rewrite Iteration
0 in EvaluateNode 
[263.723] Finished GPU enumeration and pre-evaluation
[263.724] Replacing sub-graphs
0 after replace 
N = 29373   n = 29342   n * RATIO = 67486
before rebuild, nn = 29342
after rebuild, n = 29368
successfully replaced 12 cones (pos 12, zero 0), reverted 6 cones, compromised 0 cones, pre-eval rejected 29292 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29368
[263.724] Finished eval and replace
 *** Topo sort time: 0.00 sec
[263.725] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 5.15, EVAL 0.10, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29368
 before deduplicate, nNodes = 29336
 after deduplicate, nNodes = 29332, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29332
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[265.053] Rewrite Iteration
0 in EvaluateNode 
[265.125] Finished GPU enumeration and pre-evaluation
[265.126] Replacing sub-graphs
0 after replace 
N = 29333   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 29333
successfully replaced 2 cones (pos 2, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29295 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29333
[265.126] Finished eval and replace
 *** Topo sort time: 0.00 sec
[265.127] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 5.22, EVAL 0.11, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29333
 before deduplicate, nNodes = 29301
 after deduplicate, nNodes = 29301, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29301
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[266.490] Rewrite Iteration
0 in EvaluateNode 
[266.563] Finished GPU enumeration and pre-evaluation
[266.564] Replacing sub-graphs
0 after replace 
N = 29327   n = 29327   n * RATIO = 67452
before rebuild, nn = 29327
after rebuild, n = 29327
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29295 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29327
[266.564] Finished eval and replace
 *** Topo sort time: 0.00 sec
[266.565] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 5.29, EVAL 0.11, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29327
 before deduplicate, nNodes = 29295
 after deduplicate, nNodes = 29295, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29295
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013818
Max cover len: 22
Total number of covers: 21997
*** Max Level: 356
Reconstruct complete! #reconstructed covers = 21997
#nodes = 29293
Phase 2 time: 0.252868
Total time: 0.266794
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013667
Max cover len: 22
Total number of covers: 21999
*** Max Level: 356
Reconstruct complete! #reconstructed covers = 21999
#nodes = 29287
Phase 2 time: 0.253459
Total time: 0.267244
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[270.934] Rewrite Iteration
0 in EvaluateNode 
[271.007] Finished GPU enumeration and pre-evaluation
[271.008] Replacing sub-graphs
0 after replace 
N = 29347   n = 29319   n * RATIO = 67433
before rebuild, nn = 29319
after rebuild, n = 29346
successfully replaced 13 cones (pos 13, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29272 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29346
[271.009] Finished eval and replace
 *** Topo sort time: 0.00 sec
[271.009] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 5.36, EVAL 0.11, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29346
 before deduplicate, nNodes = 29314
 after deduplicate, nNodes = 29313, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29313
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[272.404] Rewrite Iteration
0 in EvaluateNode 
[272.476] Finished GPU enumeration and pre-evaluation
[272.477] Replacing sub-graphs
0 after replace 
N = 31719   n = 29306   n * RATIO = 67403
before rebuild, nn = 29306
after rebuild, n = 31714
successfully replaced 1032 cones (pos 2, zero 1030), reverted 2 cones, compromised 64 cones, pre-eval rejected 18108 cones, small cut reject 0 cones, new idx reject 10068 cones
after replace, n = 31714
[272.478] Finished eval and replace
 *** Topo sort time: 0.00 sec
[272.479] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 5.43, EVAL 0.11, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31714
 before deduplicate, nNodes = 31682
 after deduplicate, nNodes = 31682, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31682
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35634
Start reordering ...
Reordered network new nObjs: 29304, original nObjs: 29305
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013650
Max cover len: 22
Total number of covers: 21996
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21996
#nodes = 29267
Phase 2 time: 0.258696
Total time: 0.272453
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[276.738] Rewrite Iteration
0 in EvaluateNode 
[276.811] Finished GPU enumeration and pre-evaluation
[276.811] Replacing sub-graphs
0 after replace 
N = 29299   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 29299
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29299
[276.812] Finished eval and replace
 *** Topo sort time: 0.00 sec
[276.812] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 5.50, EVAL 0.11, REPLACE 0.11, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29299
 before deduplicate, nNodes = 29267
 after deduplicate, nNodes = 29267, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29267
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.016239
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.295231
Total time: 0.311711
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[297.737] Rewrite Iteration
0 in EvaluateNode 
[297.825] Finished GPU enumeration and pre-evaluation
[297.826] Replacing sub-graphs
0 after replace 
N = 36096   n = 30754   n * RATIO = 70734
before rebuild, nn = 30754
after rebuild, n = 35148
successfully replaced 1185 cones (pos 1185, zero 0), reverted 482 cones, compromised 1 cones, pre-eval rejected 29054 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 35148
[297.827] Finished eval and replace
 *** Topo sort time: 0.00 sec
[297.828] Rewrite Iteration Ends
real reduction: 1186
** Total Time breakdown: ENUM 5.59, EVAL 0.11, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35148
 before deduplicate, nNodes = 35116
 after deduplicate, nNodes = 33700, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33700
rewrite: alg time 0.10, full time 0.11

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5063
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5150
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35202
Start reordering ...
Reordered network new nObjs: 29562, original nObjs: 29569
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.32 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[300.686] Rewrite Iteration
0 in EvaluateNode 
[300.763] Finished GPU enumeration and pre-evaluation
[300.763] Replacing sub-graphs
0 after replace 
N = 35041   n = 29561   n * RATIO = 67990
before rebuild, nn = 29561
after rebuild, n = 34773
successfully replaced 2082 cones (pos 86, zero 1996), reverted 6 cones, compromised 427 cones, pre-eval rejected 18155 cones, small cut reject 0 cones, new idx reject 8859 cones
after replace, n = 34773
[300.764] Finished eval and replace
 *** Topo sort time: 0.00 sec
[300.765] Rewrite Iteration Ends
real reduction: 88
** Total Time breakdown: ENUM 5.66, EVAL 0.11, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34773
 before deduplicate, nNodes = 34741
 after deduplicate, nNodes = 34741, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34741
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[302.092] Rewrite Iteration
0 in EvaluateNode 
[302.166] Finished GPU enumeration and pre-evaluation
[302.167] Replacing sub-graphs
0 after replace 
N = 33057   n = 29473   n * RATIO = 67787
before rebuild, nn = 29473
after rebuild, n = 32895
successfully replaced 1399 cones (pos 46, zero 1353), reverted 10 cones, compromised 191 cones, pre-eval rejected 17947 cones, small cut reject 0 cones, new idx reject 9894 cones
after replace, n = 32895
[302.168] Finished eval and replace
 *** Topo sort time: 0.00 sec
[302.169] Rewrite Iteration Ends
real reduction: 48
** Total Time breakdown: ENUM 5.73, EVAL 0.12, REPLACE 0.12, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32895
 before deduplicate, nNodes = 32863
 after deduplicate, nNodes = 32863, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32863
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5094
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35935
Start reordering ...
Reordered network new nObjs: 29420, original nObjs: 29426
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013710
Max cover len: 21
Total number of covers: 21888
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21888
#nodes = 29363
Phase 2 time: 0.259071
Total time: 0.272889
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[306.511] Rewrite Iteration
0 in EvaluateNode 
[306.583] Finished GPU enumeration and pre-evaluation
[306.584] Replacing sub-graphs
0 after replace 
N = 31874   n = 29395   n * RATIO = 67608
before rebuild, nn = 29395
after rebuild, n = 31856
successfully replaced 1096 cones (pos 65, zero 1031), reverted 7 cones, compromised 43 cones, pre-eval rejected 18037 cones, small cut reject 0 cones, new idx reject 10180 cones
after replace, n = 31856
[306.585] Finished eval and replace
 *** Topo sort time: 0.00 sec
[306.586] Rewrite Iteration Ends
real reduction: 66
** Total Time breakdown: ENUM 5.80, EVAL 0.12, REPLACE 0.12, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31856
 before deduplicate, nNodes = 31824
 after deduplicate, nNodes = 31823, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31823
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[308.001] Rewrite Iteration
0 in EvaluateNode 
[308.073] Finished GPU enumeration and pre-evaluation
[308.073] Replacing sub-graphs
0 after replace 
N = 29344   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 29343
successfully replaced 9 cones (pos 9, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29285 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29343
[308.074] Finished eval and replace
 *** Topo sort time: 0.00 sec
[308.075] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 5.87, EVAL 0.12, REPLACE 0.12, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29343
 before deduplicate, nNodes = 29311
 after deduplicate, nNodes = 29310, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29310
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[309.399] Rewrite Iteration
0 in EvaluateNode 
[309.470] Finished GPU enumeration and pre-evaluation
[309.471] Replacing sub-graphs
0 after replace 
N = 31214   n = 29320   n * RATIO = 67436
before rebuild, nn = 29320
after rebuild, n = 31206
successfully replaced 848 cones (pos 1, zero 847), reverted 0 cones, compromised 41 cones, pre-eval rejected 18104 cones, small cut reject 0 cones, new idx reject 10295 cones
after replace, n = 31206
[309.472] Finished eval and replace
 *** Topo sort time: 0.00 sec
[309.473] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 5.94, EVAL 0.12, REPLACE 0.12, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31206
 before deduplicate, nNodes = 31174
 after deduplicate, nNodes = 31174, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31174
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5058
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35728
Start reordering ...
Reordered network new nObjs: 29318, original nObjs: 29320
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013474
Max cover len: 21
Total number of covers: 21968
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21968
#nodes = 29277
Phase 2 time: 0.248990
Total time: 0.262571
balance: alg time 0.26, full time 0.26

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[313.791] Rewrite Iteration
0 in EvaluateNode 
[313.862] Finished GPU enumeration and pre-evaluation
[313.863] Replacing sub-graphs
0 after replace 
N = 31572   n = 29309   n * RATIO = 67410
before rebuild, nn = 29309
after rebuild, n = 31565
successfully replaced 1025 cones (pos 5, zero 1020), reverted 1 cones, compromised 39 cones, pre-eval rejected 18101 cones, small cut reject 0 cones, new idx reject 10111 cones
after replace, n = 31565
[313.864] Finished eval and replace
 *** Topo sort time: 0.00 sec
[313.865] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 6.01, EVAL 0.12, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31565
 before deduplicate, nNodes = 31533
 after deduplicate, nNodes = 31533, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31533
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[315.291] Rewrite Iteration
0 in EvaluateNode 
[315.363] Finished GPU enumeration and pre-evaluation
[315.364] Replacing sub-graphs
0 after replace 
N = 29310   n = 29304   n * RATIO = 67399
before rebuild, nn = 29304
after rebuild, n = 29310
successfully replaced 4 cones (pos 4, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29310
[315.364] Finished eval and replace
 *** Topo sort time: 0.00 sec
[315.365] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 6.08, EVAL 0.12, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29310
 before deduplicate, nNodes = 29278
 after deduplicate, nNodes = 29278, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29278
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013923
Max cover len: 21
Total number of covers: 22000
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22000
#nodes = 29265
Phase 2 time: 0.250138
Total time: 0.264164
balance: alg time 0.26, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[318.334] Rewrite Iteration
0 in EvaluateNode 
[318.405] Finished GPU enumeration and pre-evaluation
[318.406] Replacing sub-graphs
0 after replace 
N = 31523   n = 29297   n * RATIO = 67383
before rebuild, nn = 29297
after rebuild, n = 31518
successfully replaced 1021 cones (pos 0, zero 1021), reverted 0 cones, compromised 34 cones, pre-eval rejected 18108 cones, small cut reject 0 cones, new idx reject 10102 cones
after replace, n = 31518
[318.407] Finished eval and replace
 *** Topo sort time: 0.00 sec
[318.408] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 6.15, EVAL 0.12, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31518
 before deduplicate, nNodes = 31486
 after deduplicate, nNodes = 31486, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31486
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[319.801] Rewrite Iteration
0 in EvaluateNode 
[319.873] Finished GPU enumeration and pre-evaluation
[319.874] Replacing sub-graphs
0 after replace 
N = 31113   n = 29297   n * RATIO = 67383
before rebuild, nn = 29297
after rebuild, n = 31102
successfully replaced 829 cones (pos 0, zero 829), reverted 0 cones, compromised 35 cones, pre-eval rejected 18144 cones, small cut reject 0 cones, new idx reject 10257 cones
after replace, n = 31102
[319.875] Finished eval and replace
 *** Topo sort time: 0.00 sec
[319.875] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 6.22, EVAL 0.13, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31102
 before deduplicate, nNodes = 31070
 after deduplicate, nNodes = 31070, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31070
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[321.183] Rewrite Iteration
0 in EvaluateNode 
[321.255] Finished GPU enumeration and pre-evaluation
[321.256] Replacing sub-graphs
0 after replace 
N = 29306   n = 29297   n * RATIO = 67383
before rebuild, nn = 29297
after rebuild, n = 29306
successfully replaced 5 cones (pos 5, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29260 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29306
[321.256] Finished eval and replace
 *** Topo sort time: 0.00 sec
[321.257] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 6.29, EVAL 0.13, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29306
 before deduplicate, nNodes = 29274
 after deduplicate, nNodes = 29274, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29274
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35669
Start reordering ...
Reordered network new nObjs: 29292, original nObjs: 29293
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5044
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35009
Start reordering ...
Reordered network new nObjs: 29292, original nObjs: 29292
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015811
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.293387
Total time: 0.309428
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015398
Max cover len: 21
Total number of covers: 23500
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23500
#nodes = 30685
Phase 2 time: 0.288247
Total time: 0.303752
balance: alg time 0.30, full time 0.31

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5076
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5155
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36735
Start reordering ...
Reordered network new nObjs: 30706, original nObjs: 30718
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5065
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5145
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36354
Start reordering ...
Reordered network new nObjs: 30694, original nObjs: 30706
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014723
Max cover len: 21
Total number of covers: 23520
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23520
#nodes = 30641
Phase 2 time: 0.281301
Total time: 0.296136
balance: alg time 0.30, full time 0.30

*****Perform Balance*****
Phase 1 time: 0.014644
Max cover len: 21
Total number of covers: 23540
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23540
#nodes = 30627
Phase 2 time: 0.280062
Total time: 0.294814
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.55 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[354.350] Rewrite Iteration
0 in EvaluateNode 
[354.436] Finished GPU enumeration and pre-evaluation
[354.437] Replacing sub-graphs
0 after replace 
N = 36088   n = 30659   n * RATIO = 70515
before rebuild, nn = 30659
after rebuild, n = 35148
successfully replaced 1242 cones (pos 1242, zero 0), reverted 484 cones, compromised 0 cones, pre-eval rejected 28901 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 35148
[354.438] Finished eval and replace
 *** Topo sort time: 0.00 sec
[354.439] Rewrite Iteration Ends
real reduction: 1244
** Total Time breakdown: ENUM 6.37, EVAL 0.13, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35148
 before deduplicate, nNodes = 35116
 after deduplicate, nNodes = 33716, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33716
rewrite: alg time 0.10, full time 0.10

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[355.852] Rewrite Iteration
0 in EvaluateNode 
[355.927] Finished GPU enumeration and pre-evaluation
[355.928] Replacing sub-graphs
0 after replace 
N = 29436   n = 29415   n * RATIO = 67654
before rebuild, nn = 29415
after rebuild, n = 29432
successfully replaced 8 cones (pos 8, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29372 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29432
[355.929] Finished eval and replace
 *** Topo sort time: 0.00 sec
[355.929] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 6.44, EVAL 0.13, REPLACE 0.13, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29432
 before deduplicate, nNodes = 29400
 after deduplicate, nNodes = 29397, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29397
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014538
Max cover len: 21
Total number of covers: 22019
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22019
#nodes = 29367
Phase 2 time: 0.275147
Total time: 0.289790
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5053
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5119
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35152
Start reordering ...
Reordered network new nObjs: 29400, original nObjs: 29400
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[360.162] Rewrite Iteration
0 in EvaluateNode 
[360.238] Finished GPU enumeration and pre-evaluation
[360.239] Replacing sub-graphs
0 after replace 
N = 34306   n = 29399   n * RATIO = 67617
before rebuild, nn = 29399
after rebuild, n = 34084
successfully replaced 1916 cones (pos 21, zero 1895), reverted 17 cones, compromised 267 cones, pre-eval rejected 18252 cones, small cut reject 0 cones, new idx reject 8915 cones
after replace, n = 34084
[360.240] Finished eval and replace
 *** Topo sort time: 0.00 sec
[360.241] Rewrite Iteration Ends
real reduction: 23
** Total Time breakdown: ENUM 6.52, EVAL 0.13, REPLACE 0.14, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34084
 before deduplicate, nNodes = 34052
 after deduplicate, nNodes = 34052, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34052
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5067
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5145
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35719
Start reordering ...
Reordered network new nObjs: 29377, original nObjs: 29377
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5050
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5129
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35340
Start reordering ...
Reordered network new nObjs: 29374, original nObjs: 29377
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5128
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35221
Start reordering ...
Reordered network new nObjs: 29373, original nObjs: 29374
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[365.788] Rewrite Iteration
0 in EvaluateNode 
[365.863] Finished GPU enumeration and pre-evaluation
[365.863] Replacing sub-graphs
0 after replace 
N = 29623   n = 29372   n * RATIO = 67555
before rebuild, nn = 29372
after rebuild, n = 29619
successfully replaced 68 cones (pos 68, zero 0), reverted 4 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29619
[365.864] Finished eval and replace
 *** Topo sort time: 0.00 sec
[365.865] Rewrite Iteration Ends
real reduction: 68
** Total Time breakdown: ENUM 6.59, EVAL 0.13, REPLACE 0.14, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29619
 before deduplicate, nNodes = 29587
 after deduplicate, nNodes = 29586, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29586
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5060
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5134
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 34939
Start reordering ...
Reordered network new nObjs: 29305, original nObjs: 29305
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5070
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5141
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 34869
Start reordering ...
Reordered network new nObjs: 29305, original nObjs: 29305
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4495.88 MB, free = 19763.81 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4503.88 MB, free = 19755.81 MB, total = 24259.69 MB
[370.000] Rewrite Iteration
0 in EvaluateNode 
[370.077] Finished GPU enumeration and pre-evaluation
[370.078] Replacing sub-graphs
0 after replace 
N = 34142   n = 29304   n * RATIO = 67399
before rebuild, nn = 29304
after rebuild, n = 33777
successfully replaced 1787 cones (pos 7, zero 1780), reverted 12 cones, compromised 343 cones, pre-eval rejected 18316 cones, small cut reject 0 cones, new idx reject 8814 cones
after replace, n = 33777
[370.079] Finished eval and replace
 *** Topo sort time: 0.00 sec
[370.080] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 6.66, EVAL 0.14, REPLACE 0.14, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33777
 before deduplicate, nNodes = 33745
 after deduplicate, nNodes = 33744, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33744
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5059
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35585
Start reordering ...
Reordered network new nObjs: 29295, original nObjs: 29298
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4497.88 MB, free = 19761.81 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4505.88 MB, free = 19753.81 MB, total = 24259.69 MB
[373.154] Rewrite Iteration
0 in EvaluateNode 
[373.227] Finished GPU enumeration and pre-evaluation
[373.228] Replacing sub-graphs
0 after replace 
N = 29309   n = 29294   n * RATIO = 67376
before rebuild, nn = 29294
after rebuild, n = 29308
successfully replaced 7 cones (pos 7, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29308
[373.228] Finished eval and replace
 *** Topo sort time: 0.00 sec
[373.229] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 6.73, EVAL 0.14, REPLACE 0.14, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29308
 before deduplicate, nNodes = 29276
 after deduplicate, nNodes = 29275, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29275
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.015481
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.289768
Total time: 0.305455
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[394.744] Rewrite Iteration
0 in EvaluateNode 
[394.831] Finished GPU enumeration and pre-evaluation
[394.832] Replacing sub-graphs
0 after replace 
N = 42655   n = 30754   n * RATIO = 70734
before rebuild, nn = 30754
after rebuild, n = 40209
successfully replaced 4839 cones (pos 1206, zero 3633), reverted 26 cones, compromised 477 cones, pre-eval rejected 18035 cones, small cut reject 0 cones, new idx reject 7345 cones
after replace, n = 40209
[394.834] Finished eval and replace
 *** Topo sort time: 0.00 sec
[394.835] Rewrite Iteration Ends
real reduction: 1206
** Total Time breakdown: ENUM 6.82, EVAL 0.14, REPLACE 0.14, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40209
 before deduplicate, nNodes = 40177
 after deduplicate, nNodes = 40176, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40176
rewrite: alg time 0.10, full time 0.11

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[396.202] Rewrite Iteration
0 in EvaluateNode 
[396.278] Finished GPU enumeration and pre-evaluation
[396.279] Replacing sub-graphs
0 after replace 
N = 29815   n = 29548   n * RATIO = 67960
before rebuild, nn = 29548
after rebuild, n = 29796
successfully replaced 95 cones (pos 95, zero 0), reverted 23 cones, compromised 0 cones, pre-eval rejected 29398 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29796
[396.279] Finished eval and replace
 *** Topo sort time: 0.00 sec
[396.280] Rewrite Iteration Ends
real reduction: 97
** Total Time breakdown: ENUM 6.89, EVAL 0.14, REPLACE 0.15, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29796
 before deduplicate, nNodes = 29764
 after deduplicate, nNodes = 29749, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29749
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5094
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5178
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35422
Start reordering ...
Reordered network new nObjs: 29448, original nObjs: 29452
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014487
Max cover len: 21
Total number of covers: 21888
*** Max Level: 375
Reconstruct complete! #reconstructed covers = 21888
#nodes = 29385
Phase 2 time: 0.272250
Total time: 0.286833
balance: alg time 0.29, full time 0.29

*****Perform Balance*****
Phase 1 time: 0.014860
Max cover len: 21
Total number of covers: 21918
*** Max Level: 375
Reconstruct complete! #reconstructed covers = 21918
#nodes = 29366
Phase 2 time: 0.272577
Total time: 0.287541
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5063
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5130
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35410
Start reordering ...
Reordered network new nObjs: 29391, original nObjs: 29399
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014745
Max cover len: 21
Total number of covers: 21936
*** Max Level: 375
Reconstruct complete! #reconstructed covers = 21936
#nodes = 29351
Phase 2 time: 0.273560
Total time: 0.288414
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5058
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5125
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35369
Start reordering ...
Reordered network new nObjs: 29382, original nObjs: 29384
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[406.116] Rewrite Iteration
0 in EvaluateNode 
[406.191] Finished GPU enumeration and pre-evaluation
[406.192] Replacing sub-graphs
0 after replace 
N = 34146   n = 29381   n * RATIO = 67576
before rebuild, nn = 29381
after rebuild, n = 33963
successfully replaced 1883 cones (pos 25, zero 1858), reverted 39 cones, compromised 251 cones, pre-eval rejected 18256 cones, small cut reject 0 cones, new idx reject 8920 cones
after replace, n = 33963
[406.193] Finished eval and replace
 *** Topo sort time: 0.00 sec
[406.194] Rewrite Iteration Ends
real reduction: 25
** Total Time breakdown: ENUM 6.97, EVAL 0.14, REPLACE 0.15, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33963
 before deduplicate, nNodes = 33931
 after deduplicate, nNodes = 33931, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33931
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014468
Max cover len: 21
Total number of covers: 22008
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 22008
#nodes = 29320
Phase 2 time: 0.258586
Total time: 0.273162
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5032
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35825
Start reordering ...
Reordered network new nObjs: 29353, original nObjs: 29353
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013735
Max cover len: 21
Total number of covers: 22039
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 22039
#nodes = 29319
Phase 2 time: 0.252412
Total time: 0.266238
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5031
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35821
Start reordering ...
Reordered network new nObjs: 29352, original nObjs: 29352
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5031
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35278
Start reordering ...
Reordered network new nObjs: 29350, original nObjs: 29352
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5027
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35166
Start reordering ...
Reordered network new nObjs: 29350, original nObjs: 29350
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013926
Max cover len: 21
Total number of covers: 22016
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 22016
#nodes = 29315
Phase 2 time: 0.260375
Total time: 0.274404
balance: alg time 0.27, full time 0.28

*****Perform Balance*****
Phase 1 time: 0.013979
Max cover len: 21
Total number of covers: 22018
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 22018
#nodes = 29314
Phase 2 time: 0.258644
Total time: 0.272730
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5031
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35812
Start reordering ...
Reordered network new nObjs: 29347, original nObjs: 29347
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[420.876] Rewrite Iteration
0 in EvaluateNode 
[420.950] Finished GPU enumeration and pre-evaluation
[420.951] Replacing sub-graphs
0 after replace 
N = 29480   n = 29346   n * RATIO = 67495
before rebuild, nn = 29346
after rebuild, n = 29477
successfully replaced 35 cones (pos 35, zero 0), reverted 6 cones, compromised 0 cones, pre-eval rejected 29273 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29477
[420.952] Finished eval and replace
 *** Topo sort time: 0.00 sec
[420.952] Rewrite Iteration Ends
real reduction: 35
** Total Time breakdown: ENUM 7.04, EVAL 0.14, REPLACE 0.15, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29477
 before deduplicate, nNodes = 29445
 after deduplicate, nNodes = 29442, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29442
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5195
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 41812
Start reordering ...
Reordered network new nObjs: 30889, original nObjs: 32093
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5208
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5289
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 37248
Start reordering ...
Reordered network new nObjs: 30846, original nObjs: 30889
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.59 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[440.883] Rewrite Iteration
0 in EvaluateNode 
[440.972] Finished GPU enumeration and pre-evaluation
[440.972] Replacing sub-graphs
0 after replace 
N = 36312   n = 30845   n * RATIO = 70943
before rebuild, nn = 30845
after rebuild, n = 35366
successfully replaced 1253 cones (pos 1253, zero 0), reverted 485 cones, compromised 0 cones, pre-eval rejected 29075 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 35366
[440.974] Finished eval and replace
 *** Topo sort time: 0.00 sec
[440.974] Rewrite Iteration Ends
real reduction: 1254
** Total Time breakdown: ENUM 7.12, EVAL 0.15, REPLACE 0.15, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35366
 before deduplicate, nNodes = 35334
 after deduplicate, nNodes = 33923, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33923
rewrite: alg time 0.10, full time 0.11

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5182
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5259
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35652
Start reordering ...
Reordered network new nObjs: 29572, original nObjs: 29592
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5186
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5253
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35509
Start reordering ...
Reordered network new nObjs: 29567, original nObjs: 29572
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015843
Max cover len: 21
Total number of covers: 21889
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 21889
#nodes = 29464
Phase 2 time: 0.285377
Total time: 0.301480
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[446.412] Rewrite Iteration
0 in EvaluateNode 
[446.488] Finished GPU enumeration and pre-evaluation
[446.489] Replacing sub-graphs
0 after replace 
N = 32471   n = 29496   n * RATIO = 67840
before rebuild, nn = 29496
after rebuild, n = 32445
successfully replaced 1280 cones (pos 72, zero 1208), reverted 12 cones, compromised 89 cones, pre-eval rejected 17978 cones, small cut reject 0 cones, new idx reject 10105 cones
after replace, n = 32445
[446.490] Finished eval and replace
 *** Topo sort time: 0.00 sec
[446.491] Rewrite Iteration Ends
real reduction: 80
** Total Time breakdown: ENUM 7.20, EVAL 0.15, REPLACE 0.15, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32445
 before deduplicate, nNodes = 32413
 after deduplicate, nNodes = 32413, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32413
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[447.839] Rewrite Iteration
0 in EvaluateNode 
[447.913] Finished GPU enumeration and pre-evaluation
[447.914] Replacing sub-graphs
0 after replace 
N = 32204   n = 29416   n * RATIO = 67656
before rebuild, nn = 29416
after rebuild, n = 32118
successfully replaced 1119 cones (pos 46, zero 1073), reverted 5 cones, compromised 116 cones, pre-eval rejected 17976 cones, small cut reject 0 cones, new idx reject 10168 cones
after replace, n = 32118
[447.915] Finished eval and replace
 *** Topo sort time: 0.00 sec
[447.916] Rewrite Iteration Ends
real reduction: 46
** Total Time breakdown: ENUM 7.27, EVAL 0.15, REPLACE 0.15, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32118
 before deduplicate, nNodes = 32086
 after deduplicate, nNodes = 32086, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32086
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5064
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35945
Start reordering ...
Reordered network new nObjs: 29368, original nObjs: 29371
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013646
Max cover len: 21
Total number of covers: 21949
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21949
#nodes = 29323
Phase 2 time: 0.253279
Total time: 0.267033
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[452.086] Rewrite Iteration
0 in EvaluateNode 
[452.158] Finished GPU enumeration and pre-evaluation
[452.159] Replacing sub-graphs
0 after replace 
N = 29506   n = 29355   n * RATIO = 67516
before rebuild, nn = 29355
after rebuild, n = 29503
successfully replaced 49 cones (pos 49, zero 0), reverted 4 cones, compromised 0 cones, pre-eval rejected 29270 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29503
[452.159] Finished eval and replace
 *** Topo sort time: 0.00 sec
[452.160] Rewrite Iteration Ends
real reduction: 49
** Total Time breakdown: ENUM 7.34, EVAL 0.15, REPLACE 0.15, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29503
 before deduplicate, nNodes = 29471
 after deduplicate, nNodes = 29469, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29469
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013613
Max cover len: 20
Total number of covers: 21980
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21980
#nodes = 29264
Phase 2 time: 0.247987
Total time: 0.261704
balance: alg time 0.26, full time 0.26

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35648
Start reordering ...
Reordered network new nObjs: 29294, original nObjs: 29297
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013672
Max cover len: 20
Total number of covers: 21993
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21993
#nodes = 29259
Phase 2 time: 0.247786
Total time: 0.261562
balance: alg time 0.26, full time 0.26

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5037
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35642
Start reordering ...
Reordered network new nObjs: 29292, original nObjs: 29292
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[459.378] Rewrite Iteration
0 in EvaluateNode 
[459.452] Finished GPU enumeration and pre-evaluation
[459.452] Replacing sub-graphs
0 after replace 
N = 34019   n = 29291   n * RATIO = 67369
before rebuild, nn = 29291
after rebuild, n = 33854
successfully replaced 1791 cones (pos 14, zero 1777), reverted 39 cones, compromised 303 cones, pre-eval rejected 18223 cones, small cut reject 0 cones, new idx reject 8903 cones
after replace, n = 33854
[459.453] Finished eval and replace
 *** Topo sort time: 0.00 sec
[459.454] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 7.41, EVAL 0.15, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33854
 before deduplicate, nNodes = 33822
 after deduplicate, nNodes = 33822, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33822
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013742
Max cover len: 20
Total number of covers: 22044
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22044
#nodes = 29240
Phase 2 time: 0.250653
Total time: 0.264494
balance: alg time 0.26, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013463
Max cover len: 20
Total number of covers: 22049
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22049
#nodes = 29238
Phase 2 time: 0.244736
Total time: 0.258292
balance: alg time 0.26, full time 0.26

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.25 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[464.103] Rewrite Iteration
0 in EvaluateNode 
[464.175] Finished GPU enumeration and pre-evaluation
[464.176] Replacing sub-graphs
0 after replace 
N = 29290   n = 29270   n * RATIO = 67321
before rebuild, nn = 29270
after rebuild, n = 29287
successfully replaced 9 cones (pos 9, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29226 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29287
[464.176] Finished eval and replace
 *** Topo sort time: 0.00 sec
[464.177] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 7.48, EVAL 0.15, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29287
 before deduplicate, nNodes = 29255
 after deduplicate, nNodes = 29252, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29252
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5003
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35548
Start reordering ...
Reordered network new nObjs: 29261, original nObjs: 29262
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5005
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34979
Start reordering ...
Reordered network new nObjs: 29260, original nObjs: 29261
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015763
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.291981
Total time: 0.307955
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[487.079] Rewrite Iteration
0 in EvaluateNode 
[487.167] Finished GPU enumeration and pre-evaluation
[487.167] Replacing sub-graphs
0 after replace 
N = 42655   n = 30754   n * RATIO = 70734
before rebuild, nn = 30754
after rebuild, n = 40209
successfully replaced 4839 cones (pos 1206, zero 3633), reverted 26 cones, compromised 477 cones, pre-eval rejected 18035 cones, small cut reject 0 cones, new idx reject 7345 cones
after replace, n = 40209
[487.169] Finished eval and replace
 *** Topo sort time: 0.00 sec
[487.170] Rewrite Iteration Ends
real reduction: 1206
** Total Time breakdown: ENUM 7.57, EVAL 0.15, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40209
 before deduplicate, nNodes = 40177
 after deduplicate, nNodes = 40176, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40176
rewrite: alg time 0.10, full time 0.11

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5078
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5159
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35704
Start reordering ...
Reordered network new nObjs: 29533, original nObjs: 29549
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5050
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35453
Start reordering ...
Reordered network new nObjs: 29528, original nObjs: 29533
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5053
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5141
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35190
Start reordering ...
Reordered network new nObjs: 29526, original nObjs: 29528
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[492.469] Rewrite Iteration
0 in EvaluateNode 
[492.549] Finished GPU enumeration and pre-evaluation
[492.549] Replacing sub-graphs
0 after replace 
N = 34883   n = 29525   n * RATIO = 67907
before rebuild, nn = 29525
after rebuild, n = 34569
successfully replaced 1874 cones (pos 40, zero 1834), reverted 14 cones, compromised 452 cones, pre-eval rejected 18184 cones, small cut reject 0 cones, new idx reject 8969 cones
after replace, n = 34569
[492.551] Finished eval and replace
 *** Topo sort time: 0.00 sec
[492.552] Rewrite Iteration Ends
real reduction: 42
** Total Time breakdown: ENUM 7.64, EVAL 0.16, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34569
 before deduplicate, nNodes = 34537
 after deduplicate, nNodes = 34537, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34537
rewrite: alg time 0.09, full time 0.10

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[493.832] Rewrite Iteration
0 in EvaluateNode 
[493.906] Finished GPU enumeration and pre-evaluation
[493.907] Replacing sub-graphs
0 after replace 
N = 33075   n = 29483   n * RATIO = 67810
before rebuild, nn = 29483
after rebuild, n = 32911
successfully replaced 1369 cones (pos 65, zero 1304), reverted 10 cones, compromised 225 cones, pre-eval rejected 17953 cones, small cut reject 0 cones, new idx reject 9894 cones
after replace, n = 32911
[493.908] Finished eval and replace
 *** Topo sort time: 0.00 sec
[493.909] Rewrite Iteration Ends
real reduction: 65
** Total Time breakdown: ENUM 7.72, EVAL 0.16, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32911
 before deduplicate, nNodes = 32879
 after deduplicate, nNodes = 32879, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32879
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013627
Max cover len: 21
Total number of covers: 21898
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21898
#nodes = 29349
Phase 2 time: 0.254268
Total time: 0.267993
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[496.693] Rewrite Iteration
0 in EvaluateNode 
[496.765] Finished GPU enumeration and pre-evaluation
[496.766] Replacing sub-graphs
0 after replace 
N = 29568   n = 29381   n * RATIO = 67576
before rebuild, nn = 29381
after rebuild, n = 29550
successfully replaced 60 cones (pos 60, zero 0), reverted 26 cones, compromised 0 cones, pre-eval rejected 29263 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29550
[496.766] Finished eval and replace
 *** Topo sort time: 0.00 sec
[496.767] Rewrite Iteration Ends
real reduction: 61
** Total Time breakdown: ENUM 7.79, EVAL 0.16, REPLACE 0.16, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29550
 before deduplicate, nNodes = 29518
 after deduplicate, nNodes = 29503, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29503
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5049
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5123
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35559
Start reordering ...
Reordered network new nObjs: 29320, original nObjs: 29321
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[499.347] Rewrite Iteration
0 in EvaluateNode 
[499.419] Finished GPU enumeration and pre-evaluation
[499.420] Replacing sub-graphs
0 after replace 
N = 29339   n = 29319   n * RATIO = 67433
before rebuild, nn = 29319
after rebuild, n = 29336
successfully replaced 9 cones (pos 9, zero 0), reverted 4 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29336
[499.421] Finished eval and replace
 *** Topo sort time: 0.00 sec
[499.421] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 7.86, EVAL 0.16, REPLACE 0.17, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29336
 before deduplicate, nNodes = 29304
 after deduplicate, nNodes = 29301, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29301
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013457
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29274
Phase 2 time: 0.253857
Total time: 0.267419
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5035
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5106
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35496
Start reordering ...
Reordered network new nObjs: 29307, original nObjs: 29307
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[503.682] Rewrite Iteration
0 in EvaluateNode 
[503.754] Finished GPU enumeration and pre-evaluation
[503.755] Replacing sub-graphs
0 after replace 
N = 29320   n = 29306   n * RATIO = 67403
before rebuild, nn = 29306
after rebuild, n = 29319
successfully replaced 7 cones (pos 7, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29266 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29319
[503.755] Finished eval and replace
 *** Topo sort time: 0.00 sec
[503.756] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 7.93, EVAL 0.16, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29319
 before deduplicate, nNodes = 29287
 after deduplicate, nNodes = 29286, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29286
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[505.065] Rewrite Iteration
0 in EvaluateNode 
[505.137] Finished GPU enumeration and pre-evaluation
[505.138] Replacing sub-graphs
0 after replace 
N = 29299   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 29299
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29299
[505.139] Finished eval and replace
 *** Topo sort time: 0.00 sec
[505.139] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 8.00, EVAL 0.16, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29299
 before deduplicate, nNodes = 29267
 after deduplicate, nNodes = 29267, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29267
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014221
Max cover len: 21
Total number of covers: 21982
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21982
#nodes = 29267
Phase 2 time: 0.257667
Total time: 0.272013
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[508.046] Rewrite Iteration
0 in EvaluateNode 
[508.118] Finished GPU enumeration and pre-evaluation
[508.118] Replacing sub-graphs
0 after replace 
N = 29320   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 29317
successfully replaced 9 cones (pos 9, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29255 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29317
[508.119] Finished eval and replace
 *** Topo sort time: 0.00 sec
[508.120] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 8.07, EVAL 0.16, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29317
 before deduplicate, nNodes = 29285
 after deduplicate, nNodes = 29282, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29282
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[509.416] Rewrite Iteration
0 in EvaluateNode 
[509.488] Finished GPU enumeration and pre-evaluation
[509.489] Replacing sub-graphs
0 after replace 
N = 29290   n = 29290   n * RATIO = 67367
before rebuild, nn = 29290
after rebuild, n = 29290
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29258 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29290
[509.489] Finished eval and replace
 *** Topo sort time: 0.00 sec
[509.490] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 8.14, EVAL 0.17, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29290
 before deduplicate, nNodes = 29258
 after deduplicate, nNodes = 29258, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29258
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5028
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5101
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35468
Start reordering ...
Reordered network new nObjs: 29291, original nObjs: 29291
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[512.162] Rewrite Iteration
0 in EvaluateNode 
[512.235] Finished GPU enumeration and pre-evaluation
[512.235] Replacing sub-graphs
0 after replace 
N = 29296   n = 29290   n * RATIO = 67367
before rebuild, nn = 29290
after rebuild, n = 29294
successfully replaced 2 cones (pos 2, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29294
[512.236] Finished eval and replace
 *** Topo sort time: 0.00 sec
[512.237] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 8.21, EVAL 0.17, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29294
 before deduplicate, nNodes = 29262
 after deduplicate, nNodes = 29260, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29260
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5195
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 41812
Start reordering ...
Reordered network new nObjs: 30889, original nObjs: 32093
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.015320
Max cover len: 21
Total number of covers: 23442
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23442
#nodes = 30739
Phase 2 time: 0.286696
Total time: 0.302221
balance: alg time 0.30, full time 0.31

*****Perform Balance*****
Phase 1 time: 0.014976
Max cover len: 21
Total number of covers: 23533
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23533
#nodes = 30700
Phase 2 time: 0.287856
Total time: 0.302930
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[533.458] Rewrite Iteration
0 in EvaluateNode 
[533.545] Finished GPU enumeration and pre-evaluation
[533.546] Replacing sub-graphs
0 after replace 
N = 40535   n = 30732   n * RATIO = 70683
before rebuild, nn = 30732
after rebuild, n = 38325
successfully replaced 4243 cones (pos 1252, zero 2991), reverted 5 cones, compromised 284 cones, pre-eval rejected 17681 cones, small cut reject 0 cones, new idx reject 8487 cones
after replace, n = 38325
[533.547] Finished eval and replace
 *** Topo sort time: 0.00 sec
[533.549] Rewrite Iteration Ends
real reduction: 1260
** Total Time breakdown: ENUM 8.29, EVAL 0.17, REPLACE 0.17, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38325
 before deduplicate, nNodes = 38293
 after deduplicate, nNodes = 38292, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 38292
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.014544
Max cover len: 21
Total number of covers: 21961
*** Max Level: 376
Reconstruct complete! #reconstructed covers = 21961
#nodes = 29421
Phase 2 time: 0.272728
Total time: 0.287381
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5052
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5120
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35627
Start reordering ...
Reordered network new nObjs: 29417, original nObjs: 29454
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5049
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5129
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35033
Start reordering ...
Reordered network new nObjs: 29416, original nObjs: 29417
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[539.140] Rewrite Iteration
0 in EvaluateNode 
[539.216] Finished GPU enumeration and pre-evaluation
[539.216] Replacing sub-graphs
0 after replace 
N = 34446   n = 29415   n * RATIO = 67654
before rebuild, nn = 29415
after rebuild, n = 34218
successfully replaced 1840 cones (pos 24, zero 1816), reverted 5 cones, compromised 405 cones, pre-eval rejected 18211 cones, small cut reject 0 cones, new idx reject 8922 cones
after replace, n = 34218
[539.218] Finished eval and replace
 *** Topo sort time: 0.00 sec
[539.218] Rewrite Iteration Ends
real reduction: 26
** Total Time breakdown: ENUM 8.36, EVAL 0.17, REPLACE 0.18, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34218
 before deduplicate, nNodes = 34186
 after deduplicate, nNodes = 34186, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34186
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[540.534] Rewrite Iteration
0 in EvaluateNode 
[540.607] Finished GPU enumeration and pre-evaluation
[540.607] Replacing sub-graphs
0 after replace 
N = 32444   n = 29389   n * RATIO = 67594
before rebuild, nn = 29389
after rebuild, n = 32340
successfully replaced 1188 cones (pos 38, zero 1150), reverted 8 cones, compromised 168 cones, pre-eval rejected 17974 cones, small cut reject 0 cones, new idx reject 10019 cones
after replace, n = 32340
[540.608] Finished eval and replace
 *** Topo sort time: 0.00 sec
[540.609] Rewrite Iteration Ends
real reduction: 38
** Total Time breakdown: ENUM 8.43, EVAL 0.17, REPLACE 0.18, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32340
 before deduplicate, nNodes = 32308
 after deduplicate, nNodes = 32308, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32308
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[541.920] Rewrite Iteration
0 in EvaluateNode 
[541.991] Finished GPU enumeration and pre-evaluation
[541.991] Replacing sub-graphs
0 after replace 
N = 31687   n = 29351   n * RATIO = 67507
before rebuild, nn = 29351
after rebuild, n = 31654
successfully replaced 999 cones (pos 31, zero 968), reverted 6 cones, compromised 85 cones, pre-eval rejected 18007 cones, small cut reject 0 cones, new idx reject 10222 cones
after replace, n = 31654
[541.992] Finished eval and replace
 *** Topo sort time: 0.00 sec
[541.993] Rewrite Iteration Ends
real reduction: 31
** Total Time breakdown: ENUM 8.50, EVAL 0.17, REPLACE 0.18, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31654
 before deduplicate, nNodes = 31622
 after deduplicate, nNodes = 31622, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31622
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[543.310] Rewrite Iteration
0 in EvaluateNode 
[543.381] Finished GPU enumeration and pre-evaluation
[543.382] Replacing sub-graphs
0 after replace 
N = 31180   n = 29320   n * RATIO = 67436
before rebuild, nn = 29320
after rebuild, n = 31153
successfully replaced 793 cones (pos 4, zero 789), reverted 3 cones, compromised 82 cones, pre-eval rejected 18075 cones, small cut reject 0 cones, new idx reject 10335 cones
after replace, n = 31153
[543.382] Finished eval and replace
 *** Topo sort time: 0.00 sec
[543.383] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 8.57, EVAL 0.18, REPLACE 0.18, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31153
 before deduplicate, nNodes = 31121
 after deduplicate, nNodes = 31120, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31120
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5057
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35640
Start reordering ...
Reordered network new nObjs: 29314, original nObjs: 29317
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[546.139] Rewrite Iteration
0 in EvaluateNode 
[546.212] Finished GPU enumeration and pre-evaluation
[546.212] Replacing sub-graphs
0 after replace 
N = 34190   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 34014
successfully replaced 1876 cones (pos 5, zero 1871), reverted 36 cones, compromised 326 cones, pre-eval rejected 18180 cones, small cut reject 0 cones, new idx reject 8863 cones
after replace, n = 34014
[546.213] Finished eval and replace
 *** Topo sort time: 0.00 sec
[546.214] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 8.64, EVAL 0.18, REPLACE 0.18, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34014
 before deduplicate, nNodes = 33982
 after deduplicate, nNodes = 33982, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33982
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[547.652] Rewrite Iteration
0 in EvaluateNode 
[547.723] Finished GPU enumeration and pre-evaluation
[547.724] Replacing sub-graphs
0 after replace 
N = 32104   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 32001
successfully replaced 1128 cones (pos 7, zero 1121), reverted 7 cones, compromised 167 cones, pre-eval rejected 18020 cones, small cut reject 0 cones, new idx reject 9954 cones
after replace, n = 32001
[547.725] Finished eval and replace
 *** Topo sort time: 0.00 sec
[547.726] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 8.71, EVAL 0.18, REPLACE 0.18, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32001
 before deduplicate, nNodes = 31969
 after deduplicate, nNodes = 31969, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31969
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5058
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35607
Start reordering ...
Reordered network new nObjs: 29300, original nObjs: 29302
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5039
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35054
Start reordering ...
Reordered network new nObjs: 29300, original nObjs: 29300
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[551.934] Rewrite Iteration
0 in EvaluateNode 
[552.004] Finished GPU enumeration and pre-evaluation
[552.005] Replacing sub-graphs
0 after replace 
N = 29321   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 29321
successfully replaced 12 cones (pos 12, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29321
[552.006] Finished eval and replace
 *** Topo sort time: 0.00 sec
[552.006] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 8.78, EVAL 0.18, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29321
 before deduplicate, nNodes = 29289
 after deduplicate, nNodes = 29289, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29289
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014229
Max cover len: 21
Total number of covers: 22010
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22010
#nodes = 29250
Phase 2 time: 0.258806
Total time: 0.273142
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.014509
Max cover len: 21
Total number of covers: 22015
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22015
#nodes = 29244
Phase 2 time: 0.259923
Total time: 0.274548
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.25 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[556.630] Rewrite Iteration
0 in EvaluateNode 
[556.700] Finished GPU enumeration and pre-evaluation
[556.701] Replacing sub-graphs
0 after replace 
N = 31492   n = 29276   n * RATIO = 67334
before rebuild, nn = 29276
after rebuild, n = 31482
successfully replaced 1024 cones (pos 15, zero 1009), reverted 2 cones, compromised 35 cones, pre-eval rejected 18102 cones, small cut reject 0 cones, new idx reject 10081 cones
after replace, n = 31482
[556.702] Finished eval and replace
 *** Topo sort time: 0.00 sec
[556.703] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 8.85, EVAL 0.18, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31482
 before deduplicate, nNodes = 31450
 after deduplicate, nNodes = 31450, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31450
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.25 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[558.116] Rewrite Iteration
0 in EvaluateNode 
[558.187] Finished GPU enumeration and pre-evaluation
[558.187] Replacing sub-graphs
0 after replace 
N = 31024   n = 29261   n * RATIO = 67300
before rebuild, nn = 29261
after rebuild, n = 31019
successfully replaced 797 cones (pos 3, zero 794), reverted 6 cones, compromised 40 cones, pre-eval rejected 18116 cones, small cut reject 0 cones, new idx reject 10270 cones
after replace, n = 31019
[558.188] Finished eval and replace
 *** Topo sort time: 0.00 sec
[558.189] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 8.91, EVAL 0.18, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31019
 before deduplicate, nNodes = 30987
 after deduplicate, nNodes = 30987, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 30987
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[575.530] Rewrite Iteration
0 in EvaluateNode 
[575.639] Finished GPU enumeration and pre-evaluation
[575.640] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[575.642] Finished eval and replace
 *** Topo sort time: 0.00 sec
[575.644] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 9.02, EVAL 0.18, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.53 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[577.236] Rewrite Iteration
0 in EvaluateNode 
[577.334] Finished GPU enumeration and pre-evaluation
[577.335] Replacing sub-graphs
0 after replace 
N = 41279   n = 30557   n * RATIO = 70281
before rebuild, nn = 30557
after rebuild, n = 41029
successfully replaced 4807 cones (pos 923, zero 3884), reverted 13 cones, compromised 885 cones, pre-eval rejected 16796 cones, small cut reject 0 cones, new idx reject 8024 cones
after replace, n = 41029
[577.336] Finished eval and replace
 *** Topo sort time: 0.00 sec
[577.338] Rewrite Iteration Ends
real reduction: 924
** Total Time breakdown: ENUM 9.12, EVAL 0.19, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41029
 before deduplicate, nNodes = 40997
 after deduplicate, nNodes = 40997, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40997
rewrite: alg time 0.11, full time 0.12

*****Perform Balance*****
Phase 1 time: 0.013934
Max cover len: 22
Total number of covers: 21863
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 21863
#nodes = 29529
Phase 2 time: 0.263714
Total time: 0.277877
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.32 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[580.350] Rewrite Iteration
0 in EvaluateNode 
[580.423] Finished GPU enumeration and pre-evaluation
[580.424] Replacing sub-graphs
0 after replace 
N = 32469   n = 29561   n * RATIO = 67990
before rebuild, nn = 29561
after rebuild, n = 32442
successfully replaced 1248 cones (pos 136, zero 1112), reverted 20 cones, compromised 81 cones, pre-eval rejected 18050 cones, small cut reject 0 cones, new idx reject 10130 cones
after replace, n = 32442
[580.425] Finished eval and replace
 *** Topo sort time: 0.00 sec
[580.426] Rewrite Iteration Ends
real reduction: 143
** Total Time breakdown: ENUM 9.19, EVAL 0.19, REPLACE 0.19, REORDER 0.12, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32442
 before deduplicate, nNodes = 32410
 after deduplicate, nNodes = 32409, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32409
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013595
Max cover len: 22
Total number of covers: 21906
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21906
#nodes = 29360
Phase 2 time: 0.256671
Total time: 0.270365
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013876
Max cover len: 22
Total number of covers: 21932
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21932
#nodes = 29357
Phase 2 time: 0.259632
Total time: 0.273609
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[584.804] Rewrite Iteration
0 in EvaluateNode 
[584.876] Finished GPU enumeration and pre-evaluation
[584.876] Replacing sub-graphs
0 after replace 
N = 29455   n = 29389   n * RATIO = 67594
before rebuild, nn = 29389
after rebuild, n = 29449
successfully replaced 29 cones (pos 29, zero 0), reverted 8 cones, compromised 0 cones, pre-eval rejected 29320 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29449
[584.877] Finished eval and replace
 *** Topo sort time: 0.00 sec
[584.878] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 9.26, EVAL 0.19, REPLACE 0.20, REORDER 0.12, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29449
 before deduplicate, nNodes = 29417
 after deduplicate, nNodes = 29411, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29411
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5068
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35777
Start reordering ...
Reordered network new nObjs: 29355, original nObjs: 29361
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013592
Max cover len: 22
Total number of covers: 21963
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21963
#nodes = 29312
Phase 2 time: 0.256248
Total time: 0.269956
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[589.021] Rewrite Iteration
0 in EvaluateNode 
[589.093] Finished GPU enumeration and pre-evaluation
[589.093] Replacing sub-graphs
0 after replace 
N = 31691   n = 29344   n * RATIO = 67491
before rebuild, nn = 29344
after rebuild, n = 31680
successfully replaced 1064 cones (pos 19, zero 1045), reverted 3 cones, compromised 58 cones, pre-eval rejected 18092 cones, small cut reject 0 cones, new idx reject 10095 cones
after replace, n = 31680
[589.094] Finished eval and replace
 *** Topo sort time: 0.00 sec
[589.095] Rewrite Iteration Ends
real reduction: 19
** Total Time breakdown: ENUM 9.33, EVAL 0.19, REPLACE 0.20, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31680
 before deduplicate, nNodes = 31648
 after deduplicate, nNodes = 31647, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31647
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[590.430] Rewrite Iteration
0 in EvaluateNode 
[590.502] Finished GPU enumeration and pre-evaluation
[590.502] Replacing sub-graphs
0 after replace 
N = 29343   n = 29325   n * RATIO = 67447
before rebuild, nn = 29325
after rebuild, n = 29342
successfully replaced 9 cones (pos 9, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29282 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29342
[590.503] Finished eval and replace
 *** Topo sort time: 0.00 sec
[590.504] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 9.39, EVAL 0.19, REPLACE 0.20, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29342
 before deduplicate, nNodes = 29310
 after deduplicate, nNodes = 29309, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29309
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.017030
Max cover len: 22
Total number of covers: 22016
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22016
#nodes = 29279
Phase 2 time: 0.261395
Total time: 0.278544
balance: alg time 0.28, full time 0.28

*****Perform Balance*****
Phase 1 time: 0.013869
Max cover len: 22
Total number of covers: 22021
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22021
#nodes = 29277
Phase 2 time: 0.260595
Total time: 0.274570
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[595.089] Rewrite Iteration
0 in EvaluateNode 
[595.160] Finished GPU enumeration and pre-evaluation
[595.161] Replacing sub-graphs
0 after replace 
N = 29316   n = 29309   n * RATIO = 67410
before rebuild, nn = 29309
after rebuild, n = 29315
successfully replaced 3 cones (pos 3, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29273 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29315
[595.162] Finished eval and replace
 *** Topo sort time: 0.00 sec
[595.163] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 9.46, EVAL 0.19, REPLACE 0.20, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29315
 before deduplicate, nNodes = 29283
 after deduplicate, nNodes = 29282, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29282
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5037
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35645
Start reordering ...
Reordered network new nObjs: 29307, original nObjs: 29307
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013488
Max cover len: 22
Total number of covers: 22024
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22024
#nodes = 29273
Phase 2 time: 0.255159
Total time: 0.268753
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[599.460] Rewrite Iteration
0 in EvaluateNode 
[599.532] Finished GPU enumeration and pre-evaluation
[599.533] Replacing sub-graphs
0 after replace 
N = 29309   n = 29305   n * RATIO = 67401
before rebuild, nn = 29305
after rebuild, n = 29309
successfully replaced 2 cones (pos 2, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29271 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29309
[599.533] Finished eval and replace
 *** Topo sort time: 0.00 sec
[599.534] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 9.53, EVAL 0.19, REPLACE 0.20, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29309
 before deduplicate, nNodes = 29277
 after deduplicate, nNodes = 29277, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29277
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[600.987] Rewrite Iteration
0 in EvaluateNode 
[601.059] Finished GPU enumeration and pre-evaluation
[601.059] Replacing sub-graphs
0 after replace 
N = 31580   n = 29303   n * RATIO = 67396
before rebuild, nn = 29303
after rebuild, n = 31576
successfully replaced 1021 cones (pos 2, zero 1019), reverted 1 cones, compromised 46 cones, pre-eval rejected 18097 cones, small cut reject 0 cones, new idx reject 10106 cones
after replace, n = 31576
[601.060] Finished eval and replace
 *** Topo sort time: 0.00 sec
[601.061] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 9.60, EVAL 0.20, REPLACE 0.20, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31576
 before deduplicate, nNodes = 31544
 after deduplicate, nNodes = 31544, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31544
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[602.432] Rewrite Iteration
0 in EvaluateNode 
[602.503] Finished GPU enumeration and pre-evaluation
[602.504] Replacing sub-graphs
0 after replace 
N = 29307   n = 29301   n * RATIO = 67392
before rebuild, nn = 29301
after rebuild, n = 29307
successfully replaced 3 cones (pos 3, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29266 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29307
[602.504] Finished eval and replace
 *** Topo sort time: 0.00 sec
[602.505] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 9.67, EVAL 0.20, REPLACE 0.21, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29307
 before deduplicate, nNodes = 29275
 after deduplicate, nNodes = 29275, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29275
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[603.840] Rewrite Iteration
0 in EvaluateNode 
[603.911] Finished GPU enumeration and pre-evaluation
[603.912] Replacing sub-graphs
0 after replace 
N = 29301   n = 29298   n * RATIO = 67385
before rebuild, nn = 29298
after rebuild, n = 29301
successfully replaced 1 cones (pos 1, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29265 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29301
[603.912] Finished eval and replace
 *** Topo sort time: 0.00 sec
[603.913] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 9.74, EVAL 0.20, REPLACE 0.21, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29301
 before deduplicate, nNodes = 29269
 after deduplicate, nNodes = 29269, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29269
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[605.498] Rewrite Iteration
0 in EvaluateNode 
[605.569] Finished GPU enumeration and pre-evaluation
[605.570] Replacing sub-graphs
0 after replace 
N = 30925   n = 29297   n * RATIO = 67383
before rebuild, nn = 29297
after rebuild, n = 30919
successfully replaced 727 cones (pos 1, zero 726), reverted 0 cones, compromised 42 cones, pre-eval rejected 18102 cones, small cut reject 0 cones, new idx reject 10394 cones
after replace, n = 30919
[605.571] Finished eval and replace
 *** Topo sort time: 0.00 sec
[605.571] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 9.81, EVAL 0.20, REPLACE 0.21, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 30919
 before deduplicate, nNodes = 30887
 after deduplicate, nNodes = 30887, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 30887
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.015680
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.297298
Total time: 0.313180
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5082
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5166
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36429
Start reordering ...
Reordered network new nObjs: 30738, original nObjs: 30755
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5070
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5160
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36333
Start reordering ...
Reordered network new nObjs: 30727, original nObjs: 30738
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5079
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5163
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36292
Start reordering ...
Reordered network new nObjs: 30725, original nObjs: 30727
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.56 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[630.476] Rewrite Iteration
0 in EvaluateNode 
[630.563] Finished GPU enumeration and pre-evaluation
[630.564] Replacing sub-graphs
0 after replace 
N = 42564   n = 30724   n * RATIO = 70665
before rebuild, nn = 30724
after rebuild, n = 40141
successfully replaced 4803 cones (pos 1219, zero 3584), reverted 11 cones, compromised 544 cones, pre-eval rejected 17931 cones, small cut reject 0 cones, new idx reject 7402 cones
after replace, n = 40141
[630.566] Finished eval and replace
 *** Topo sort time: 0.00 sec
[630.567] Rewrite Iteration Ends
real reduction: 1221
** Total Time breakdown: ENUM 9.89, EVAL 0.20, REPLACE 0.21, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40141
 before deduplicate, nNodes = 40109
 after deduplicate, nNodes = 40108, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40108
rewrite: alg time 0.10, full time 0.11

*****Perform Balance*****
Phase 1 time: 0.015225
Max cover len: 21
Total number of covers: 21899
*** Max Level: 375
Reconstruct complete! #reconstructed covers = 21899
#nodes = 29444
Phase 2 time: 0.279805
Total time: 0.295160
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[633.621] Rewrite Iteration
0 in EvaluateNode 
[633.696] Finished GPU enumeration and pre-evaluation
[633.697] Replacing sub-graphs
0 after replace 
N = 32380   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 32327
successfully replaced 1248 cones (pos 87, zero 1161), reverted 11 cones, compromised 63 cones, pre-eval rejected 17990 cones, small cut reject 0 cones, new idx reject 10132 cones
after replace, n = 32327
[633.698] Finished eval and replace
 *** Topo sort time: 0.00 sec
[633.699] Rewrite Iteration Ends
real reduction: 91
** Total Time breakdown: ENUM 9.97, EVAL 0.20, REPLACE 0.21, REORDER 0.13, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32327
 before deduplicate, nNodes = 32295
 after deduplicate, nNodes = 32295, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32295
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5078
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35951
Start reordering ...
Reordered network new nObjs: 29383, original nObjs: 29386
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013990
Max cover len: 21
Total number of covers: 21951
*** Max Level: 358
Reconstruct complete! #reconstructed covers = 21951
#nodes = 29341
Phase 2 time: 0.259651
Total time: 0.273739
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[638.308] Rewrite Iteration
0 in EvaluateNode 
[638.380] Finished GPU enumeration and pre-evaluation
[638.381] Replacing sub-graphs
0 after replace 
N = 31951   n = 29373   n * RATIO = 67557
before rebuild, nn = 29373
after rebuild, n = 31939
successfully replaced 1099 cones (pos 45, zero 1054), reverted 5 cones, compromised 65 cones, pre-eval rejected 18044 cones, small cut reject 0 cones, new idx reject 10128 cones
after replace, n = 31939
[638.382] Finished eval and replace
 *** Topo sort time: 0.00 sec
[638.383] Rewrite Iteration Ends
real reduction: 45
** Total Time breakdown: ENUM 10.04, EVAL 0.20, REPLACE 0.21, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31939
 before deduplicate, nNodes = 31907
 after deduplicate, nNodes = 31907, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31907
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5064
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35771
Start reordering ...
Reordered network new nObjs: 29329, original nObjs: 29329
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[641.195] Rewrite Iteration
0 in EvaluateNode 
[641.268] Finished GPU enumeration and pre-evaluation
[641.268] Replacing sub-graphs
0 after replace 
N = 29361   n = 29328   n * RATIO = 67454
before rebuild, nn = 29328
after rebuild, n = 29356
successfully replaced 16 cones (pos 16, zero 0), reverted 5 cones, compromised 0 cones, pre-eval rejected 29275 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29356
[641.269] Finished eval and replace
 *** Topo sort time: 0.00 sec
[641.270] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 10.11, EVAL 0.21, REPLACE 0.21, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29356
 before deduplicate, nNodes = 29324
 after deduplicate, nNodes = 29319, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29319
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5052
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34985
Start reordering ...
Reordered network new nObjs: 29313, original nObjs: 29313
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013438
Max cover len: 21
Total number of covers: 21986
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21986
#nodes = 29279
Phase 2 time: 0.251461
Total time: 0.264992
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013439
Max cover len: 21
Total number of covers: 21987
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21987
#nodes = 29270
Phase 2 time: 0.254085
Total time: 0.267628
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5051
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29302, original nObjs: 29303
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[648.631] Rewrite Iteration
0 in EvaluateNode 
[648.704] Finished GPU enumeration and pre-evaluation
[648.705] Replacing sub-graphs
0 after replace 
N = 29318   n = 29301   n * RATIO = 67392
before rebuild, nn = 29301
after rebuild, n = 29316
successfully replaced 7 cones (pos 7, zero 0), reverted 5 cones, compromised 0 cones, pre-eval rejected 29257 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29316
[648.705] Finished eval and replace
 *** Topo sort time: 0.00 sec
[648.706] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 10.18, EVAL 0.21, REPLACE 0.22, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29316
 before deduplicate, nNodes = 29284
 after deduplicate, nNodes = 29282, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29282
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35041
Start reordering ...
Reordered network new nObjs: 29295, original nObjs: 29295
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013926
Max cover len: 21
Total number of covers: 22004
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22004
#nodes = 29261
Phase 2 time: 0.257990
Total time: 0.272042
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5046
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35669
Start reordering ...
Reordered network new nObjs: 29294, original nObjs: 29294
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[671.703] Rewrite Iteration
0 in EvaluateNode 
[671.812] Finished GPU enumeration and pre-evaluation
[671.813] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[671.815] Finished eval and replace
 *** Topo sort time: 0.00 sec
[671.817] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 10.28, EVAL 0.21, REPLACE 0.22, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.53 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[673.467] Rewrite Iteration
0 in EvaluateNode 
[673.565] Finished GPU enumeration and pre-evaluation
[673.566] Replacing sub-graphs
0 after replace 
N = 41279   n = 30557   n * RATIO = 70281
before rebuild, nn = 30557
after rebuild, n = 41029
successfully replaced 4807 cones (pos 923, zero 3884), reverted 13 cones, compromised 885 cones, pre-eval rejected 16796 cones, small cut reject 0 cones, new idx reject 8024 cones
after replace, n = 41029
[673.567] Finished eval and replace
 *** Topo sort time: 0.00 sec
[673.569] Rewrite Iteration Ends
real reduction: 924
** Total Time breakdown: ENUM 10.38, EVAL 0.21, REPLACE 0.22, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41029
 before deduplicate, nNodes = 40997
 after deduplicate, nNodes = 40997, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40997
rewrite: alg time 0.11, full time 0.12

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5227
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 36737
Start reordering ...
Reordered network new nObjs: 29583, original nObjs: 29634
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.32 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[676.367] Rewrite Iteration
0 in EvaluateNode 
[676.442] Finished GPU enumeration and pre-evaluation
[676.443] Replacing sub-graphs
0 after replace 
N = 35784   n = 29582   n * RATIO = 68038
before rebuild, nn = 29582
after rebuild, n = 35480
successfully replaced 2218 cones (pos 69, zero 2149), reverted 22 cones, compromised 546 cones, pre-eval rejected 18060 cones, small cut reject 0 cones, new idx reject 8704 cones
after replace, n = 35480
[676.444] Finished eval and replace
 *** Topo sort time: 0.00 sec
[676.445] Rewrite Iteration Ends
real reduction: 69
** Total Time breakdown: ENUM 10.45, EVAL 0.21, REPLACE 0.22, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35480
 before deduplicate, nNodes = 35448
 after deduplicate, nNodes = 35448, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35448
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[677.858] Rewrite Iteration
0 in EvaluateNode 
[677.930] Finished GPU enumeration and pre-evaluation
[677.931] Replacing sub-graphs
0 after replace 
N = 29591   n = 29513   n * RATIO = 67879
before rebuild, nn = 29513
after rebuild, n = 29585
successfully replaced 36 cones (pos 36, zero 0), reverted 8 cones, compromised 0 cones, pre-eval rejected 29437 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[677.932] Finished eval and replace
 *** Topo sort time: 0.00 sec
[677.932] Rewrite Iteration Ends
real reduction: 36
** Total Time breakdown: ENUM 10.52, EVAL 0.21, REPLACE 0.22, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29547, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29547
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5141
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36094
Start reordering ...
Reordered network new nObjs: 29469, original nObjs: 29478
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013933
Max cover len: 21
Total number of covers: 21872
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21872
#nodes = 29375
Phase 2 time: 0.255433
Total time: 0.269602
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[682.357] Rewrite Iteration
0 in EvaluateNode 
[682.429] Finished GPU enumeration and pre-evaluation
[682.430] Replacing sub-graphs
0 after replace 
N = 31756   n = 29407   n * RATIO = 67636
before rebuild, nn = 29407
after rebuild, n = 31729
successfully replaced 1081 cones (pos 48, zero 1033), reverted 10 cones, compromised 53 cones, pre-eval rejected 18056 cones, small cut reject 0 cones, new idx reject 10175 cones
after replace, n = 31729
[682.431] Finished eval and replace
 *** Topo sort time: 0.00 sec
[682.431] Rewrite Iteration Ends
real reduction: 52
** Total Time breakdown: ENUM 10.59, EVAL 0.22, REPLACE 0.23, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.06 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31729
 before deduplicate, nNodes = 31697
 after deduplicate, nNodes = 31696, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31696
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5062
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35779
Start reordering ...
Reordered network new nObjs: 29355, original nObjs: 29356
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35029
Start reordering ...
Reordered network new nObjs: 29353, original nObjs: 29355
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013398
Max cover len: 21
Total number of covers: 21999
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21999
#nodes = 29302
Phase 2 time: 0.253718
Total time: 0.267214
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[687.980] Rewrite Iteration
0 in EvaluateNode 
[688.052] Finished GPU enumeration and pre-evaluation
[688.053] Replacing sub-graphs
0 after replace 
N = 31531   n = 29334   n * RATIO = 67468
before rebuild, nn = 29334
after rebuild, n = 31525
successfully replaced 985 cones (pos 15, zero 970), reverted 1 cones, compromised 51 cones, pre-eval rejected 18097 cones, small cut reject 0 cones, new idx reject 10168 cones
after replace, n = 31525
[688.054] Finished eval and replace
 *** Topo sort time: 0.00 sec
[688.054] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 10.66, EVAL 0.22, REPLACE 0.23, REORDER 0.14, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31525
 before deduplicate, nNodes = 31493
 after deduplicate, nNodes = 31493, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31493
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013530
Max cover len: 21
Total number of covers: 22028
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22028
#nodes = 29284
Phase 2 time: 0.246160
Total time: 0.259798
balance: alg time 0.26, full time 0.26

*****Perform Balance*****
Phase 1 time: 0.013560
Max cover len: 21
Total number of covers: 22031
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22031
#nodes = 29282
Phase 2 time: 0.245973
Total time: 0.259633
balance: alg time 0.26, full time 0.26

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[692.595] Rewrite Iteration
0 in EvaluateNode 
[692.666] Finished GPU enumeration and pre-evaluation
[692.667] Replacing sub-graphs
0 after replace 
N = 31580   n = 29314   n * RATIO = 67422
before rebuild, nn = 29314
after rebuild, n = 31572
successfully replaced 1025 cones (pos 12, zero 1013), reverted 1 cones, compromised 48 cones, pre-eval rejected 18090 cones, small cut reject 0 cones, new idx reject 10118 cones
after replace, n = 31572
[692.668] Finished eval and replace
 *** Topo sort time: 0.00 sec
[692.669] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 10.73, EVAL 0.22, REPLACE 0.23, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31572
 before deduplicate, nNodes = 31540
 after deduplicate, nNodes = 31540, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31540
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5032
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35679
Start reordering ...
Reordered network new nObjs: 29299, original nObjs: 29301
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[695.418] Rewrite Iteration
0 in EvaluateNode 
[695.491] Finished GPU enumeration and pre-evaluation
[695.492] Replacing sub-graphs
0 after replace 
N = 34156   n = 29298   n * RATIO = 67385
before rebuild, nn = 29298
after rebuild, n = 33971
successfully replaced 1895 cones (pos 10, zero 1885), reverted 38 cones, compromised 291 cones, pre-eval rejected 18213 cones, small cut reject 0 cones, new idx reject 8829 cones
after replace, n = 33971
[695.493] Finished eval and replace
 *** Topo sort time: 0.00 sec
[695.494] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 10.80, EVAL 0.22, REPLACE 0.23, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33971
 before deduplicate, nNodes = 33939
 after deduplicate, nNodes = 33939, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33939
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[696.905] Rewrite Iteration
0 in EvaluateNode 
[696.977] Finished GPU enumeration and pre-evaluation
[696.978] Replacing sub-graphs
0 after replace 
N = 29297   n = 29288   n * RATIO = 67362
before rebuild, nn = 29288
after rebuild, n = 29296
successfully replaced 4 cones (pos 4, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29251 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29296
[696.978] Finished eval and replace
 *** Topo sort time: 0.00 sec
[696.979] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 10.87, EVAL 0.22, REPLACE 0.23, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29296
 before deduplicate, nNodes = 29264
 after deduplicate, nNodes = 29263, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29263
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5024
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35505
Start reordering ...
Reordered network new nObjs: 29284, original nObjs: 29285
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 34917
Start reordering ...
Reordered network new nObjs: 29284, original nObjs: 29284
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013425
Max cover len: 21
Total number of covers: 22091
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22091
#nodes = 29247
Phase 2 time: 0.246180
Total time: 0.259709
balance: alg time 0.26, full time 0.26

*****Perform Balance*****
Phase 1 time: 0.015856
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.295288
Total time: 0.311372
balance: alg time 0.31, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[720.149] Rewrite Iteration
0 in EvaluateNode 
[720.254] Finished GPU enumeration and pre-evaluation
[720.255] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38617
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38617
[720.256] Finished eval and replace
 *** Topo sort time: 0.00 sec
[720.257] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 10.97, EVAL 0.22, REPLACE 0.23, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38617
 before deduplicate, nNodes = 38585
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5082
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5162
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 37465
Start reordering ...
Reordered network new nObjs: 29488, original nObjs: 30181
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[722.966] Rewrite Iteration
0 in EvaluateNode 
[723.045] Finished GPU enumeration and pre-evaluation
[723.046] Replacing sub-graphs
0 after replace 
N = 34505   n = 29487   n * RATIO = 67820
before rebuild, nn = 29487
after rebuild, n = 34273
successfully replaced 1947 cones (pos 15, zero 1932), reverted 15 cones, compromised 283 cones, pre-eval rejected 18244 cones, small cut reject 0 cones, new idx reject 8966 cones
after replace, n = 34273
[723.047] Finished eval and replace
 *** Topo sort time: 0.00 sec
[723.048] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 11.05, EVAL 0.22, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34273
 before deduplicate, nNodes = 34241
 after deduplicate, nNodes = 34241, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34241
rewrite: alg time 0.09, full time 0.10

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[724.293] Rewrite Iteration
0 in EvaluateNode 
[724.368] Finished GPU enumeration and pre-evaluation
[724.369] Replacing sub-graphs
0 after replace 
N = 32793   n = 29471   n * RATIO = 67783
before rebuild, nn = 29471
after rebuild, n = 32643
successfully replaced 1273 cones (pos 46, zero 1227), reverted 3 cones, compromised 190 cones, pre-eval rejected 17983 cones, small cut reject 0 cones, new idx reject 9990 cones
after replace, n = 32643
[724.370] Finished eval and replace
 *** Topo sort time: 0.00 sec
[724.370] Rewrite Iteration Ends
real reduction: 47
** Total Time breakdown: ENUM 11.12, EVAL 0.23, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32643
 before deduplicate, nNodes = 32611
 after deduplicate, nNodes = 32611, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32611
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[725.627] Rewrite Iteration
0 in EvaluateNode 
[725.699] Finished GPU enumeration and pre-evaluation
[725.700] Replacing sub-graphs
0 after replace 
N = 32311   n = 29424   n * RATIO = 67675
before rebuild, nn = 29424
after rebuild, n = 32277
successfully replaced 1207 cones (pos 34, zero 1173), reverted 33 cones, compromised 105 cones, pre-eval rejected 17995 cones, small cut reject 0 cones, new idx reject 10052 cones
after replace, n = 32277
[725.701] Finished eval and replace
 *** Topo sort time: 0.00 sec
[725.702] Rewrite Iteration Ends
real reduction: 34
** Total Time breakdown: ENUM 11.19, EVAL 0.23, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32277
 before deduplicate, nNodes = 32245
 after deduplicate, nNodes = 32244, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32244
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013548
Max cover len: 21
Total number of covers: 21960
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21960
#nodes = 29332
Phase 2 time: 0.255018
Total time: 0.268655
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013618
Max cover len: 21
Total number of covers: 21986
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21986
#nodes = 29317
Phase 2 time: 0.253503
Total time: 0.267214
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[729.956] Rewrite Iteration
0 in EvaluateNode 
[730.028] Finished GPU enumeration and pre-evaluation
[730.029] Replacing sub-graphs
0 after replace 
N = 29423   n = 29349   n * RATIO = 67502
before rebuild, nn = 29349
after rebuild, n = 29416
successfully replaced 30 cones (pos 30, zero 0), reverted 9 cones, compromised 1 cones, pre-eval rejected 29277 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29416
[730.029] Finished eval and replace
 *** Topo sort time: 0.00 sec
[730.030] Rewrite Iteration Ends
real reduction: 31
** Total Time breakdown: ENUM 11.26, EVAL 0.23, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29416
 before deduplicate, nNodes = 29384
 after deduplicate, nNodes = 29377, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29377
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[731.273] Rewrite Iteration
0 in EvaluateNode 
[731.345] Finished GPU enumeration and pre-evaluation
[731.346] Replacing sub-graphs
0 after replace 
N = 31618   n = 29318   n * RATIO = 67431
before rebuild, nn = 29318
after rebuild, n = 31586
successfully replaced 1057 cones (pos 0, zero 1057), reverted 0 cones, compromised 43 cones, pre-eval rejected 18080 cones, small cut reject 0 cones, new idx reject 10106 cones
after replace, n = 31586
[731.347] Finished eval and replace
 *** Topo sort time: 0.00 sec
[731.348] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 11.33, EVAL 0.23, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31586
 before deduplicate, nNodes = 31554
 after deduplicate, nNodes = 31554, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31554
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5049
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35740
Start reordering ...
Reordered network new nObjs: 29315, original nObjs: 29319
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35087
Start reordering ...
Reordered network new nObjs: 29315, original nObjs: 29315
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[735.384] Rewrite Iteration
0 in EvaluateNode 
[735.457] Finished GPU enumeration and pre-evaluation
[735.458] Replacing sub-graphs
0 after replace 
N = 34231   n = 29314   n * RATIO = 67422
before rebuild, nn = 29314
after rebuild, n = 34068
successfully replaced 1735 cones (pos 11, zero 1724), reverted 31 cones, compromised 472 cones, pre-eval rejected 18252 cones, small cut reject 0 cones, new idx reject 8792 cones
after replace, n = 34068
[735.459] Finished eval and replace
 *** Topo sort time: 0.00 sec
[735.460] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 11.40, EVAL 0.23, REPLACE 0.24, REORDER 0.15, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34068
 before deduplicate, nNodes = 34036
 after deduplicate, nNodes = 34036, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34036
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[736.936] Rewrite Iteration
0 in EvaluateNode 
[737.009] Finished GPU enumeration and pre-evaluation
[737.010] Replacing sub-graphs
0 after replace 
N = 32360   n = 29301   n * RATIO = 67392
before rebuild, nn = 29301
after rebuild, n = 32258
successfully replaced 1271 cones (pos 5, zero 1266), reverted 5 cones, compromised 157 cones, pre-eval rejected 18080 cones, small cut reject 0 cones, new idx reject 9756 cones
after replace, n = 32258
[737.011] Finished eval and replace
 *** Topo sort time: 0.00 sec
[737.012] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 11.48, EVAL 0.23, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32258
 before deduplicate, nNodes = 32226
 after deduplicate, nNodes = 32226, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32226
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35626
Start reordering ...
Reordered network new nObjs: 29296, original nObjs: 29297
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014250
Max cover len: 20
Total number of covers: 22034
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22034
#nodes = 29260
Phase 2 time: 0.257987
Total time: 0.272344
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.014256
Max cover len: 20
Total number of covers: 22037
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22037
#nodes = 29255
Phase 2 time: 0.253523
Total time: 0.267888
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5032
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35711
Start reordering ...
Reordered network new nObjs: 29287, original nObjs: 29288
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5035
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 34984
Start reordering ...
Reordered network new nObjs: 29287, original nObjs: 29287
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[745.757] Rewrite Iteration
0 in EvaluateNode 
[745.831] Finished GPU enumeration and pre-evaluation
[745.831] Replacing sub-graphs
0 after replace 
N = 34387   n = 29286   n * RATIO = 67357
before rebuild, nn = 29286
after rebuild, n = 34204
successfully replaced 1819 cones (pos 4, zero 1815), reverted 9 cones, compromised 486 cones, pre-eval rejected 18246 cones, small cut reject 0 cones, new idx reject 8694 cones
after replace, n = 34204
[745.832] Finished eval and replace
 *** Topo sort time: 0.00 sec
[745.833] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 11.55, EVAL 0.24, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34204
 before deduplicate, nNodes = 34172
 after deduplicate, nNodes = 34172, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34172
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[747.169] Rewrite Iteration
0 in EvaluateNode 
[747.241] Finished GPU enumeration and pre-evaluation
[747.242] Replacing sub-graphs
0 after replace 
N = 29290   n = 29282   n * RATIO = 67348
before rebuild, nn = 29282
after rebuild, n = 29290
successfully replaced 4 cones (pos 4, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29246 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29290
[747.243] Finished eval and replace
 *** Topo sort time: 0.00 sec
[747.244] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 11.62, EVAL 0.24, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29290
 before deduplicate, nNodes = 29258
 after deduplicate, nNodes = 29258, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29258
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5195
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 41812
Start reordering ...
Reordered network new nObjs: 30889, original nObjs: 32093
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.60 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[765.628] Rewrite Iteration
0 in EvaluateNode 
[765.717] Finished GPU enumeration and pre-evaluation
[765.718] Replacing sub-graphs
0 after replace 
N = 44339   n = 30888   n * RATIO = 71042
before rebuild, nn = 30888
after rebuild, n = 41885
successfully replaced 5241 cones (pos 1259, zero 3982), reverted 29 cones, compromised 795 cones, pre-eval rejected 17841 cones, small cut reject 0 cones, new idx reject 6950 cones
after replace, n = 41885
[765.720] Finished eval and replace
 *** Topo sort time: 0.00 sec
[765.721] Rewrite Iteration Ends
real reduction: 1260
** Total Time breakdown: ENUM 11.70, EVAL 0.24, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41885
 before deduplicate, nNodes = 41853
 after deduplicate, nNodes = 41853, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 41853
rewrite: alg time 0.11, full time 0.11

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5169
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5250
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 36195
Start reordering ...
Reordered network new nObjs: 29585, original nObjs: 29629
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.32 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[768.437] Rewrite Iteration
0 in EvaluateNode 
[768.517] Finished GPU enumeration and pre-evaluation
[768.518] Replacing sub-graphs
0 after replace 
N = 29802   n = 29584   n * RATIO = 68043
before rebuild, nn = 29584
after rebuild, n = 29789
successfully replaced 71 cones (pos 71, zero 0), reverted 19 cones, compromised 0 cones, pre-eval rejected 29462 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29789
[768.518] Finished eval and replace
 *** Topo sort time: 0.00 sec
[768.519] Rewrite Iteration Ends
real reduction: 73
** Total Time breakdown: ENUM 11.78, EVAL 0.24, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29789
 before deduplicate, nNodes = 29757
 after deduplicate, nNodes = 29745, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29745
rewrite: alg time 0.09, full time 0.10

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5160
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35652
Start reordering ...
Reordered network new nObjs: 29507, original nObjs: 29512
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014796
Max cover len: 21
Total number of covers: 21851
*** Max Level: 377
Reconstruct complete! #reconstructed covers = 21851
#nodes = 29411
Phase 2 time: 0.275467
Total time: 0.290493
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5080
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5151
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35504
Start reordering ...
Reordered network new nObjs: 29439, original nObjs: 29444
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5069
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35129
Start reordering ...
Reordered network new nObjs: 29434, original nObjs: 29439
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[775.271] Rewrite Iteration
0 in EvaluateNode 
[775.348] Finished GPU enumeration and pre-evaluation
[775.349] Replacing sub-graphs
0 after replace 
N = 29568   n = 29433   n * RATIO = 67695
before rebuild, nn = 29433
after rebuild, n = 29559
successfully replaced 57 cones (pos 57, zero 0), reverted 9 cones, compromised 0 cones, pre-eval rejected 29335 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29559
[775.349] Finished eval and replace
 *** Topo sort time: 0.00 sec
[775.350] Rewrite Iteration Ends
real reduction: 61
** Total Time breakdown: ENUM 11.86, EVAL 0.24, REPLACE 0.25, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29559
 before deduplicate, nNodes = 29527
 after deduplicate, nNodes = 29519, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29519
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[776.614] Rewrite Iteration
0 in EvaluateNode 
[776.690] Finished GPU enumeration and pre-evaluation
[776.691] Replacing sub-graphs
0 after replace 
N = 34966   n = 29372   n * RATIO = 67555
before rebuild, nn = 29372
after rebuild, n = 34738
successfully replaced 1924 cones (pos 3, zero 1921), reverted 2 cones, compromised 541 cones, pre-eval rejected 18165 cones, small cut reject 0 cones, new idx reject 8708 cones
after replace, n = 34738
[776.692] Finished eval and replace
 *** Topo sort time: 0.00 sec
[776.693] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 11.93, EVAL 0.24, REPLACE 0.26, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34738
 before deduplicate, nNodes = 34706
 after deduplicate, nNodes = 34706, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34706
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[778.133] Rewrite Iteration
0 in EvaluateNode 
[778.207] Finished GPU enumeration and pre-evaluation
[778.208] Replacing sub-graphs
0 after replace 
N = 32772   n = 29369   n * RATIO = 67548
before rebuild, nn = 29369
after rebuild, n = 32693
successfully replaced 1291 cones (pos 34, zero 1257), reverted 8 cones, compromised 204 cones, pre-eval rejected 17971 cones, small cut reject 0 cones, new idx reject 9863 cones
after replace, n = 32693
[778.209] Finished eval and replace
 *** Topo sort time: 0.00 sec
[778.210] Rewrite Iteration Ends
real reduction: 34
** Total Time breakdown: ENUM 12.00, EVAL 0.24, REPLACE 0.26, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32693
 before deduplicate, nNodes = 32661
 after deduplicate, nNodes = 32661, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32661
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5078
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35653
Start reordering ...
Reordered network new nObjs: 29336, original nObjs: 29336
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[780.929] Rewrite Iteration
0 in EvaluateNode 
[781.002] Finished GPU enumeration and pre-evaluation
[781.003] Replacing sub-graphs
0 after replace 
N = 34161   n = 29335   n * RATIO = 67470
before rebuild, nn = 29335
after rebuild, n = 33928
successfully replaced 1835 cones (pos 11, zero 1824), reverted 47 cones, compromised 325 cones, pre-eval rejected 18135 cones, small cut reject 0 cones, new idx reject 8961 cones
after replace, n = 33928
[781.004] Finished eval and replace
 *** Topo sort time: 0.00 sec
[781.005] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 12.07, EVAL 0.25, REPLACE 0.26, REORDER 0.16, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.07 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33928
 before deduplicate, nNodes = 33896
 after deduplicate, nNodes = 33896, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33896
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[782.435] Rewrite Iteration
0 in EvaluateNode 
[782.507] Finished GPU enumeration and pre-evaluation
[782.508] Replacing sub-graphs
0 after replace 
N = 32294   n = 29324   n * RATIO = 67445
before rebuild, nn = 29324
after rebuild, n = 32190
successfully replaced 1226 cones (pos 12, zero 1214), reverted 9 cones, compromised 167 cones, pre-eval rejected 17993 cones, small cut reject 0 cones, new idx reject 9897 cones
after replace, n = 32190
[782.508] Finished eval and replace
 *** Topo sort time: 0.00 sec
[782.509] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 12.14, EVAL 0.25, REPLACE 0.26, REORDER 0.17, REDUNDANCY 0.03
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32190
 before deduplicate, nNodes = 32158
 after deduplicate, nNodes = 32158, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32158
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[783.878] Rewrite Iteration
0 in EvaluateNode 
[783.950] Finished GPU enumeration and pre-evaluation
[783.951] Replacing sub-graphs
0 after replace 
N = 29320   n = 29312   n * RATIO = 67417
before rebuild, nn = 29312
after rebuild, n = 29319
successfully replaced 4 cones (pos 4, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29275 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29319
[783.951] Finished eval and replace
 *** Topo sort time: 0.00 sec
[783.952] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 12.21, EVAL 0.25, REPLACE 0.26, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29319
 before deduplicate, nNodes = 29287
 after deduplicate, nNodes = 29286, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29286
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5070
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35627
Start reordering ...
Reordered network new nObjs: 29308, original nObjs: 29309
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[786.700] Rewrite Iteration
0 in EvaluateNode 
[786.773] Finished GPU enumeration and pre-evaluation
[786.774] Replacing sub-graphs
0 after replace 
N = 34163   n = 29307   n * RATIO = 67406
before rebuild, nn = 29307
after rebuild, n = 33882
successfully replaced 1808 cones (pos 6, zero 1802), reverted 14 cones, compromised 368 cones, pre-eval rejected 18186 cones, small cut reject 0 cones, new idx reject 8899 cones
after replace, n = 33882
[786.775] Finished eval and replace
 *** Topo sort time: 0.00 sec
[786.776] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 12.28, EVAL 0.25, REPLACE 0.26, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33882
 before deduplicate, nNodes = 33850
 after deduplicate, nNodes = 33850, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33850
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5061
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35655
Start reordering ...
Reordered network new nObjs: 29300, original nObjs: 29302
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[789.569] Rewrite Iteration
0 in EvaluateNode 
[789.643] Finished GPU enumeration and pre-evaluation
[789.643] Replacing sub-graphs
0 after replace 
N = 33939   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 33675
successfully replaced 1771 cones (pos 6, zero 1765), reverted 38 cones, compromised 299 cones, pre-eval rejected 18162 cones, small cut reject 0 cones, new idx reject 8997 cones
after replace, n = 33675
[789.645] Finished eval and replace
 *** Topo sort time: 0.00 sec
[789.645] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 12.35, EVAL 0.25, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33675
 before deduplicate, nNodes = 33643
 after deduplicate, nNodes = 33643, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33643
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[791.052] Rewrite Iteration
0 in EvaluateNode 
[791.124] Finished GPU enumeration and pre-evaluation
[791.124] Replacing sub-graphs
0 after replace 
N = 32088   n = 29293   n * RATIO = 67373
before rebuild, nn = 29293
after rebuild, n = 31993
successfully replaced 1151 cones (pos 9, zero 1142), reverted 5 cones, compromised 147 cones, pre-eval rejected 18016 cones, small cut reject 0 cones, new idx reject 9942 cones
after replace, n = 31993
[791.125] Finished eval and replace
 *** Topo sort time: 0.00 sec
[791.126] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 12.42, EVAL 0.25, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31993
 before deduplicate, nNodes = 31961
 after deduplicate, nNodes = 31961, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31961
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[792.531] Rewrite Iteration
0 in EvaluateNode 
[792.603] Finished GPU enumeration and pre-evaluation
[792.604] Replacing sub-graphs
0 after replace 
N = 29290   n = 29284   n * RATIO = 67353
before rebuild, nn = 29284
after rebuild, n = 29290
successfully replaced 3 cones (pos 3, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29248 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29290
[792.604] Finished eval and replace
 *** Topo sort time: 0.00 sec
[792.605] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 12.49, EVAL 0.25, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29290
 before deduplicate, nNodes = 29258
 after deduplicate, nNodes = 29258, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29258
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.015779
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.298106
Total time: 0.314126
balance: alg time 0.31, full time 0.32

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5082
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5166
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36429
Start reordering ...
Reordered network new nObjs: 30738, original nObjs: 30755
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[814.783] Rewrite Iteration
0 in EvaluateNode 
[814.870] Finished GPU enumeration and pre-evaluation
[814.870] Replacing sub-graphs
0 after replace 
N = 42781   n = 30737   n * RATIO = 70695
before rebuild, nn = 30737
after rebuild, n = 40373
successfully replaced 4863 cones (pos 1227, zero 3636), reverted 12 cones, compromised 585 cones, pre-eval rejected 17940 cones, small cut reject 0 cones, new idx reject 7305 cones
after replace, n = 40373
[814.872] Finished eval and replace
 *** Topo sort time: 0.00 sec
[814.873] Rewrite Iteration Ends
real reduction: 1230
** Total Time breakdown: ENUM 12.58, EVAL 0.26, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40373
 before deduplicate, nNodes = 40341
 after deduplicate, nNodes = 40340, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40340
rewrite: alg time 0.10, full time 0.11

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5110
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5200
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35697
Start reordering ...
Reordered network new nObjs: 29492, original nObjs: 29508
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5072
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5159
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35148
Start reordering ...
Reordered network new nObjs: 29488, original nObjs: 29492
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[819.011] Rewrite Iteration
0 in EvaluateNode 
[819.089] Finished GPU enumeration and pre-evaluation
[819.089] Replacing sub-graphs
0 after replace 
N = 34741   n = 29487   n * RATIO = 67820
before rebuild, nn = 29487
after rebuild, n = 34328
successfully replaced 1837 cones (pos 23, zero 1814), reverted 16 cones, compromised 453 cones, pre-eval rejected 18197 cones, small cut reject 0 cones, new idx reject 8951 cones
after replace, n = 34328
[819.090] Finished eval and replace
 *** Topo sort time: 0.00 sec
[819.091] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 12.65, EVAL 0.26, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34328
 before deduplicate, nNodes = 34296
 after deduplicate, nNodes = 34296, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34296
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5097
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 36114
Start reordering ...
Reordered network new nObjs: 29456, original nObjs: 29464
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013788
Max cover len: 21
Total number of covers: 21888
*** Max Level: 358
Reconstruct complete! #reconstructed covers = 21888
#nodes = 29395
Phase 2 time: 0.258183
Total time: 0.272088
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[823.383] Rewrite Iteration
0 in EvaluateNode 
[823.456] Finished GPU enumeration and pre-evaluation
[823.456] Replacing sub-graphs
0 after replace 
N = 29720   n = 29427   n * RATIO = 67682
before rebuild, nn = 29427
after rebuild, n = 29708
successfully replaced 86 cones (pos 86, zero 0), reverted 42 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29708
[823.457] Finished eval and replace
 *** Topo sort time: 0.00 sec
[823.458] Rewrite Iteration Ends
real reduction: 87
** Total Time breakdown: ENUM 12.72, EVAL 0.26, REPLACE 0.27, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29708
 before deduplicate, nNodes = 29676
 after deduplicate, nNodes = 29668, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29668
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[824.722] Rewrite Iteration
0 in EvaluateNode 
[824.795] Finished GPU enumeration and pre-evaluation
[824.796] Replacing sub-graphs
0 after replace 
N = 29340   n = 29340   n * RATIO = 67482
before rebuild, nn = 29340
after rebuild, n = 29340
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29308 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29340
[824.796] Finished eval and replace
 *** Topo sort time: 0.00 sec
[824.797] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 12.79, EVAL 0.26, REPLACE 0.28, REORDER 0.17, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29340
 before deduplicate, nNodes = 29308
 after deduplicate, nNodes = 29308, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29308
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[826.107] Rewrite Iteration
0 in EvaluateNode 
[826.180] Finished GPU enumeration and pre-evaluation
[826.180] Replacing sub-graphs
0 after replace 
N = 31878   n = 29340   n * RATIO = 67482
before rebuild, nn = 29340
after rebuild, n = 31862
successfully replaced 1090 cones (pos 2, zero 1088), reverted 2 cones, compromised 58 cones, pre-eval rejected 18058 cones, small cut reject 0 cones, new idx reject 10100 cones
after replace, n = 31862
[826.181] Finished eval and replace
 *** Topo sort time: 0.00 sec
[826.182] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 12.86, EVAL 0.26, REPLACE 0.28, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31862
 before deduplicate, nNodes = 31830
 after deduplicate, nNodes = 31829, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31829
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[827.527] Rewrite Iteration
0 in EvaluateNode 
[827.600] Finished GPU enumeration and pre-evaluation
[827.601] Replacing sub-graphs
0 after replace 
N = 30936   n = 29338   n * RATIO = 67477
before rebuild, nn = 29338
after rebuild, n = 30926
successfully replaced 723 cones (pos 8, zero 715), reverted 2 cones, compromised 33 cones, pre-eval rejected 18095 cones, small cut reject 0 cones, new idx reject 10453 cones
after replace, n = 30926
[827.602] Finished eval and replace
 *** Topo sort time: 0.00 sec
[827.603] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 12.93, EVAL 0.26, REPLACE 0.28, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 30926
 before deduplicate, nNodes = 30894
 after deduplicate, nNodes = 30894, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 30894
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013781
Max cover len: 21
Total number of covers: 21981
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21981
#nodes = 29288
Phase 2 time: 0.258635
Total time: 0.272528
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[830.527] Rewrite Iteration
0 in EvaluateNode 
[830.599] Finished GPU enumeration and pre-evaluation
[830.600] Replacing sub-graphs
0 after replace 
N = 31570   n = 29320   n * RATIO = 67436
before rebuild, nn = 29320
after rebuild, n = 31567
successfully replaced 1003 cones (pos 6, zero 997), reverted 3 cones, compromised 45 cones, pre-eval rejected 18101 cones, small cut reject 0 cones, new idx reject 10136 cones
after replace, n = 31567
[830.601] Finished eval and replace
 *** Topo sort time: 0.00 sec
[830.602] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 13.00, EVAL 0.27, REPLACE 0.28, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31567
 before deduplicate, nNodes = 31535
 after deduplicate, nNodes = 31535, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31535
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5045
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35715
Start reordering ...
Reordered network new nObjs: 29314, original nObjs: 29315
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[833.424] Rewrite Iteration
0 in EvaluateNode 
[833.498] Finished GPU enumeration and pre-evaluation
[833.498] Replacing sub-graphs
0 after replace 
N = 29334   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29332
successfully replaced 10 cones (pos 10, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29269 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29332
[833.499] Finished eval and replace
 *** Topo sort time: 0.00 sec
[833.500] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 13.08, EVAL 0.27, REPLACE 0.28, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29332
 before deduplicate, nNodes = 29300
 after deduplicate, nNodes = 29298, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29298
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5040
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35041
Start reordering ...
Reordered network new nObjs: 29304, original nObjs: 29304
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[836.331] Rewrite Iteration
0 in EvaluateNode 
[836.404] Finished GPU enumeration and pre-evaluation
[836.404] Replacing sub-graphs
0 after replace 
N = 33950   n = 29303   n * RATIO = 67396
before rebuild, nn = 29303
after rebuild, n = 33791
successfully replaced 1672 cones (pos 3, zero 1669), reverted 2 cones, compromised 442 cones, pre-eval rejected 18260 cones, small cut reject 0 cones, new idx reject 8895 cones
after replace, n = 33791
[836.405] Finished eval and replace
 *** Topo sort time: 0.00 sec
[836.406] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 13.15, EVAL 0.27, REPLACE 0.28, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33791
 before deduplicate, nNodes = 33759
 after deduplicate, nNodes = 33759, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33759
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[837.810] Rewrite Iteration
0 in EvaluateNode 
[837.883] Finished GPU enumeration and pre-evaluation
[837.884] Replacing sub-graphs
0 after replace 
N = 32092   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 32031
successfully replaced 1126 cones (pos 6, zero 1120), reverted 7 cones, compromised 152 cones, pre-eval rejected 18082 cones, small cut reject 0 cones, new idx reject 9900 cones
after replace, n = 32031
[837.885] Finished eval and replace
 *** Topo sort time: 0.00 sec
[837.886] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 13.22, EVAL 0.27, REPLACE 0.29, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32031
 before deduplicate, nNodes = 31999
 after deduplicate, nNodes = 31999, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31999
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35647
Start reordering ...
Reordered network new nObjs: 29294, original nObjs: 29294
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[856.789] Rewrite Iteration
0 in EvaluateNode 
[856.898] Finished GPU enumeration and pre-evaluation
[856.899] Replacing sub-graphs
0 after replace 
N = 39369   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 38424
successfully replaced 1658 cones (pos 1658, zero 0), reverted 475 cones, compromised 499 cones, pre-eval rejected 29428 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38424
[856.900] Finished eval and replace
 *** Topo sort time: 0.00 sec
[856.901] Rewrite Iteration Ends
real reduction: 1660
** Total Time breakdown: ENUM 13.32, EVAL 0.27, REPLACE 0.29, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.02, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38424
 before deduplicate, nNodes = 38392
 after deduplicate, nNodes = 36977, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36977
rewrite: alg time 0.12, full time 0.12

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5183
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5213
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 39111
Start reordering ...
Reordered network new nObjs: 29700, original nObjs: 30433
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.34 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[859.627] Rewrite Iteration
0 in EvaluateNode 
[859.707] Finished GPU enumeration and pre-evaluation
[859.708] Replacing sub-graphs
0 after replace 
N = 36558   n = 29699   n * RATIO = 68307
before rebuild, nn = 29699
after rebuild, n = 36342
successfully replaced 2556 cones (pos 124, zero 2432), reverted 21 cones, compromised 562 cones, pre-eval rejected 17999 cones, small cut reject 0 cones, new idx reject 8529 cones
after replace, n = 36342
[859.709] Finished eval and replace
 *** Topo sort time: 0.00 sec
[859.710] Rewrite Iteration Ends
real reduction: 124
** Total Time breakdown: ENUM 13.40, EVAL 0.27, REPLACE 0.29, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 36342
 before deduplicate, nNodes = 36310
 after deduplicate, nNodes = 36310, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36310
rewrite: alg time 0.09, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.014317
Max cover len: 21
Total number of covers: 21861
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 21861
#nodes = 29475
Phase 2 time: 0.265623
Total time: 0.280179
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[862.583] Rewrite Iteration
0 in EvaluateNode 
[862.656] Finished GPU enumeration and pre-evaluation
[862.657] Replacing sub-graphs
0 after replace 
N = 32617   n = 29507   n * RATIO = 67866
before rebuild, nn = 29507
after rebuild, n = 32563
successfully replaced 1284 cones (pos 104, zero 1180), reverted 14 cones, compromised 110 cones, pre-eval rejected 17975 cones, small cut reject 0 cones, new idx reject 10092 cones
after replace, n = 32563
[862.658] Finished eval and replace
 *** Topo sort time: 0.00 sec
[862.659] Rewrite Iteration Ends
real reduction: 111
** Total Time breakdown: ENUM 13.47, EVAL 0.27, REPLACE 0.29, REORDER 0.18, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32563
 before deduplicate, nNodes = 32531
 after deduplicate, nNodes = 32531, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32531
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5077
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35993
Start reordering ...
Reordered network new nObjs: 29391, original nObjs: 29397
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5060
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35410
Start reordering ...
Reordered network new nObjs: 29386, original nObjs: 29391
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014119
Max cover len: 21
Total number of covers: 21949
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 21949
#nodes = 29339
Phase 2 time: 0.259699
Total time: 0.273917
balance: alg time 0.27, full time 0.28

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5055
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35916
Start reordering ...
Reordered network new nObjs: 29370, original nObjs: 29372
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35328
Start reordering ...
Reordered network new nObjs: 29370, original nObjs: 29370
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5063
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35225
Start reordering ...
Reordered network new nObjs: 29369, original nObjs: 29370
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[871.733] Rewrite Iteration
0 in EvaluateNode 
[871.806] Finished GPU enumeration and pre-evaluation
[871.806] Replacing sub-graphs
0 after replace 
N = 34375   n = 29368   n * RATIO = 67546
before rebuild, nn = 29368
after rebuild, n = 34110
successfully replaced 1862 cones (pos 36, zero 1826), reverted 29 cones, compromised 348 cones, pre-eval rejected 18178 cones, small cut reject 0 cones, new idx reject 8919 cones
after replace, n = 34110
[871.807] Finished eval and replace
 *** Topo sort time: 0.00 sec
[871.808] Rewrite Iteration Ends
real reduction: 37
** Total Time breakdown: ENUM 13.54, EVAL 0.28, REPLACE 0.29, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.04
** CPU sequential time: 0.08 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34110
 before deduplicate, nNodes = 34078
 after deduplicate, nNodes = 34078, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34078
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[873.493] Rewrite Iteration
0 in EvaluateNode 
[873.566] Finished GPU enumeration and pre-evaluation
[873.566] Replacing sub-graphs
0 after replace 
N = 29367   n = 29331   n * RATIO = 67461
before rebuild, nn = 29331
after rebuild, n = 29366
successfully replaced 14 cones (pos 14, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29282 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29366
[873.567] Finished eval and replace
 *** Topo sort time: 0.00 sec
[873.568] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 13.61, EVAL 0.28, REPLACE 0.29, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29366
 before deduplicate, nNodes = 29334
 after deduplicate, nNodes = 29333, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29333
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35602
Start reordering ...
Reordered network new nObjs: 29315, original nObjs: 29317
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013501
Max cover len: 21
Total number of covers: 21983
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21983
#nodes = 29275
Phase 2 time: 0.249810
Total time: 0.263413
balance: alg time 0.26, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013629
Max cover len: 21
Total number of covers: 21990
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21990
#nodes = 29271
Phase 2 time: 0.245738
Total time: 0.259462
balance: alg time 0.26, full time 0.26

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[879.305] Rewrite Iteration
0 in EvaluateNode 
[879.378] Finished GPU enumeration and pre-evaluation
[879.378] Replacing sub-graphs
0 after replace 
N = 31821   n = 29303   n * RATIO = 67396
before rebuild, nn = 29303
after rebuild, n = 31793
successfully replaced 1157 cones (pos 11, zero 1146), reverted 1 cones, compromised 49 cones, pre-eval rejected 18085 cones, small cut reject 0 cones, new idx reject 9979 cones
after replace, n = 31793
[879.379] Finished eval and replace
 *** Topo sort time: 0.00 sec
[879.380] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 13.68, EVAL 0.28, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31793
 before deduplicate, nNodes = 31761
 after deduplicate, nNodes = 31761, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31761
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[880.736] Rewrite Iteration
0 in EvaluateNode 
[880.808] Finished GPU enumeration and pre-evaluation
[880.809] Replacing sub-graphs
0 after replace 
N = 31274   n = 29292   n * RATIO = 67371
before rebuild, nn = 29292
after rebuild, n = 31267
successfully replaced 878 cones (pos 8, zero 870), reverted 28 cones, compromised 45 cones, pre-eval rejected 18120 cones, small cut reject 0 cones, new idx reject 10189 cones
after replace, n = 31267
[880.809] Finished eval and replace
 *** Topo sort time: 0.00 sec
[880.810] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 13.75, EVAL 0.28, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31267
 before deduplicate, nNodes = 31235
 after deduplicate, nNodes = 31235, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31235
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013859
Max cover len: 20
Total number of covers: 22024
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22024
#nodes = 29249
Phase 2 time: 0.252930
Total time: 0.266893
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[883.659] Rewrite Iteration
0 in EvaluateNode 
[883.730] Finished GPU enumeration and pre-evaluation
[883.731] Replacing sub-graphs
0 after replace 
N = 29290   n = 29281   n * RATIO = 67346
before rebuild, nn = 29281
after rebuild, n = 29288
successfully replaced 5 cones (pos 5, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 29242 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29288
[883.732] Finished eval and replace
 *** Topo sort time: 0.00 sec
[883.732] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 13.82, EVAL 0.28, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29288
 before deduplicate, nNodes = 29256
 after deduplicate, nNodes = 29254, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29254
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5010
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35555
Start reordering ...
Reordered network new nObjs: 29276, original nObjs: 29277
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.017852
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.302286
Total time: 0.320409
balance: alg time 0.32, full time 0.32

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[903.116] Rewrite Iteration
0 in EvaluateNode 
[903.221] Finished GPU enumeration and pre-evaluation
[903.222] Replacing sub-graphs
0 after replace 
N = 46043   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 43788
successfully replaced 5259 cones (pos 1604, zero 3655), reverted 11 cones, compromised 2454 cones, pre-eval rejected 16763 cones, small cut reject 0 cones, new idx reject 7444 cones
after replace, n = 43788
[903.224] Finished eval and replace
 *** Topo sort time: 0.00 sec
[903.226] Rewrite Iteration Ends
real reduction: 1610
** Total Time breakdown: ENUM 13.92, EVAL 0.28, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 43788
 before deduplicate, nNodes = 43756
 after deduplicate, nNodes = 43755, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 43755
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.48 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[904.663] Rewrite Iteration
0 in EvaluateNode 
[904.759] Finished GPU enumeration and pre-evaluation
[904.759] Replacing sub-graphs
0 after replace 
N = 36273   n = 30353   n * RATIO = 69811
before rebuild, nn = 30353
after rebuild, n = 36187
successfully replaced 3509 cones (pos 849, zero 2660), reverted 7 cones, compromised 86 cones, pre-eval rejected 17247 cones, small cut reject 0 cones, new idx reject 9472 cones
after replace, n = 36187
[904.761] Finished eval and replace
 *** Topo sort time: 0.00 sec
[904.762] Rewrite Iteration Ends
real reduction: 849
** Total Time breakdown: ENUM 14.02, EVAL 0.29, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 36187
 before deduplicate, nNodes = 36155
 after deduplicate, nNodes = 36155, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36155
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[906.294] Rewrite Iteration
0 in EvaluateNode 
[906.367] Finished GPU enumeration and pre-evaluation
[906.368] Replacing sub-graphs
0 after replace 
N = 29708   n = 29504   n * RATIO = 67859
before rebuild, nn = 29504
after rebuild, n = 29707
successfully replaced 77 cones (pos 77, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29392 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29707
[906.369] Finished eval and replace
 *** Topo sort time: 0.00 sec
[906.369] Rewrite Iteration Ends
real reduction: 77
** Total Time breakdown: ENUM 14.09, EVAL 0.29, REPLACE 0.30, REORDER 0.19, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29707
 before deduplicate, nNodes = 29675
 after deduplicate, nNodes = 29672, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29672
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[907.989] Rewrite Iteration
0 in EvaluateNode 
[908.061] Finished GPU enumeration and pre-evaluation
[908.062] Replacing sub-graphs
0 after replace 
N = 29429   n = 29427   n * RATIO = 67682
before rebuild, nn = 29427
after rebuild, n = 29429
successfully replaced 1 cones (pos 1, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29394 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29429
[908.062] Finished eval and replace
 *** Topo sort time: 0.00 sec
[908.063] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 14.16, EVAL 0.29, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29429
 before deduplicate, nNodes = 29397
 after deduplicate, nNodes = 29397, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29397
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[909.437] Rewrite Iteration
0 in EvaluateNode 
[909.510] Finished GPU enumeration and pre-evaluation
[909.510] Replacing sub-graphs
0 after replace 
N = 31795   n = 29426   n * RATIO = 67679
before rebuild, nn = 29426
after rebuild, n = 31769
successfully replaced 955 cones (pos 4, zero 951), reverted 28 cones, compromised 91 cones, pre-eval rejected 18054 cones, small cut reject 0 cones, new idx reject 10266 cones
after replace, n = 31769
[909.511] Finished eval and replace
 *** Topo sort time: 0.00 sec
[909.512] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 14.23, EVAL 0.29, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31769
 before deduplicate, nNodes = 31737
 after deduplicate, nNodes = 31736, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31736
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[911.036] Rewrite Iteration
0 in EvaluateNode 
[911.108] Finished GPU enumeration and pre-evaluation
[911.108] Replacing sub-graphs
0 after replace 
N = 31042   n = 29422   n * RATIO = 67670
before rebuild, nn = 29422
after rebuild, n = 31003
successfully replaced 766 cones (pos 2, zero 764), reverted 1 cones, compromised 31 cones, pre-eval rejected 18041 cones, small cut reject 0 cones, new idx reject 10551 cones
after replace, n = 31003
[911.109] Finished eval and replace
 *** Topo sort time: 0.00 sec
[911.110] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 14.30, EVAL 0.29, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31003
 before deduplicate, nNodes = 30971
 after deduplicate, nNodes = 30971, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 30971
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5063
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35936
Start reordering ...
Reordered network new nObjs: 29410, original nObjs: 29421
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[914.390] Rewrite Iteration
0 in EvaluateNode 
[914.463] Finished GPU enumeration and pre-evaluation
[914.464] Replacing sub-graphs
0 after replace 
N = 29452   n = 29409   n * RATIO = 67640
before rebuild, nn = 29409
after rebuild, n = 29444
successfully replaced 16 cones (pos 16, zero 0), reverted 8 cones, compromised 0 cones, pre-eval rejected 29353 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29444
[914.464] Finished eval and replace
 *** Topo sort time: 0.00 sec
[914.465] Rewrite Iteration Ends
real reduction: 17
** Total Time breakdown: ENUM 14.37, EVAL 0.29, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29444
 before deduplicate, nNodes = 29412
 after deduplicate, nNodes = 29407, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29407
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014032
Max cover len: 21
Total number of covers: 21932
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21932
#nodes = 29337
Phase 2 time: 0.259548
Total time: 0.273709
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5046
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35852
Start reordering ...
Reordered network new nObjs: 29364, original nObjs: 29370
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[918.936] Rewrite Iteration
0 in EvaluateNode 
[919.009] Finished GPU enumeration and pre-evaluation
[919.010] Replacing sub-graphs
0 after replace 
N = 34182   n = 29363   n * RATIO = 67534
before rebuild, nn = 29363
after rebuild, n = 34004
successfully replaced 1852 cones (pos 10, zero 1842), reverted 33 cones, compromised 322 cones, pre-eval rejected 18213 cones, small cut reject 0 cones, new idx reject 8911 cones
after replace, n = 34004
[919.011] Finished eval and replace
 *** Topo sort time: 0.00 sec
[919.012] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 14.44, EVAL 0.29, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34004
 before deduplicate, nNodes = 33972
 after deduplicate, nNodes = 33972, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33972
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[920.383] Rewrite Iteration
0 in EvaluateNode 
[920.455] Finished GPU enumeration and pre-evaluation
[920.456] Replacing sub-graphs
0 after replace 
N = 29366   n = 29353   n * RATIO = 67511
before rebuild, nn = 29353
after rebuild, n = 29366
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29314 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29366
[920.457] Finished eval and replace
 *** Topo sort time: 0.00 sec
[920.457] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 14.51, EVAL 0.30, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29366
 before deduplicate, nNodes = 29334
 after deduplicate, nNodes = 29334, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29334
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5055
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35709
Start reordering ...
Reordered network new nObjs: 29347, original nObjs: 29347
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5030
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35046
Start reordering ...
Reordered network new nObjs: 29346, original nObjs: 29347
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[924.658] Rewrite Iteration
0 in EvaluateNode 
[924.731] Finished GPU enumeration and pre-evaluation
[924.732] Replacing sub-graphs
0 after replace 
N = 34162   n = 29345   n * RATIO = 67493
before rebuild, nn = 29345
after rebuild, n = 33846
successfully replaced 1725 cones (pos 9, zero 1716), reverted 7 cones, compromised 454 cones, pre-eval rejected 18176 cones, small cut reject 0 cones, new idx reject 8951 cones
after replace, n = 33846
[924.733] Finished eval and replace
 *** Topo sort time: 0.00 sec
[924.734] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 14.58, EVAL 0.30, REPLACE 0.31, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33846
 before deduplicate, nNodes = 33814
 after deduplicate, nNodes = 33790, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33790
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013874
Max cover len: 21
Total number of covers: 21997
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21997
#nodes = 29295
Phase 2 time: 0.258129
Total time: 0.272117
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.013660
Max cover len: 21
Total number of covers: 22006
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22006
#nodes = 29293
Phase 2 time: 0.255257
Total time: 0.269016
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[929.380] Rewrite Iteration
0 in EvaluateNode 
[929.452] Finished GPU enumeration and pre-evaluation
[929.453] Replacing sub-graphs
0 after replace 
N = 29354   n = 29325   n * RATIO = 67447
before rebuild, nn = 29325
after rebuild, n = 29349
successfully replaced 12 cones (pos 12, zero 0), reverted 5 cones, compromised 0 cones, pre-eval rejected 29276 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29349
[929.453] Finished eval and replace
 *** Topo sort time: 0.00 sec
[929.454] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 14.65, EVAL 0.30, REPLACE 0.32, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29349
 before deduplicate, nNodes = 29317
 after deduplicate, nNodes = 29312, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29312
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[930.762] Rewrite Iteration
0 in EvaluateNode 
[930.834] Finished GPU enumeration and pre-evaluation
[930.835] Replacing sub-graphs
0 after replace 
N = 31631   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 31629
successfully replaced 1052 cones (pos 0, zero 1052), reverted 4 cones, compromised 49 cones, pre-eval rejected 18070 cones, small cut reject 0 cones, new idx reject 10106 cones
after replace, n = 31629
[930.836] Finished eval and replace
 *** Topo sort time: 0.00 sec
[930.836] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 14.72, EVAL 0.30, REPLACE 0.32, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31629
 before deduplicate, nNodes = 31597
 after deduplicate, nNodes = 31597, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31597
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[932.210] Rewrite Iteration
0 in EvaluateNode 
[932.282] Finished GPU enumeration and pre-evaluation
[932.283] Replacing sub-graphs
0 after replace 
N = 29313   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29313
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29281 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29313
[932.284] Finished eval and replace
 *** Topo sort time: 0.00 sec
[932.284] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 14.79, EVAL 0.30, REPLACE 0.32, REORDER 0.20, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29313
 before deduplicate, nNodes = 29281
 after deduplicate, nNodes = 29281, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29281
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.016084
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.299514
Total time: 0.315827
balance: alg time 0.32, full time 0.32

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5082
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5166
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36429
Start reordering ...
Reordered network new nObjs: 30738, original nObjs: 30755
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[955.654] Rewrite Iteration
0 in EvaluateNode 
[955.741] Finished GPU enumeration and pre-evaluation
[955.741] Replacing sub-graphs
0 after replace 
N = 36167   n = 30737   n * RATIO = 70695
before rebuild, nn = 30737
after rebuild, n = 35236
successfully replaced 1242 cones (pos 1242, zero 0), reverted 475 cones, compromised 0 cones, pre-eval rejected 28988 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 35236
[955.742] Finished eval and replace
 *** Topo sort time: 0.00 sec
[955.743] Rewrite Iteration Ends
real reduction: 1245
** Total Time breakdown: ENUM 14.87, EVAL 0.30, REPLACE 0.32, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35236
 before deduplicate, nNodes = 35204
 after deduplicate, nNodes = 33812, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33812
rewrite: alg time 0.10, full time 0.10

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5058
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5151
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34949
Start reordering ...
Reordered network new nObjs: 29490, original nObjs: 29493
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[958.494] Rewrite Iteration
0 in EvaluateNode 
[958.570] Finished GPU enumeration and pre-evaluation
[958.571] Replacing sub-graphs
0 after replace 
N = 34881   n = 29489   n * RATIO = 67824
before rebuild, nn = 29489
after rebuild, n = 34534
successfully replaced 2070 cones (pos 16, zero 2054), reverted 12 cones, compromised 309 cones, pre-eval rejected 18212 cones, small cut reject 0 cones, new idx reject 8854 cones
after replace, n = 34534
[958.572] Finished eval and replace
 *** Topo sort time: 0.00 sec
[958.573] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 14.95, EVAL 0.30, REPLACE 0.32, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34534
 before deduplicate, nNodes = 34502
 after deduplicate, nNodes = 34502, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34502
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014160
Max cover len: 21
Total number of covers: 21926
*** Max Level: 359
Reconstruct complete! #reconstructed covers = 21926
#nodes = 29415
Phase 2 time: 0.259337
Total time: 0.273604
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[961.496] Rewrite Iteration
0 in EvaluateNode 
[961.569] Finished GPU enumeration and pre-evaluation
[961.570] Replacing sub-graphs
0 after replace 
N = 32361   n = 29447   n * RATIO = 67728
before rebuild, nn = 29447
after rebuild, n = 32308
successfully replaced 1213 cones (pos 75, zero 1138), reverted 8 cones, compromised 93 cones, pre-eval rejected 17994 cones, small cut reject 0 cones, new idx reject 10107 cones
after replace, n = 32308
[961.571] Finished eval and replace
 *** Topo sort time: 0.00 sec
[961.572] Rewrite Iteration Ends
real reduction: 78
** Total Time breakdown: ENUM 15.02, EVAL 0.31, REPLACE 0.32, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32308
 before deduplicate, nNodes = 32276
 after deduplicate, nNodes = 32276, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32276
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5071
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35958
Start reordering ...
Reordered network new nObjs: 29368, original nObjs: 29370
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[964.225] Rewrite Iteration
0 in EvaluateNode 
[964.298] Finished GPU enumeration and pre-evaluation
[964.298] Replacing sub-graphs
0 after replace 
N = 34385   n = 29367   n * RATIO = 67544
before rebuild, nn = 29367
after rebuild, n = 34211
successfully replaced 1890 cones (pos 46, zero 1844), reverted 9 cones, compromised 344 cones, pre-eval rejected 18168 cones, small cut reject 0 cones, new idx reject 8924 cones
after replace, n = 34211
[964.299] Finished eval and replace
 *** Topo sort time: 0.00 sec
[964.301] Rewrite Iteration Ends
real reduction: 47
** Total Time breakdown: ENUM 15.09, EVAL 0.31, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.09 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34211
 before deduplicate, nNodes = 34179
 after deduplicate, nNodes = 34179, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34179
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5088
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35677
Start reordering ...
Reordered network new nObjs: 29315, original nObjs: 29321
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013395
Max cover len: 21
Total number of covers: 21983
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 21983
#nodes = 29277
Phase 2 time: 0.249913
Total time: 0.263396
balance: alg time 0.26, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5050
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35676
Start reordering ...
Reordered network new nObjs: 29307, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[970.068] Rewrite Iteration
0 in EvaluateNode 
[970.142] Finished GPU enumeration and pre-evaluation
[970.143] Replacing sub-graphs
0 after replace 
N = 34119   n = 29306   n * RATIO = 67403
before rebuild, nn = 29306
after rebuild, n = 33965
successfully replaced 1845 cones (pos 6, zero 1839), reverted 35 cones, compromised 317 cones, pre-eval rejected 18223 cones, small cut reject 0 cones, new idx reject 8854 cones
after replace, n = 33965
[970.144] Finished eval and replace
 *** Topo sort time: 0.00 sec
[970.145] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 15.16, EVAL 0.31, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33965
 before deduplicate, nNodes = 33933
 after deduplicate, nNodes = 33933, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33933
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[971.536] Rewrite Iteration
0 in EvaluateNode 
[971.608] Finished GPU enumeration and pre-evaluation
[971.609] Replacing sub-graphs
0 after replace 
N = 32186   n = 29299   n * RATIO = 67387
before rebuild, nn = 29299
after rebuild, n = 32073
successfully replaced 1204 cones (pos 4, zero 1200), reverted 4 cones, compromised 150 cones, pre-eval rejected 18038 cones, small cut reject 0 cones, new idx reject 9871 cones
after replace, n = 32073
[971.610] Finished eval and replace
 *** Topo sort time: 0.00 sec
[971.611] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 15.23, EVAL 0.31, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32073
 before deduplicate, nNodes = 32041
 after deduplicate, nNodes = 32041, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32041
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[972.979] Rewrite Iteration
0 in EvaluateNode 
[973.051] Finished GPU enumeration and pre-evaluation
[973.052] Replacing sub-graphs
0 after replace 
N = 29298   n = 29294   n * RATIO = 67376
before rebuild, nn = 29294
after rebuild, n = 29298
successfully replaced 3 cones (pos 3, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29259 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29298
[973.053] Finished eval and replace
 *** Topo sort time: 0.00 sec
[973.053] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 15.30, EVAL 0.31, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29298
 before deduplicate, nNodes = 29266
 after deduplicate, nNodes = 29266, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29266
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[974.408] Rewrite Iteration
0 in EvaluateNode 
[974.480] Finished GPU enumeration and pre-evaluation
[974.481] Replacing sub-graphs
0 after replace 
N = 31571   n = 29291   n * RATIO = 67369
before rebuild, nn = 29291
after rebuild, n = 31550
successfully replaced 989 cones (pos 0, zero 989), reverted 27 cones, compromised 73 cones, pre-eval rejected 18025 cones, small cut reject 0 cones, new idx reject 10145 cones
after replace, n = 31550
[974.481] Finished eval and replace
 *** Topo sort time: 0.00 sec
[974.482] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 15.37, EVAL 0.31, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31550
 before deduplicate, nNodes = 31518
 after deduplicate, nNodes = 31518, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31518
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013705
Max cover len: 21
Total number of covers: 22044
*** Max Level: 352
Reconstruct complete! #reconstructed covers = 22044
#nodes = 29254
Phase 2 time: 0.246584
Total time: 0.260384
balance: alg time 0.26, full time 0.26

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[977.424] Rewrite Iteration
0 in EvaluateNode 
[977.497] Finished GPU enumeration and pre-evaluation
[977.498] Replacing sub-graphs
0 after replace 
N = 31535   n = 29286   n * RATIO = 67357
before rebuild, nn = 29286
after rebuild, n = 31495
successfully replaced 1037 cones (pos 5, zero 1032), reverted 1 cones, compromised 48 cones, pre-eval rejected 18064 cones, small cut reject 0 cones, new idx reject 10104 cones
after replace, n = 31495
[977.499] Finished eval and replace
 *** Topo sort time: 0.00 sec
[977.499] Rewrite Iteration Ends
real reduction: 5
** Total Time breakdown: ENUM 15.44, EVAL 0.32, REPLACE 0.33, REORDER 0.21, REDUNDANCY 0.04
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31495
 before deduplicate, nNodes = 31463
 after deduplicate, nNodes = 31463, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31463
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[978.865] Rewrite Iteration
0 in EvaluateNode 
[978.937] Finished GPU enumeration and pre-evaluation
[978.938] Replacing sub-graphs
0 after replace 
N = 31215   n = 29281   n * RATIO = 67346
before rebuild, nn = 29281
after rebuild, n = 31208
successfully replaced 849 cones (pos 4, zero 845), reverted 28 cones, compromised 51 cones, pre-eval rejected 18092 cones, small cut reject 0 cones, new idx reject 10229 cones
after replace, n = 31208
[978.938] Finished eval and replace
 *** Topo sort time: 0.00 sec
[978.939] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 15.51, EVAL 0.32, REPLACE 0.34, REORDER 0.21, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31208
 before deduplicate, nNodes = 31176
 after deduplicate, nNodes = 31176, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31176
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5017
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35593
Start reordering ...
Reordered network new nObjs: 29278, original nObjs: 29278
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[997.934] Rewrite Iteration
0 in EvaluateNode 
[998.043] Finished GPU enumeration and pre-evaluation
[998.044] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[998.046] Finished eval and replace
 *** Topo sort time: 0.00 sec
[998.048] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 15.62, EVAL 0.32, REPLACE 0.34, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5261
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5373
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 39263
Start reordering ...
Reordered network new nObjs: 29704, original nObjs: 30558
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.35 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1001.132] Rewrite Iteration
0 in EvaluateNode 
[1001.213] Finished GPU enumeration and pre-evaluation
[1001.213] Replacing sub-graphs
0 after replace 
N = 30007   n = 29703   n * RATIO = 68316
before rebuild, nn = 29703
after rebuild, n = 29980
successfully replaced 118 cones (pos 118, zero 0), reverted 62 cones, compromised 0 cones, pre-eval rejected 29491 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29980
[1001.214] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1001.215] Rewrite Iteration Ends
real reduction: 121
** Total Time breakdown: ENUM 15.70, EVAL 0.32, REPLACE 0.34, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29980
 before deduplicate, nNodes = 29948
 after deduplicate, nNodes = 29900, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29900
rewrite: alg time 0.09, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.014757
Max cover len: 21
Total number of covers: 21779
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 21779
#nodes = 29479
Phase 2 time: 0.280339
Total time: 0.295308
balance: alg time 0.30, full time 0.30

*****Perform Balance*****
Phase 1 time: 0.014800
Max cover len: 21
Total number of covers: 21850
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 21850
#nodes = 29453
Phase 2 time: 0.279313
Total time: 0.294210
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1005.808] Rewrite Iteration
0 in EvaluateNode 
[1005.883] Finished GPU enumeration and pre-evaluation
[1005.883] Replacing sub-graphs
0 after replace 
N = 32328   n = 29485   n * RATIO = 67815
before rebuild, nn = 29485
after rebuild, n = 32302
successfully replaced 1306 cones (pos 92, zero 1214), reverted 11 cones, compromised 41 cones, pre-eval rejected 17981 cones, small cut reject 0 cones, new idx reject 10114 cones
after replace, n = 32302
[1005.884] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1005.885] Rewrite Iteration Ends
real reduction: 96
** Total Time breakdown: ENUM 15.77, EVAL 0.32, REPLACE 0.34, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32302
 before deduplicate, nNodes = 32270
 after deduplicate, nNodes = 32270, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32270
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5093
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35876
Start reordering ...
Reordered network new nObjs: 29381, original nObjs: 29390
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014107
Max cover len: 21
Total number of covers: 21953
*** Max Level: 363
Reconstruct complete! #reconstructed covers = 21953
#nodes = 29335
Phase 2 time: 0.260733
Total time: 0.274943
balance: alg time 0.27, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1010.181] Rewrite Iteration
0 in EvaluateNode 
[1010.253] Finished GPU enumeration and pre-evaluation
[1010.254] Replacing sub-graphs
0 after replace 
N = 29522   n = 29367   n * RATIO = 67544
before rebuild, nn = 29367
after rebuild, n = 29517
successfully replaced 47 cones (pos 47, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29281 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29517
[1010.255] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1010.256] Rewrite Iteration Ends
real reduction: 48
** Total Time breakdown: ENUM 15.84, EVAL 0.32, REPLACE 0.34, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29517
 before deduplicate, nNodes = 29485
 after deduplicate, nNodes = 29480, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29480
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5077
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35610
Start reordering ...
Reordered network new nObjs: 29319, original nObjs: 29320
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5073
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34984
Start reordering ...
Reordered network new nObjs: 29319, original nObjs: 29319
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1014.082] Rewrite Iteration
0 in EvaluateNode 
[1014.155] Finished GPU enumeration and pre-evaluation
[1014.155] Replacing sub-graphs
0 after replace 
N = 29334   n = 29318   n * RATIO = 67431
before rebuild, nn = 29318
after rebuild, n = 29333
successfully replaced 8 cones (pos 8, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29277 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29333
[1014.156] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1014.157] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 15.91, EVAL 0.32, REPLACE 0.34, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29333
 before deduplicate, nNodes = 29301
 after deduplicate, nNodes = 29300, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29300
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1015.430] Rewrite Iteration
0 in EvaluateNode 
[1015.503] Finished GPU enumeration and pre-evaluation
[1015.504] Replacing sub-graphs
0 after replace 
N = 29310   n = 29310   n * RATIO = 67413
before rebuild, nn = 29310
after rebuild, n = 29310
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29278 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29310
[1015.504] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1015.505] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 15.98, EVAL 0.33, REPLACE 0.35, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29310
 before deduplicate, nNodes = 29278
 after deduplicate, nNodes = 29278, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29278
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5069
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 34977
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29311
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5067
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35008
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29309
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1019.448] Rewrite Iteration
0 in EvaluateNode 
[1019.520] Finished GPU enumeration and pre-evaluation
[1019.521] Replacing sub-graphs
0 after replace 
N = 29324   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 29323
successfully replaced 8 cones (pos 8, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 29267 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29323
[1019.522] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1019.523] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 16.05, EVAL 0.33, REPLACE 0.35, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29323
 before deduplicate, nNodes = 29291
 after deduplicate, nNodes = 29290, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29290
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1020.870] Rewrite Iteration
0 in EvaluateNode 
[1020.943] Finished GPU enumeration and pre-evaluation
[1020.943] Replacing sub-graphs
0 after replace 
N = 29300   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 29300
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29268 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29300
[1020.944] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1020.944] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 16.12, EVAL 0.33, REPLACE 0.35, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29300
 before deduplicate, nNodes = 29268
 after deduplicate, nNodes = 29268, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29268
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1022.175] Rewrite Iteration
0 in EvaluateNode 
[1022.248] Finished GPU enumeration and pre-evaluation
[1022.249] Replacing sub-graphs
0 after replace 
N = 34093   n = 29300   n * RATIO = 67390
before rebuild, nn = 29300
after rebuild, n = 33896
successfully replaced 1705 cones (pos 2, zero 1703), reverted 8 cones, compromised 411 cones, pre-eval rejected 18245 cones, small cut reject 0 cones, new idx reject 8899 cones
after replace, n = 33896
[1022.250] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1022.251] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 16.19, EVAL 0.33, REPLACE 0.35, REORDER 0.22, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33896
 before deduplicate, nNodes = 33864
 after deduplicate, nNodes = 33863, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33863
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013614
Max cover len: 21
Total number of covers: 22012
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22012
#nodes = 29262
Phase 2 time: 0.254358
Total time: 0.268081
balance: alg time 0.27, full time 0.27

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1025.163] Rewrite Iteration
0 in EvaluateNode 
[1025.234] Finished GPU enumeration and pre-evaluation
[1025.234] Replacing sub-graphs
0 after replace 
N = 29318   n = 29294   n * RATIO = 67376
before rebuild, nn = 29294
after rebuild, n = 29314
successfully replaced 12 cones (pos 12, zero 0), reverted 4 cones, compromised 0 cones, pre-eval rejected 29246 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29314
[1025.235] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1025.236] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 16.26, EVAL 0.33, REPLACE 0.35, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29314
 before deduplicate, nNodes = 29282
 after deduplicate, nNodes = 29278, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29278
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1026.533] Rewrite Iteration
0 in EvaluateNode 
[1026.602] Finished GPU enumeration and pre-evaluation
[1026.603] Replacing sub-graphs
0 after replace 
N = 31593   n = 29282   n * RATIO = 67348
before rebuild, nn = 29282
after rebuild, n = 31592
successfully replaced 1047 cones (pos 1, zero 1046), reverted 1 cones, compromised 44 cones, pre-eval rejected 18078 cones, small cut reject 0 cones, new idx reject 10080 cones
after replace, n = 31592
[1026.604] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1026.605] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 16.32, EVAL 0.33, REPLACE 0.35, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31592
 before deduplicate, nNodes = 31560
 after deduplicate, nNodes = 31560, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31560
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5195
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 41812
Start reordering ...
Reordered network new nObjs: 30889, original nObjs: 32093
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014998
Max cover len: 21
Total number of covers: 23442
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23442
#nodes = 30739
Phase 2 time: 0.288943
Total time: 0.304195
balance: alg time 0.30, full time 0.31

*****Perform Balance*****
Phase 1 time: 0.015623
Max cover len: 21
Total number of covers: 23533
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 23533
#nodes = 30700
Phase 2 time: 0.285867
Total time: 0.301603
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1047.309] Rewrite Iteration
0 in EvaluateNode 
[1047.396] Finished GPU enumeration and pre-evaluation
[1047.396] Replacing sub-graphs
0 after replace 
N = 40535   n = 30732   n * RATIO = 70683
before rebuild, nn = 30732
after rebuild, n = 38325
successfully replaced 4243 cones (pos 1252, zero 2991), reverted 5 cones, compromised 284 cones, pre-eval rejected 17681 cones, small cut reject 0 cones, new idx reject 8487 cones
after replace, n = 38325
[1047.398] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1047.399] Rewrite Iteration Ends
real reduction: 1260
** Total Time breakdown: ENUM 16.41, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38325
 before deduplicate, nNodes = 38293
 after deduplicate, nNodes = 38292, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 38292
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.015043
Max cover len: 21
Total number of covers: 21961
*** Max Level: 376
Reconstruct complete! #reconstructed covers = 21961
#nodes = 29421
Phase 2 time: 0.271739
Total time: 0.286887
balance: alg time 0.29, full time 0.29

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5052
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5120
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35627
Start reordering ...
Reordered network new nObjs: 29417, original nObjs: 29454
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014621
Max cover len: 21
Total number of covers: 21977
*** Max Level: 377
Reconstruct complete! #reconstructed covers = 21977
#nodes = 29376
Phase 2 time: 0.272234
Total time: 0.286962
balance: alg time 0.29, full time 0.29

*****Perform Balance*****
Phase 1 time: 0.014643
Max cover len: 21
Total number of covers: 21985
*** Max Level: 377
Reconstruct complete! #reconstructed covers = 21985
#nodes = 29365
Phase 2 time: 0.266135
Total time: 0.280901
balance: alg time 0.28, full time 0.28

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5041
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5106
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35475
Start reordering ...
Reordered network new nObjs: 29396, original nObjs: 29398
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1057.290] Rewrite Iteration
0 in EvaluateNode 
[1057.366] Finished GPU enumeration and pre-evaluation
[1057.367] Replacing sub-graphs
0 after replace 
N = 29591   n = 29395   n * RATIO = 67608
before rebuild, nn = 29395
after rebuild, n = 29574
successfully replaced 59 cones (pos 59, zero 0), reverted 20 cones, compromised 0 cones, pre-eval rejected 29284 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29574
[1057.368] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1057.369] Rewrite Iteration Ends
real reduction: 60
** Total Time breakdown: ENUM 16.48, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29574
 before deduplicate, nNodes = 29542
 after deduplicate, nNodes = 29527, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29527
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5053
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5139
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 34735
Start reordering ...
Reordered network new nObjs: 29335, original nObjs: 29336
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1060.181] Rewrite Iteration
0 in EvaluateNode 
[1060.255] Finished GPU enumeration and pre-evaluation
[1060.256] Replacing sub-graphs
0 after replace 
N = 29350   n = 29334   n * RATIO = 67468
before rebuild, nn = 29334
after rebuild, n = 29350
successfully replaced 6 cones (pos 6, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29296 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29350
[1060.256] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1060.257] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 16.55, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29350
 before deduplicate, nNodes = 29318
 after deduplicate, nNodes = 29318, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29318
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1061.548] Rewrite Iteration
0 in EvaluateNode 
[1061.621] Finished GPU enumeration and pre-evaluation
[1061.622] Replacing sub-graphs
0 after replace 
N = 29327   n = 29327   n * RATIO = 67452
before rebuild, nn = 29327
after rebuild, n = 29327
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29295 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29327
[1061.623] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1061.623] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 16.62, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.05
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29327
 before deduplicate, nNodes = 29295
 after deduplicate, nNodes = 29295, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29295
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5059
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 34755
Start reordering ...
Reordered network new nObjs: 29328, original nObjs: 29328
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1064.365] Rewrite Iteration
0 in EvaluateNode 
[1064.438] Finished GPU enumeration and pre-evaluation
[1064.439] Replacing sub-graphs
0 after replace 
N = 34160   n = 29327   n * RATIO = 67452
before rebuild, nn = 29327
after rebuild, n = 33869
successfully replaced 1913 cones (pos 6, zero 1907), reverted 6 cones, compromised 250 cones, pre-eval rejected 18272 cones, small cut reject 0 cones, new idx reject 8854 cones
after replace, n = 33869
[1064.440] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1064.441] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 16.70, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33869
 before deduplicate, nNodes = 33837
 after deduplicate, nNodes = 33837, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33837
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1065.761] Rewrite Iteration
0 in EvaluateNode 
[1065.832] Finished GPU enumeration and pre-evaluation
[1065.833] Replacing sub-graphs
0 after replace 
N = 29442   n = 29320   n * RATIO = 67436
before rebuild, nn = 29320
after rebuild, n = 29441
successfully replaced 34 cones (pos 34, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29251 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29441
[1065.833] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1065.834] Rewrite Iteration Ends
real reduction: 34
** Total Time breakdown: ENUM 16.77, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29441
 before deduplicate, nNodes = 29409
 after deduplicate, nNodes = 29408, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29408
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1067.117] Rewrite Iteration
0 in EvaluateNode 
[1067.188] Finished GPU enumeration and pre-evaluation
[1067.189] Replacing sub-graphs
0 after replace 
N = 29286   n = 29286   n * RATIO = 67357
before rebuild, nn = 29286
after rebuild, n = 29286
successfully replaced 0 cones (pos 0, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29286
[1067.189] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1067.190] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 16.83, EVAL 0.34, REPLACE 0.36, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.10 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29286
 before deduplicate, nNodes = 29254
 after deduplicate, nNodes = 29254, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29254
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5060
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35576
Start reordering ...
Reordered network new nObjs: 29286, original nObjs: 29287
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.013853
Max cover len: 21
Total number of covers: 22009
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 22009
#nodes = 29252
Phase 2 time: 0.249072
Total time: 0.263038
balance: alg time 0.26, full time 0.27

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1071.370] Rewrite Iteration
0 in EvaluateNode 
[1071.441] Finished GPU enumeration and pre-evaluation
[1071.442] Replacing sub-graphs
0 after replace 
N = 31689   n = 29284   n * RATIO = 67353
before rebuild, nn = 29284
after rebuild, n = 31684
successfully replaced 1060 cones (pos 17, zero 1043), reverted 3 cones, compromised 43 cones, pre-eval rejected 18104 cones, small cut reject 0 cones, new idx reject 10042 cones
after replace, n = 31684
[1071.443] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1071.444] Rewrite Iteration Ends
real reduction: 17
** Total Time breakdown: ENUM 16.90, EVAL 0.35, REPLACE 0.37, REORDER 0.23, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.11 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31684
 before deduplicate, nNodes = 31652
 after deduplicate, nNodes = 31651, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31651
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5029
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35579
Start reordering ...
Reordered network new nObjs: 29268, original nObjs: 29268
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 2114.94 MB, free = 22144.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 2122.94 MB, free = 22136.75 MB, total = 24259.69 MB
[1092.688] Rewrite Iteration
0 in EvaluateNode 
[1092.797] Finished GPU enumeration and pre-evaluation
[1092.798] Replacing sub-graphs
0 after replace 
N = 39369   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 38424
successfully replaced 1658 cones (pos 1658, zero 0), reverted 475 cones, compromised 499 cones, pre-eval rejected 29428 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38424
[1092.799] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1092.800] Rewrite Iteration Ends
real reduction: 1660
** Total Time breakdown: ENUM 17.01, EVAL 0.35, REPLACE 0.37, REORDER 0.24, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.11 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38424
 before deduplicate, nNodes = 38392
 after deduplicate, nNodes = 36977, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 36977
rewrite: alg time 0.12, full time 0.12

*****Perform Balance*****
Phase 1 time: 0.015525
Max cover len: 22
Total number of covers: 22494
*** Max Level: 401
Reconstruct complete! #reconstructed covers = 22494
#nodes = 30315
Phase 2 time: 0.295433
Total time: 0.311202
balance: alg time 0.31, full time 0.31

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5095
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5178
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 37867
Start reordering ...
Reordered network new nObjs: 29633, original nObjs: 30348
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5088
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5167
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35348
Start reordering ...
Reordered network new nObjs: 29613, original nObjs: 29633
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.33 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1098.782] Rewrite Iteration
0 in EvaluateNode 
[1098.859] Finished GPU enumeration and pre-evaluation
[1098.860] Replacing sub-graphs
0 after replace 
N = 35219   n = 29612   n * RATIO = 68107
before rebuild, nn = 29612
after rebuild, n = 34983
successfully replaced 2128 cones (pos 110, zero 2018), reverted 10 cones, compromised 451 cones, pre-eval rejected 18145 cones, small cut reject 0 cones, new idx reject 8846 cones
after replace, n = 34983
[1098.861] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1098.862] Rewrite Iteration Ends
real reduction: 112
** Total Time breakdown: ENUM 17.08, EVAL 0.35, REPLACE 0.37, REORDER 0.24, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.11 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34983
 before deduplicate, nNodes = 34951
 after deduplicate, nNodes = 34951, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34951
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5095
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5193
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 36038
Start reordering ...
Reordered network new nObjs: 29495, original nObjs: 29501
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5068
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5162
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35459
Start reordering ...
Reordered network new nObjs: 29493, original nObjs: 29495
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1103.107] Rewrite Iteration
0 in EvaluateNode 
[1103.181] Finished GPU enumeration and pre-evaluation
[1103.182] Replacing sub-graphs
0 after replace 
N = 34871   n = 29492   n * RATIO = 67831
before rebuild, nn = 29492
after rebuild, n = 34441
successfully replaced 1807 cones (pos 49, zero 1758), reverted 6 cones, compromised 496 cones, pre-eval rejected 18231 cones, small cut reject 0 cones, new idx reject 8920 cones
after replace, n = 34441
[1103.183] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1103.184] Rewrite Iteration Ends
real reduction: 50
** Total Time breakdown: ENUM 17.16, EVAL 0.35, REPLACE 0.37, REORDER 0.24, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.11 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34441
 before deduplicate, nNodes = 34409
 after deduplicate, nNodes = 34409, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34409
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.013838
Max cover len: 22
Total number of covers: 21896
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 21896
#nodes = 29379
Phase 2 time: 0.256306
Total time: 0.270245
balance: alg time 0.27, full time 0.27

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5068
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 36018
Start reordering ...
Reordered network new nObjs: 29409, original nObjs: 29412
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5070
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35383
Start reordering ...
Reordered network new nObjs: 29404, original nObjs: 29409
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.014364
Max cover len: 22
Total number of covers: 21932
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 21932
#nodes = 29362
Phase 2 time: 0.262611
Total time: 0.277075
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[1110.571] Rewrite Iteration
0 in EvaluateNode 
[1110.643] Finished GPU enumeration and pre-evaluation
[1110.643] Replacing sub-graphs
0 after replace 
N = 29506   n = 29394   n * RATIO = 67606
before rebuild, nn = 29394
after rebuild, n = 29493
successfully replaced 44 cones (pos 44, zero 0), reverted 19 cones, compromised 0 cones, pre-eval rejected 29299 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29493
[1110.644] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1110.645] Rewrite Iteration Ends
real reduction: 47
** Total Time breakdown: ENUM 17.23, EVAL 0.35, REPLACE 0.37, REORDER 0.24, REDUNDANCY 0.05
** Replace Time breakdown: COPYBACK 0.03, REID 0.03, CHOICE 0.06
** CPU sequential time: 0.11 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29493
 before deduplicate, nNodes = 29461
 after deduplicate, nNodes = 29451, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29451
rewrite: alg time 0.08, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.014479
Max cover len: 22
Total number of covers: 21969
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 21969
#nodes = 29309
Phase 2 time: 0.259153
Total time: 0.273726
balance: alg time 0.27, full time 0.27

*****Perform Balance*****
Phase 1 time: 0.019097
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.336376
Total time: 0.355760
balance: alg time 0.36, full time 0.36

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 6.445] Rewrite Iteration
0 in EvaluateNode 
[ 6.562] Finished GPU enumeration and pre-evaluation
[ 6.563] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 6.564] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.566] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020992
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.308007
Total time: 0.329123
balance: alg time 0.33, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 7.025] Rewrite Iteration
0 in EvaluateNode 
[ 7.100] Finished GPU enumeration and pre-evaluation
[ 7.101] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.102] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.102] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.19, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 7.114] Rewrite Iteration
0 in EvaluateNode 
[ 7.192] Finished GPU enumeration and pre-evaluation
[ 7.192] Replacing sub-graphs
0 after replace 
N = 35759   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35744
successfully replaced 2401 cones (pos 20, zero 2381), reverted 2 cones, compromised 85 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8986 cones
after replace, n = 35744
[ 7.193] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.194] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.26, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35744
 before deduplicate, nNodes = 35712
 after deduplicate, nNodes = 35712, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35712
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019275
Max cover len: 18
Total number of covers: 23252
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23252
#nodes = 29428
Phase 2 time: 0.208388
Total time: 0.227794
balance: alg time 0.23, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 7.505] Rewrite Iteration
0 in EvaluateNode 
[ 7.584] Finished GPU enumeration and pre-evaluation
[ 7.585] Replacing sub-graphs
0 after replace 
N = 34758   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34509
successfully replaced 1945 cones (pos 50, zero 1895), reverted 14 cones, compromised 411 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34509
[ 7.589] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.590] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34509
 before deduplicate, nNodes = 34477
 after deduplicate, nNodes = 34476, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34476
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018036
Max cover len: 12
Total number of covers: 23829
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23829
#nodes = 29365
Phase 2 time: 0.160546
Total time: 0.178721
balance: alg time 0.18, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.015068
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29352
Phase 2 time: 0.277250
Total time: 0.292442
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 8.084] Rewrite Iteration
0 in EvaluateNode 
[ 8.155] Finished GPU enumeration and pre-evaluation
[ 8.156] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.157] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.157] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019552
Max cover len: 21
Total number of covers: 22020
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22020
#nodes = 29281
Phase 2 time: 0.278419
Total time: 0.298091
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 8.548] Rewrite Iteration
0 in EvaluateNode 
[ 8.617] Finished GPU enumeration and pre-evaluation
[ 8.618] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 8.619] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.619] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.47, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 8.631] Rewrite Iteration
0 in EvaluateNode 
[ 8.705] Finished GPU enumeration and pre-evaluation
[ 8.706] Replacing sub-graphs
0 after replace 
N = 32023   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32021
successfully replaced 1188 cones (pos 7, zero 1181), reverted 3 cones, compromised 54 cones, pre-eval rejected 18083 cones, small cut reject 0 cones, new idx reject 9966 cones
after replace, n = 32021
[ 8.707] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.707] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.54, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32021
 before deduplicate, nNodes = 31989
 after deduplicate, nNodes = 31989, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31989
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018651
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.197790
Total time: 0.216570
balance: alg time 0.22, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6240.94 MB, free = 18018.75 MB, total = 24259.69 MB
[ 9.002] Rewrite Iteration
0 in EvaluateNode 
[ 9.079] Finished GPU enumeration and pre-evaluation
[ 9.080] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 9.084] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.085] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.61, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017918
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.156526
Total time: 0.174565
balance: alg time 0.17, full time 0.18
** cmd error: unknown command 'rw'
(this is likely caused by using an alias defined in "abc.rc"
without having this file in the current or parent directory)
[ERR 2025-12-23 02:09:27     5 sec]  Cannot execute command "rw -z".

*****Perform Balance*****
Phase 1 time: 0.018794
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.335369
Total time: 0.354416
balance: alg time 0.35, full time 0.36

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 6.958] Rewrite Iteration
0 in EvaluateNode 
[ 7.072] Finished GPU enumeration and pre-evaluation
[ 7.073] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 7.074] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.075] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.021206
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.314795
Total time: 0.336150
balance: alg time 0.34, full time 0.34

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 7.541] Rewrite Iteration
0 in EvaluateNode 
[ 7.616] Finished GPU enumeration and pre-evaluation
[ 7.617] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.618] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.619] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 7.630] Rewrite Iteration
0 in EvaluateNode 
[ 7.708] Finished GPU enumeration and pre-evaluation
[ 7.708] Replacing sub-graphs
0 after replace 
N = 35765   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35748
successfully replaced 2406 cones (pos 20, zero 2386), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8981 cones
after replace, n = 35748
[ 7.709] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.710] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35748
 before deduplicate, nNodes = 35716
 after deduplicate, nNodes = 35716, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35716
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019974
Max cover len: 18
Total number of covers: 23253
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23253
#nodes = 29428
Phase 2 time: 0.209310
Total time: 0.229488
balance: alg time 0.23, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 8.021] Rewrite Iteration
0 in EvaluateNode 
[ 8.100] Finished GPU enumeration and pre-evaluation
[ 8.101] Replacing sub-graphs
0 after replace 
N = 34755   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34507
successfully replaced 1943 cones (pos 50, zero 1893), reverted 14 cones, compromised 412 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8846 cones
after replace, n = 34507
[ 8.105] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.106] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34507
 before deduplicate, nNodes = 34475
 after deduplicate, nNodes = 34474, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34474
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018441
Max cover len: 12
Total number of covers: 23830
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23830
#nodes = 29365
Phase 2 time: 0.164758
Total time: 0.183330
balance: alg time 0.18, full time 0.19

*****Perform Balance*****
Phase 1 time: 0.015789
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29352
Phase 2 time: 0.283248
Total time: 0.299162
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 8.610] Rewrite Iteration
0 in EvaluateNode 
[ 8.681] Finished GPU enumeration and pre-evaluation
[ 8.682] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.683] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.684] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019897
Max cover len: 21
Total number of covers: 22020
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22020
#nodes = 29281
Phase 2 time: 0.282863
Total time: 0.302895
balance: alg time 0.30, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 9.079] Rewrite Iteration
0 in EvaluateNode 
[ 9.149] Finished GPU enumeration and pre-evaluation
[ 9.150] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 9.150] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.151] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 9.163] Rewrite Iteration
0 in EvaluateNode 
[ 9.237] Finished GPU enumeration and pre-evaluation
[ 9.237] Replacing sub-graphs
0 after replace 
N = 32023   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32021
successfully replaced 1188 cones (pos 7, zero 1181), reverted 3 cones, compromised 54 cones, pre-eval rejected 18083 cones, small cut reject 0 cones, new idx reject 9966 cones
after replace, n = 32021
[ 9.238] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.239] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32021
 before deduplicate, nNodes = 31989
 after deduplicate, nNodes = 31989, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31989
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.020050
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.204874
Total time: 0.225051
balance: alg time 0.23, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6238.94 MB, free = 18020.75 MB, total = 24259.69 MB
[ 9.541] Rewrite Iteration
0 in EvaluateNode 
[ 9.616] Finished GPU enumeration and pre-evaluation
[ 9.617] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1886 cones (pos 8, zero 1878), reverted 25 cones, compromised 361 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 9.621] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.622] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018594
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.160513
Total time: 0.179233
balance: alg time 0.18, full time 0.18

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 13275
Num to compute reconv: 153
Truth table len: 61561
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.018555
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.331932
Total time: 0.350767
balance: alg time 0.35, full time 0.35

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 6.562] Rewrite Iteration
0 in EvaluateNode 
[ 6.676] Finished GPU enumeration and pre-evaluation
[ 6.677] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 6.679] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.680] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020408
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.299948
Total time: 0.320473
balance: alg time 0.32, full time 0.32

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 7.130] Rewrite Iteration
0 in EvaluateNode 
[ 7.205] Finished GPU enumeration and pre-evaluation
[ 7.206] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.207] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.208] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 7.221] Rewrite Iteration
0 in EvaluateNode 
[ 7.299] Finished GPU enumeration and pre-evaluation
[ 7.300] Replacing sub-graphs
0 after replace 
N = 35758   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35743
successfully replaced 2402 cones (pos 20, zero 2382), reverted 1 cones, compromised 85 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8986 cones
after replace, n = 35743
[ 7.301] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.302] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35743
 before deduplicate, nNodes = 35711
 after deduplicate, nNodes = 35711, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35711
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018869
Max cover len: 18
Total number of covers: 23251
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23251
#nodes = 29428
Phase 2 time: 0.204634
Total time: 0.223620
balance: alg time 0.22, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 7.611] Rewrite Iteration
0 in EvaluateNode 
[ 7.690] Finished GPU enumeration and pre-evaluation
[ 7.691] Replacing sub-graphs
0 after replace 
N = 34758   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34509
successfully replaced 1945 cones (pos 50, zero 1895), reverted 14 cones, compromised 411 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34509
[ 7.695] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.696] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34509
 before deduplicate, nNodes = 34477
 after deduplicate, nNodes = 34476, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34476
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017896
Max cover len: 12
Total number of covers: 23829
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23829
#nodes = 29365
Phase 2 time: 0.159401
Total time: 0.177410
balance: alg time 0.18, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.015020
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29352
Phase 2 time: 0.275389
Total time: 0.290520
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 8.188] Rewrite Iteration
0 in EvaluateNode 
[ 8.259] Finished GPU enumeration and pre-evaluation
[ 8.260] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.261] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.262] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019316
Max cover len: 21
Total number of covers: 22020
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22020
#nodes = 29281
Phase 2 time: 0.275307
Total time: 0.294751
balance: alg time 0.29, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 8.652] Rewrite Iteration
0 in EvaluateNode 
[ 8.722] Finished GPU enumeration and pre-evaluation
[ 8.723] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 8.723] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.724] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 8.738] Rewrite Iteration
0 in EvaluateNode 
[ 8.812] Finished GPU enumeration and pre-evaluation
[ 8.812] Replacing sub-graphs
0 after replace 
N = 32023   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32021
successfully replaced 1188 cones (pos 7, zero 1181), reverted 3 cones, compromised 54 cones, pre-eval rejected 18083 cones, small cut reject 0 cones, new idx reject 9966 cones
after replace, n = 32021
[ 8.813] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.814] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32021
 before deduplicate, nNodes = 31989
 after deduplicate, nNodes = 31989, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31989
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018539
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.194847
Total time: 0.213504
balance: alg time 0.21, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[ 9.108] Rewrite Iteration
0 in EvaluateNode 
[ 9.185] Finished GPU enumeration and pre-evaluation
[ 9.186] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 9.189] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.191] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017879
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.154868
Total time: 0.172867
balance: alg time 0.17, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.017529
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.316267
Total time: 0.334117
balance: alg time 0.33, full time 0.34

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[14.876] Rewrite Iteration
0 in EvaluateNode 
[14.981] Finished GPU enumeration and pre-evaluation
[14.982] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38617
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38617
[14.983] Finished eval and replace
 *** Topo sort time: 0.00 sec
[14.984] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 0.70, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38617
 before deduplicate, nNodes = 38585
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.45 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[16.822] Rewrite Iteration
0 in EvaluateNode 
[16.918] Finished GPU enumeration and pre-evaluation
[16.919] Replacing sub-graphs
0 after replace 
N = 31463   n = 30180   n * RATIO = 69414
before rebuild, nn = 30180
after rebuild, n = 31459
successfully replaced 639 cones (pos 639, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29506 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 31459
[16.920] Finished eval and replace
 *** Topo sort time: 0.00 sec
[16.921] Rewrite Iteration Ends
real reduction: 639
** Total Time breakdown: ENUM 0.80, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31459
 before deduplicate, nNodes = 31427
 after deduplicate, nNodes = 31424, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31424
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6236.94 MB, free = 18022.75 MB, total = 24259.69 MB
[21.004] Rewrite Iteration
0 in EvaluateNode 
[21.095] Finished GPU enumeration and pre-evaluation
[21.096] Replacing sub-graphs
0 after replace 
N = 29484   n = 29429   n * RATIO = 67686
before rebuild, nn = 29429
after rebuild, n = 29482
successfully replaced 28 cones (pos 28, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29366 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29482
[21.097] Finished eval and replace
 *** Topo sort time: 0.00 sec
[21.098] Rewrite Iteration Ends
real reduction: 30
** Total Time breakdown: ENUM 0.89, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29482
 before deduplicate, nNodes = 29450
 after deduplicate, nNodes = 29448, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29448
rewrite: alg time 0.10, full time 0.11

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 11815
Num to compute reconv: 331
Truth table len: 88493
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.018807
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.335114
Total time: 0.354182
balance: alg time 0.35, full time 0.36

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 6.851] Rewrite Iteration
0 in EvaluateNode 
[ 6.967] Finished GPU enumeration and pre-evaluation
[ 6.968] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 6.970] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.971] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020627
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.302007
Total time: 0.322752
balance: alg time 0.32, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 7.422] Rewrite Iteration
0 in EvaluateNode 
[ 7.497] Finished GPU enumeration and pre-evaluation
[ 7.498] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.498] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.499] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.19, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 7.510] Rewrite Iteration
0 in EvaluateNode 
[ 7.588] Finished GPU enumeration and pre-evaluation
[ 7.589] Replacing sub-graphs
0 after replace 
N = 35763   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35747
successfully replaced 2402 cones (pos 20, zero 2382), reverted 2 cones, compromised 87 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8983 cones
after replace, n = 35747
[ 7.590] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.591] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.26, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35747
 before deduplicate, nNodes = 35715
 after deduplicate, nNodes = 35715, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35715
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019040
Max cover len: 18
Total number of covers: 23253
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23253
#nodes = 29428
Phase 2 time: 0.205637
Total time: 0.224787
balance: alg time 0.22, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 7.897] Rewrite Iteration
0 in EvaluateNode 
[ 7.976] Finished GPU enumeration and pre-evaluation
[ 7.977] Replacing sub-graphs
0 after replace 
N = 34759   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34512
successfully replaced 1944 cones (pos 50, zero 1894), reverted 14 cones, compromised 412 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34512
[ 7.981] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.982] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34512
 before deduplicate, nNodes = 34480
 after deduplicate, nNodes = 34479, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34479
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017970
Max cover len: 12
Total number of covers: 23827
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23827
#nodes = 29365
Phase 2 time: 0.160172
Total time: 0.178269
balance: alg time 0.18, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.015128
Max cover len: 21
Total number of covers: 21969
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21969
#nodes = 29352
Phase 2 time: 0.275264
Total time: 0.290502
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 8.473] Rewrite Iteration
0 in EvaluateNode 
[ 8.545] Finished GPU enumeration and pre-evaluation
[ 8.546] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.547] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.547] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019235
Max cover len: 21
Total number of covers: 22019
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22019
#nodes = 29281
Phase 2 time: 0.274638
Total time: 0.293989
balance: alg time 0.29, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 8.933] Rewrite Iteration
0 in EvaluateNode 
[ 9.002] Finished GPU enumeration and pre-evaluation
[ 9.004] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 9.004] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.005] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.47, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 9.016] Rewrite Iteration
0 in EvaluateNode 
[ 9.090] Finished GPU enumeration and pre-evaluation
[ 9.091] Replacing sub-graphs
0 after replace 
N = 32016   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32014
successfully replaced 1185 cones (pos 7, zero 1178), reverted 3 cones, compromised 54 cones, pre-eval rejected 18084 cones, small cut reject 0 cones, new idx reject 9968 cones
after replace, n = 32014
[ 9.092] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.093] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.54, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32014
 before deduplicate, nNodes = 31982
 after deduplicate, nNodes = 31982, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31982
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018384
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.196454
Total time: 0.214956
balance: alg time 0.22, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6234.94 MB, free = 18024.75 MB, total = 24259.69 MB
[ 9.384] Rewrite Iteration
0 in EvaluateNode 
[ 9.461] Finished GPU enumeration and pre-evaluation
[ 9.462] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 9.466] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.467] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.61, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017990
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.154110
Total time: 0.172222
balance: alg time 0.17, full time 0.18

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 13247
Num to compute reconv: 28
Truth table len: 94284
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.018878
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.327812
Total time: 0.346931
balance: alg time 0.35, full time 0.35

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 6.681] Rewrite Iteration
0 in EvaluateNode 
[ 6.791] Finished GPU enumeration and pre-evaluation
[ 6.792] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 6.794] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 6.795] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.12, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020028
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.296246
Total time: 0.316385
balance: alg time 0.32, full time 0.32

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 7.247] Rewrite Iteration
0 in EvaluateNode 
[ 7.322] Finished GPU enumeration and pre-evaluation
[ 7.323] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.323] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.324] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 7.339] Rewrite Iteration
0 in EvaluateNode 
[ 7.417] Finished GPU enumeration and pre-evaluation
[ 7.417] Replacing sub-graphs
0 after replace 
N = 35766   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35749
successfully replaced 2407 cones (pos 20, zero 2387), reverted 1 cones, compromised 87 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8979 cones
after replace, n = 35749
[ 7.418] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.419] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35749
 before deduplicate, nNodes = 35717
 after deduplicate, nNodes = 35717, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35717
rewrite: alg time 0.09, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018772
Max cover len: 18
Total number of covers: 23255
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23255
#nodes = 29428
Phase 2 time: 0.200249
Total time: 0.219130
balance: alg time 0.22, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 7.724] Rewrite Iteration
0 in EvaluateNode 
[ 7.804] Finished GPU enumeration and pre-evaluation
[ 7.805] Replacing sub-graphs
0 after replace 
N = 34766   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34518
successfully replaced 1951 cones (pos 50, zero 1901), reverted 14 cones, compromised 405 cones, pre-eval rejected 18207 cones, small cut reject 0 cones, new idx reject 8844 cones
after replace, n = 34518
[ 7.808] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.809] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.32, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34518
 before deduplicate, nNodes = 34486
 after deduplicate, nNodes = 34485, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34485
rewrite: alg time 0.10, full time 0.11

*****Perform Balance*****
Phase 1 time: 0.017634
Max cover len: 12
Total number of covers: 23822
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23822
#nodes = 29365
Phase 2 time: 0.156704
Total time: 0.174461
balance: alg time 0.17, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.014709
Max cover len: 21
Total number of covers: 21969
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21969
#nodes = 29353
Phase 2 time: 0.268390
Total time: 0.283207
balance: alg time 0.28, full time 0.28

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 8.292] Rewrite Iteration
0 in EvaluateNode 
[ 8.363] Finished GPU enumeration and pre-evaluation
[ 8.364] Replacing sub-graphs
0 after replace 
N = 29623   n = 29385   n * RATIO = 67585
before rebuild, nn = 29385
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29255 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.365] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.366] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.39, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5017
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35952
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.018858
Max cover len: 21
Total number of covers: 22018
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22018
#nodes = 29282
Phase 2 time: 0.269831
Total time: 0.288798
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 8.750] Rewrite Iteration
0 in EvaluateNode 
[ 8.819] Finished GPU enumeration and pre-evaluation
[ 8.820] Replacing sub-graphs
0 after replace 
N = 29329   n = 29314   n * RATIO = 67422
before rebuild, nn = 29314
after rebuild, n = 29329
successfully replaced 8 cones (pos 8, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29329
[ 8.821] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.822] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29329
 before deduplicate, nNodes = 29297
 after deduplicate, nNodes = 29297, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29297
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 8.836] Rewrite Iteration
0 in EvaluateNode 
[ 8.910] Finished GPU enumeration and pre-evaluation
[ 8.910] Replacing sub-graphs
0 after replace 
N = 32041   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 32039
successfully replaced 1197 cones (pos 7, zero 1190), reverted 3 cones, compromised 52 cones, pre-eval rejected 18086 cones, small cut reject 0 cones, new idx reject 9959 cones
after replace, n = 32039
[ 8.911] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.912] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32039
 before deduplicate, nNodes = 32007
 after deduplicate, nNodes = 32007, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32007
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018364
Max cover len: 17
Total number of covers: 23227
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23227
#nodes = 29279
Phase 2 time: 0.191294
Total time: 0.209767
balance: alg time 0.21, full time 0.21

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35686
Start reordering ...
Reordered network new nObjs: 29311, original nObjs: 29312
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6224.94 MB, free = 18034.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6232.94 MB, free = 18026.75 MB, total = 24259.69 MB
[ 9.202] Rewrite Iteration
0 in EvaluateNode 
[ 9.279] Finished GPU enumeration and pre-evaluation
[ 9.280] Replacing sub-graphs
0 after replace 
N = 34367   n = 29310   n * RATIO = 67413
before rebuild, nn = 29310
after rebuild, n = 34225
successfully replaced 1902 cones (pos 9, zero 1893), reverted 26 cones, compromised 371 cones, pre-eval rejected 18227 cones, small cut reject 0 cones, new idx reject 8752 cones
after replace, n = 34225
[ 9.284] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.285] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34225
 before deduplicate, nNodes = 34193
 after deduplicate, nNodes = 34193, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34193
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017273
Max cover len: 10
Total number of covers: 23910
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23910
#nodes = 29266
Phase 2 time: 0.150726
Total time: 0.168105
balance: alg time 0.17, full time 0.17

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4174.94 MB, free = 20084.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 4182.94 MB, free = 20076.75 MB, total = 24259.69 MB
[16.151] Rewrite Iteration
0 in EvaluateNode 
[16.259] Finished GPU enumeration and pre-evaluation
[16.260] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[16.263] Finished eval and replace
 *** Topo sort time: 0.00 sec
[16.265] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 0.70, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 12080
Num to compute reconv: 136
Truth table len: 69874
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.043762
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.340496
Total time: 0.384524
balance: alg time 0.38, full time 0.39

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 7.654] Rewrite Iteration
0 in EvaluateNode 
[ 7.768] Finished GPU enumeration and pre-evaluation
[ 7.769] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 7.771] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.772] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020844
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.303820
Total time: 0.324800
balance: alg time 0.32, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 8.230] Rewrite Iteration
0 in EvaluateNode 
[ 8.304] Finished GPU enumeration and pre-evaluation
[ 8.305] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 8.306] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.307] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 8.318] Rewrite Iteration
0 in EvaluateNode 
[ 8.396] Finished GPU enumeration and pre-evaluation
[ 8.397] Replacing sub-graphs
0 after replace 
N = 35761   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35745
successfully replaced 2404 cones (pos 20, zero 2384), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8983 cones
after replace, n = 35745
[ 8.398] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.399] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.26, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35745
 before deduplicate, nNodes = 35713
 after deduplicate, nNodes = 35713, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35713
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019280
Max cover len: 18
Total number of covers: 23252
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23252
#nodes = 29428
Phase 2 time: 0.206711
Total time: 0.226108
balance: alg time 0.23, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 8.708] Rewrite Iteration
0 in EvaluateNode 
[ 8.788] Finished GPU enumeration and pre-evaluation
[ 8.789] Replacing sub-graphs
0 after replace 
N = 34767   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34517
successfully replaced 1953 cones (pos 50, zero 1903), reverted 14 cones, compromised 404 cones, pre-eval rejected 18207 cones, small cut reject 0 cones, new idx reject 8843 cones
after replace, n = 34517
[ 8.792] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.794] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34517
 before deduplicate, nNodes = 34485
 after deduplicate, nNodes = 34484, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34484
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018134
Max cover len: 12
Total number of covers: 23823
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23823
#nodes = 29365
Phase 2 time: 0.161884
Total time: 0.180138
balance: alg time 0.18, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.015227
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29353
Phase 2 time: 0.277849
Total time: 0.293213
balance: alg time 0.29, full time 0.29

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 9.289] Rewrite Iteration
0 in EvaluateNode 
[ 9.360] Finished GPU enumeration and pre-evaluation
[ 9.361] Replacing sub-graphs
0 after replace 
N = 29623   n = 29385   n * RATIO = 67585
before rebuild, nn = 29385
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29255 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 9.362] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.363] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5017
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35952
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019606
Max cover len: 21
Total number of covers: 22019
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22019
#nodes = 29282
Phase 2 time: 0.279341
Total time: 0.299074
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 9.754] Rewrite Iteration
0 in EvaluateNode 
[ 9.824] Finished GPU enumeration and pre-evaluation
[ 9.825] Replacing sub-graphs
0 after replace 
N = 29329   n = 29314   n * RATIO = 67422
before rebuild, nn = 29314
after rebuild, n = 29329
successfully replaced 8 cones (pos 8, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29329
[ 9.825] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.826] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29329
 before deduplicate, nNodes = 29297
 after deduplicate, nNodes = 29297, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29297
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[ 9.838] Rewrite Iteration
0 in EvaluateNode 
[ 9.912] Finished GPU enumeration and pre-evaluation
[ 9.912] Replacing sub-graphs
0 after replace 
N = 32048   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 32046
successfully replaced 1201 cones (pos 7, zero 1194), reverted 3 cones, compromised 51 cones, pre-eval rejected 18085 cones, small cut reject 0 cones, new idx reject 9957 cones
after replace, n = 32046
[ 9.913] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.914] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32046
 before deduplicate, nNodes = 32014
 after deduplicate, nNodes = 32014, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32014
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.018768
Max cover len: 17
Total number of covers: 23226
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23226
#nodes = 29279
Phase 2 time: 0.197430
Total time: 0.216318
balance: alg time 0.22, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35686
Start reordering ...
Reordered network new nObjs: 29311, original nObjs: 29312
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6230.94 MB, free = 18028.75 MB, total = 24259.69 MB
[10.207] Rewrite Iteration
0 in EvaluateNode 
[10.283] Finished GPU enumeration and pre-evaluation
[10.284] Replacing sub-graphs
0 after replace 
N = 34364   n = 29310   n * RATIO = 67413
before rebuild, nn = 29310
after rebuild, n = 34222
successfully replaced 1904 cones (pos 9, zero 1895), reverted 25 cones, compromised 368 cones, pre-eval rejected 18225 cones, small cut reject 0 cones, new idx reject 8756 cones
after replace, n = 34222
[10.288] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.289] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34222
 before deduplicate, nNodes = 34190
 after deduplicate, nNodes = 34190, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34190
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.017922
Max cover len: 10
Total number of covers: 23910
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23910
#nodes = 29266
Phase 2 time: 0.156508
Total time: 0.174556
balance: alg time 0.17, full time 0.18

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5195
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 41812
Start reordering ...
Reordered network new nObjs: 30889, original nObjs: 32093
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5208
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5289
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 37248
Start reordering ...
Reordered network new nObjs: 30846, original nObjs: 30889
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 11509
Num to compute reconv: 184
Truth table len: 57698
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.034246
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.324935
Total time: 0.359455
balance: alg time 0.36, full time 0.36

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 7.180] Rewrite Iteration
0 in EvaluateNode 
[ 7.293] Finished GPU enumeration and pre-evaluation
[ 7.294] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 7.295] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.296] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019862
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.291654
Total time: 0.311628
balance: alg time 0.31, full time 0.32

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 7.741] Rewrite Iteration
0 in EvaluateNode 
[ 7.815] Finished GPU enumeration and pre-evaluation
[ 7.816] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 7.817] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.817] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 7.831] Rewrite Iteration
0 in EvaluateNode 
[ 7.910] Finished GPU enumeration and pre-evaluation
[ 7.910] Replacing sub-graphs
0 after replace 
N = 35761   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35745
successfully replaced 2403 cones (pos 20, zero 2383), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8984 cones
after replace, n = 35745
[ 7.912] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.913] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35745
 before deduplicate, nNodes = 35713
 after deduplicate, nNodes = 35713, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35713
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.023316
Max cover len: 18
Total number of covers: 23251
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23251
#nodes = 29428
Phase 2 time: 0.216351
Total time: 0.239817
balance: alg time 0.24, full time 0.24

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 8.242] Rewrite Iteration
0 in EvaluateNode 
[ 8.323] Finished GPU enumeration and pre-evaluation
[ 8.324] Replacing sub-graphs
0 after replace 
N = 34758   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34509
successfully replaced 1945 cones (pos 50, zero 1895), reverted 14 cones, compromised 411 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34509
[ 8.327] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.328] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34509
 before deduplicate, nNodes = 34477
 after deduplicate, nNodes = 34476, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34476
rewrite: alg time 0.10, full time 0.11

*****Perform Balance*****
Phase 1 time: 0.018452
Max cover len: 12
Total number of covers: 23829
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23829
#nodes = 29365
Phase 2 time: 0.165340
Total time: 0.183927
balance: alg time 0.18, full time 0.19

*****Perform Balance*****
Phase 1 time: 0.015764
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29352
Phase 2 time: 0.285144
Total time: 0.301035
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 8.838] Rewrite Iteration
0 in EvaluateNode 
[ 8.909] Finished GPU enumeration and pre-evaluation
[ 8.910] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[ 8.911] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 8.912] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019925
Max cover len: 21
Total number of covers: 22020
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22020
#nodes = 29281
Phase 2 time: 0.286321
Total time: 0.306374
balance: alg time 0.31, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 9.315] Rewrite Iteration
0 in EvaluateNode 
[ 9.385] Finished GPU enumeration and pre-evaluation
[ 9.386] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[ 9.387] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.387] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 9.401] Rewrite Iteration
0 in EvaluateNode 
[ 9.476] Finished GPU enumeration and pre-evaluation
[ 9.476] Replacing sub-graphs
0 after replace 
N = 32023   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32021
successfully replaced 1188 cones (pos 7, zero 1181), reverted 3 cones, compromised 54 cones, pre-eval rejected 18083 cones, small cut reject 0 cones, new idx reject 9966 cones
after replace, n = 32021
[ 9.477] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.478] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32021
 before deduplicate, nNodes = 31989
 after deduplicate, nNodes = 31989, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31989
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019185
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.203703
Total time: 0.223037
balance: alg time 0.22, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[ 9.782] Rewrite Iteration
0 in EvaluateNode 
[ 9.859] Finished GPU enumeration and pre-evaluation
[ 9.860] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[ 9.863] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.864] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018446
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.160025
Total time: 0.178606
balance: alg time 0.18, full time 0.18

*****Perform Balance*****
Phase 1 time: 0.018228
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.321192
Total time: 0.339946
balance: alg time 0.34, full time 0.34

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[16.060] Rewrite Iteration
0 in EvaluateNode 
[16.165] Finished GPU enumeration and pre-evaluation
[16.166] Replacing sub-graphs
0 after replace 
N = 39583   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38617
successfully replaced 1779 cones (pos 1779, zero 0), reverted 503 cones, compromised 521 cones, pre-eval rejected 29128 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38617
[16.168] Finished eval and replace
 *** Topo sort time: 0.00 sec
[16.169] Rewrite Iteration Ends
real reduction: 1783
** Total Time breakdown: ENUM 0.70, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38617
 before deduplicate, nNodes = 38585
 after deduplicate, nNodes = 37150, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37150
rewrite: alg time 0.12, full time 0.12

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.45 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[18.285] Rewrite Iteration
0 in EvaluateNode 
[18.382] Finished GPU enumeration and pre-evaluation
[18.383] Replacing sub-graphs
0 after replace 
N = 31463   n = 30180   n * RATIO = 69414
before rebuild, nn = 30180
after rebuild, n = 31459
successfully replaced 639 cones (pos 639, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29506 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 31459
[18.384] Finished eval and replace
 *** Topo sort time: 0.00 sec
[18.384] Rewrite Iteration Ends
real reduction: 639
** Total Time breakdown: ENUM 0.80, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31459
 before deduplicate, nNodes = 31427
 after deduplicate, nNodes = 31424, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31424
rewrite: alg time 0.11, full time 0.11

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6220.94 MB, free = 18038.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6228.94 MB, free = 18030.75 MB, total = 24259.69 MB
[20.002] Rewrite Iteration
0 in EvaluateNode 
[20.080] Finished GPU enumeration and pre-evaluation
[20.081] Replacing sub-graphs
0 after replace 
N = 32571   n = 29541   n * RATIO = 67944
before rebuild, nn = 29541
after rebuild, n = 32541
successfully replaced 1345 cones (pos 45, zero 1300), reverted 2 cones, compromised 83 cones, pre-eval rejected 17907 cones, small cut reject 0 cones, new idx reject 10172 cones
after replace, n = 32541
[20.082] Finished eval and replace
 *** Topo sort time: 0.00 sec
[20.083] Rewrite Iteration Ends
real reduction: 45
** Total Time breakdown: ENUM 0.87, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32541
 before deduplicate, nNodes = 32509
 after deduplicate, nNodes = 32509, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32509
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 11528
Num to compute reconv: 523
Truth table len: 114168
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.020237
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.352564
Total time: 0.373069
balance: alg time 0.37, full time 0.37

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[ 9.090] Rewrite Iteration
0 in EvaluateNode 
[ 9.207] Finished GPU enumeration and pre-evaluation
[ 9.208] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[ 9.209] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.211] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.021506
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.327385
Total time: 0.349016
balance: alg time 0.35, full time 0.35

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[ 9.703] Rewrite Iteration
0 in EvaluateNode 
[ 9.778] Finished GPU enumeration and pre-evaluation
[ 9.779] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[ 9.780] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.780] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.19, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[ 9.792] Rewrite Iteration
0 in EvaluateNode 
[ 9.871] Finished GPU enumeration and pre-evaluation
[ 9.871] Replacing sub-graphs
0 after replace 
N = 35761   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35745
successfully replaced 2404 cones (pos 20, zero 2384), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8983 cones
after replace, n = 35745
[ 9.873] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.874] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.26, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35745
 before deduplicate, nNodes = 35713
 after deduplicate, nNodes = 35713, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35713
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019820
Max cover len: 18
Total number of covers: 23252
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23252
#nodes = 29428
Phase 2 time: 0.211217
Total time: 0.231174
balance: alg time 0.23, full time 0.24

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[10.190] Rewrite Iteration
0 in EvaluateNode 
[10.270] Finished GPU enumeration and pre-evaluation
[10.270] Replacing sub-graphs
0 after replace 
N = 34767   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34517
successfully replaced 1953 cones (pos 50, zero 1903), reverted 14 cones, compromised 404 cones, pre-eval rejected 18207 cones, small cut reject 0 cones, new idx reject 8843 cones
after replace, n = 34517
[10.274] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.275] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34517
 before deduplicate, nNodes = 34485
 after deduplicate, nNodes = 34484, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34484
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018329
Max cover len: 12
Total number of covers: 23823
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23823
#nodes = 29365
Phase 2 time: 0.164277
Total time: 0.182746
balance: alg time 0.18, full time 0.19

*****Perform Balance*****
Phase 1 time: 0.015576
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29353
Phase 2 time: 0.283177
Total time: 0.298873
balance: alg time 0.30, full time 0.30

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[10.780] Rewrite Iteration
0 in EvaluateNode 
[10.852] Finished GPU enumeration and pre-evaluation
[10.852] Replacing sub-graphs
0 after replace 
N = 29623   n = 29385   n * RATIO = 67585
before rebuild, nn = 29385
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29255 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[10.853] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.854] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5017
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35952
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.019776
Max cover len: 21
Total number of covers: 22019
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22019
#nodes = 29282
Phase 2 time: 0.283334
Total time: 0.303240
balance: alg time 0.30, full time 0.31

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[11.251] Rewrite Iteration
0 in EvaluateNode 
[11.321] Finished GPU enumeration and pre-evaluation
[11.322] Replacing sub-graphs
0 after replace 
N = 29329   n = 29314   n * RATIO = 67422
before rebuild, nn = 29314
after rebuild, n = 29329
successfully replaced 8 cones (pos 8, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29329
[11.322] Finished eval and replace
 *** Topo sort time: 0.00 sec
[11.323] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 0.47, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29329
 before deduplicate, nNodes = 29297
 after deduplicate, nNodes = 29297, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29297
rewrite: alg time 0.08, full time 0.08

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[11.335] Rewrite Iteration
0 in EvaluateNode 
[11.409] Finished GPU enumeration and pre-evaluation
[11.409] Replacing sub-graphs
0 after replace 
N = 32048   n = 29329   n * RATIO = 67456
before rebuild, nn = 29329
after rebuild, n = 32046
successfully replaced 1201 cones (pos 7, zero 1194), reverted 3 cones, compromised 51 cones, pre-eval rejected 18085 cones, small cut reject 0 cones, new idx reject 9957 cones
after replace, n = 32046
[11.410] Finished eval and replace
 *** Topo sort time: 0.00 sec
[11.411] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32046
 before deduplicate, nNodes = 32014
 after deduplicate, nNodes = 32014, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32014
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.019175
Max cover len: 17
Total number of covers: 23226
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23226
#nodes = 29279
Phase 2 time: 0.200692
Total time: 0.220008
balance: alg time 0.22, full time 0.22

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35686
Start reordering ...
Reordered network new nObjs: 29311, original nObjs: 29312
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6218.94 MB, free = 18040.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6226.94 MB, free = 18032.75 MB, total = 24259.69 MB
[11.710] Rewrite Iteration
0 in EvaluateNode 
[11.787] Finished GPU enumeration and pre-evaluation
[11.788] Replacing sub-graphs
0 after replace 
N = 34364   n = 29310   n * RATIO = 67413
before rebuild, nn = 29310
after rebuild, n = 34222
successfully replaced 1904 cones (pos 9, zero 1895), reverted 25 cones, compromised 368 cones, pre-eval rejected 18225 cones, small cut reject 0 cones, new idx reject 8756 cones
after replace, n = 34222
[11.791] Finished eval and replace
 *** Topo sort time: 0.00 sec
[11.793] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34222
 before deduplicate, nNodes = 34190
 after deduplicate, nNodes = 34190, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34190
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.018172
Max cover len: 10
Total number of covers: 23910
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23910
#nodes = 29266
Phase 2 time: 0.159773
Total time: 0.178082
balance: alg time 0.18, full time 0.18

*****Perform Refactor*****
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
Num to resyn: 13247
Num to compute reconv: 28
Truth table len: 94284
GPUassert: an illegal memory access was encountered,
at /nfs/home/tensore/CULS_LSV2025/src/algorithms/refactor.cu, line 1120

*****Perform Balance*****
Phase 1 time: 0.019258
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.336435
Total time: 0.355967
balance: alg time 0.36, full time 0.36

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.83 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[10.266] Rewrite Iteration
0 in EvaluateNode 
[10.380] Finished GPU enumeration and pre-evaluation
[10.381] Replacing sub-graphs
0 after replace 
N = 39569   n = 31963   n * RATIO = 73514
before rebuild, nn = 31963
after rebuild, n = 38600
successfully replaced 1769 cones (pos 1769, zero 0), reverted 503 cones, compromised 524 cones, pre-eval rejected 29135 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 38600
[10.382] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.384] Rewrite Iteration Ends
real reduction: 1773
** Total Time breakdown: ENUM 0.11, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 38600
 before deduplicate, nNodes = 38568
 after deduplicate, nNodes = 37128, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 37128
rewrite: alg time 0.13, full time 0.13

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 6622
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 6696
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 54405
Start reordering ...
Reordered network new nObjs: 34059, original nObjs: 37161
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.020751
Max cover len: 21
Total number of covers: 22452
*** Max Level: 383
Reconstruct complete! #reconstructed covers = 22452
#nodes = 29444
Phase 2 time: 0.303492
Total time: 0.324355
balance: alg time 0.32, full time 0.33

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[10.844] Rewrite Iteration
0 in EvaluateNode 
[10.919] Finished GPU enumeration and pre-evaluation
[10.919] Replacing sub-graphs
0 after replace 
N = 29540   n = 29476   n * RATIO = 67794
before rebuild, nn = 29476
after rebuild, n = 29533
successfully replaced 27 cones (pos 27, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29410 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29533
[10.920] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.921] Rewrite Iteration Ends
real reduction: 29
** Total Time breakdown: ENUM 0.18, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29533
 before deduplicate, nNodes = 29501
 after deduplicate, nNodes = 29495, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29495
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[10.934] Rewrite Iteration
0 in EvaluateNode 
[11.012] Finished GPU enumeration and pre-evaluation
[11.013] Replacing sub-graphs
0 after replace 
N = 35761   n = 29533   n * RATIO = 67925
before rebuild, nn = 29533
after rebuild, n = 35745
successfully replaced 2403 cones (pos 20, zero 2383), reverted 1 cones, compromised 86 cones, pre-eval rejected 18024 cones, small cut reject 0 cones, new idx reject 8984 cones
after replace, n = 35745
[11.014] Finished eval and replace
 *** Topo sort time: 0.00 sec
[11.015] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 0.25, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35745
 before deduplicate, nNodes = 35713
 after deduplicate, nNodes = 35713, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 35713
rewrite: alg time 0.09, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.019127
Max cover len: 18
Total number of covers: 23251
*** Max Level: 372
Reconstruct complete! #reconstructed covers = 23251
#nodes = 29428
Phase 2 time: 0.203674
Total time: 0.222921
balance: alg time 0.22, full time 0.23

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5056
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5135
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 35915
Start reordering ...
Reordered network new nObjs: 29454, original nObjs: 29461
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.29 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[11.327] Rewrite Iteration
0 in EvaluateNode 
[11.408] Finished GPU enumeration and pre-evaluation
[11.409] Replacing sub-graphs
0 after replace 
N = 34758   n = 29453   n * RATIO = 67741
before rebuild, nn = 29453
after rebuild, n = 34509
successfully replaced 1945 cones (pos 50, zero 1895), reverted 14 cones, compromised 411 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8845 cones
after replace, n = 34509
[11.413] Finished eval and replace
 *** Topo sort time: 0.00 sec
[11.414] Rewrite Iteration Ends
real reduction: 51
** Total Time breakdown: ENUM 0.33, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34509
 before deduplicate, nNodes = 34477
 after deduplicate, nNodes = 34476, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34476
rewrite: alg time 0.10, full time 0.11

*****Perform Balance*****
Phase 1 time: 0.020646
Max cover len: 12
Total number of covers: 23829
*** Max Level: 355
Reconstruct complete! #reconstructed covers = 23829
#nodes = 29365
Phase 2 time: 0.183255
Total time: 0.204051
balance: alg time 0.20, full time 0.21

*****Perform Balance*****
Phase 1 time: 0.018107
Max cover len: 21
Total number of covers: 21970
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21970
#nodes = 29352
Phase 2 time: 0.321299
Total time: 0.339544
balance: alg time 0.34, full time 0.34

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[11.982] Rewrite Iteration
0 in EvaluateNode 
[12.054] Finished GPU enumeration and pre-evaluation
[12.055] Replacing sub-graphs
0 after replace 
N = 29623   n = 29384   n * RATIO = 67583
before rebuild, nn = 29384
after rebuild, n = 29585
successfully replaced 68 cones (pos 68, zero 0), reverted 29 cones, compromised 0 cones, pre-eval rejected 29254 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29585
[12.056] Finished eval and replace
 *** Topo sort time: 0.00 sec
[12.056] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 0.40, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29585
 before deduplicate, nNodes = 29553
 after deduplicate, nNodes = 29543, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29543
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5018
Truth table computation time: 0.00 sec
ISOP + factor time: 0.04 sec
Insertion complete, idCounter = 35954
Start reordering ...
Reordered network new nObjs: 29498, original nObjs: 29576
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.022430
Max cover len: 21
Total number of covers: 22020
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 22020
#nodes = 29281
Phase 2 time: 0.325657
Total time: 0.348242
balance: alg time 0.35, full time 0.35

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[12.503] Rewrite Iteration
0 in EvaluateNode 
[12.573] Finished GPU enumeration and pre-evaluation
[12.574] Replacing sub-graphs
0 after replace 
N = 29326   n = 29313   n * RATIO = 67419
before rebuild, nn = 29313
after rebuild, n = 29326
successfully replaced 7 cones (pos 7, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29274 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29326
[12.575] Finished eval and replace
 *** Topo sort time: 0.00 sec
[12.575] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.46, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29326
 before deduplicate, nNodes = 29294
 after deduplicate, nNodes = 29294, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29294
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[12.590] Rewrite Iteration
0 in EvaluateNode 
[12.664] Finished GPU enumeration and pre-evaluation
[12.665] Replacing sub-graphs
0 after replace 
N = 32023   n = 29326   n * RATIO = 67449
before rebuild, nn = 29326
after rebuild, n = 32021
successfully replaced 1188 cones (pos 7, zero 1181), reverted 3 cones, compromised 54 cones, pre-eval rejected 18083 cones, small cut reject 0 cones, new idx reject 9966 cones
after replace, n = 32021
[12.666] Finished eval and replace
 *** Topo sort time: 0.00 sec
[12.667] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 0.53, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32021
 before deduplicate, nNodes = 31989
 after deduplicate, nNodes = 31989, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31989
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.021271
Max cover len: 17
Total number of covers: 23216
*** Max Level: 354
Reconstruct complete! #reconstructed covers = 23216
#nodes = 29277
Phase 2 time: 0.227897
Total time: 0.249312
balance: alg time 0.25, full time 0.25

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5038
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35685
Start reordering ...
Reordered network new nObjs: 29309, original nObjs: 29310
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.26 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[12.999] Rewrite Iteration
0 in EvaluateNode 
[13.076] Finished GPU enumeration and pre-evaluation
[13.077] Replacing sub-graphs
0 after replace 
N = 34279   n = 29308   n * RATIO = 67408
before rebuild, nn = 29308
after rebuild, n = 34141
successfully replaced 1885 cones (pos 8, zero 1877), reverted 25 cones, compromised 362 cones, pre-eval rejected 18219 cones, small cut reject 0 cones, new idx reject 8785 cones
after replace, n = 34141
[13.081] Finished eval and replace
 *** Topo sort time: 0.00 sec
[13.082] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.60, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34141
 before deduplicate, nNodes = 34109
 after deduplicate, nNodes = 34109, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34109
rewrite: alg time 0.10, full time 0.10

*****Perform Balance*****
Phase 1 time: 0.020679
Max cover len: 10
Total number of covers: 23899
*** Max Level: 357
Reconstruct complete! #reconstructed covers = 23899
#nodes = 29266
Phase 2 time: 0.178219
Total time: 0.199050
balance: alg time 0.20, full time 0.20

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.86 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[18.559] Rewrite Iteration
0 in EvaluateNode 
[18.668] Finished GPU enumeration and pre-evaluation
[18.669] Replacing sub-graphs
0 after replace 
N = 56162   n = 32092   n * RATIO = 73811
before rebuild, nn = 32092
after rebuild, n = 53375
successfully replaced 6804 cones (pos 1533, zero 5271), reverted 54 cones, compromised 4758 cones, pre-eval rejected 15258 cones, small cut reject 0 cones, new idx reject 5186 cones
after replace, n = 53375
[18.672] Finished eval and replace
 *** Topo sort time: 0.00 sec
[18.674] Rewrite Iteration Ends
real reduction: 1535
** Total Time breakdown: ENUM 0.71, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53375
 before deduplicate, nNodes = 53343
 after deduplicate, nNodes = 53343, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 53343
rewrite: alg time 0.12, full time 0.13

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.53 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[21.053] Rewrite Iteration
0 in EvaluateNode 
[21.151] Finished GPU enumeration and pre-evaluation
[21.152] Replacing sub-graphs
0 after replace 
N = 41279   n = 30557   n * RATIO = 70281
before rebuild, nn = 30557
after rebuild, n = 41029
successfully replaced 4807 cones (pos 923, zero 3884), reverted 13 cones, compromised 885 cones, pre-eval rejected 16796 cones, small cut reject 0 cones, new idx reject 8024 cones
after replace, n = 41029
[21.154] Finished eval and replace
 *** Topo sort time: 0.00 sec
[21.155] Rewrite Iteration Ends
real reduction: 924
** Total Time breakdown: ENUM 0.80, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41029
 before deduplicate, nNodes = 40997
 after deduplicate, nNodes = 40997, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 40997
rewrite: alg time 0.11, full time 0.12

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.33 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[23.226] Rewrite Iteration
0 in EvaluateNode 
[23.299] Finished GPU enumeration and pre-evaluation
[23.300] Replacing sub-graphs
0 after replace 
N = 29926   n = 29633   n * RATIO = 68155
before rebuild, nn = 29633
after rebuild, n = 29910
successfully replaced 114 cones (pos 114, zero 0), reverted 21 cones, compromised 0 cones, pre-eval rejected 29466 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29910
[23.301] Finished eval and replace
 *** Topo sort time: 0.00 sec
[23.302] Rewrite Iteration Ends
real reduction: 115
** Total Time breakdown: ENUM 0.87, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29910
 before deduplicate, nNodes = 29878
 after deduplicate, nNodes = 29862, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29862
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.31 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[24.936] Rewrite Iteration
0 in EvaluateNode 
[25.008] Finished GPU enumeration and pre-evaluation
[25.009] Replacing sub-graphs
0 after replace 
N = 34948   n = 29518   n * RATIO = 67891
before rebuild, nn = 29518
after rebuild, n = 34751
successfully replaced 1780 cones (pos 9, zero 1771), reverted 31 cones, compromised 581 cones, pre-eval rejected 17846 cones, small cut reject 0 cones, new idx reject 9248 cones
after replace, n = 34751
[25.010] Finished eval and replace
 *** Topo sort time: 0.00 sec
[25.011] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 0.94, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34751
 before deduplicate, nNodes = 34719
 after deduplicate, nNodes = 34719, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34719
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 4164.94 MB, free = 20094.75 MB, total = 24259.69 MB
memory needed for Cut: 6.30 MB
GPU memory usage: used = 4172.94 MB, free = 20086.75 MB, total = 24259.69 MB
[27.347] Rewrite Iteration
0 in EvaluateNode 
[27.419] Finished GPU enumeration and pre-evaluation
[27.419] Replacing sub-graphs
0 after replace 
N = 33681   n = 29509   n * RATIO = 67870
before rebuild, nn = 29509
after rebuild, n = 33532
successfully replaced 1576 cones (pos 11, zero 1565), reverted 9 cones, compromised 324 cones, pre-eval rejected 17852 cones, small cut reject 0 cones, new idx reject 9716 cones
after replace, n = 33532
[27.421] Finished eval and replace
 *** Topo sort time: 0.00 sec
[27.422] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 1.01, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33532
 before deduplicate, nNodes = 33500
 after deduplicate, nNodes = 33500, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33500
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5140
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 36246
Start reordering ...
Reordered network new nObjs: 29494, original nObjs: 29499
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.016130
Max cover len: 22
Total number of covers: 21873
*** Max Level: 353
Reconstruct complete! #reconstructed covers = 21873
#nodes = 29398
Phase 2 time: 0.302387
Total time: 0.318865
balance: alg time 0.32, full time 0.32

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5054
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35967
Start reordering ...
Reordered network new nObjs: 29417, original nObjs: 29431
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5061
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35194
Start reordering ...
Reordered network new nObjs: 29414, original nObjs: 29417
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5057
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35184
Start reordering ...
Reordered network new nObjs: 29406, original nObjs: 29414
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[38.341] Rewrite Iteration
0 in EvaluateNode 
[38.414] Finished GPU enumeration and pre-evaluation
[38.415] Replacing sub-graphs
0 after replace 
N = 29456   n = 29405   n * RATIO = 67631
before rebuild, nn = 29405
after rebuild, n = 29450
successfully replaced 23 cones (pos 23, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 29343 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29450
[38.416] Finished eval and replace
 *** Topo sort time: 0.00 sec
[38.416] Rewrite Iteration Ends
real reduction: 23
** Total Time breakdown: ENUM 1.08, EVAL 0.02, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29450
 before deduplicate, nNodes = 29418
 after deduplicate, nNodes = 29412, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29412
rewrite: alg time 0.09, full time 0.09

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5061
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 35167
Start reordering ...
Reordered network new nObjs: 29379, original nObjs: 29383
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.28 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[41.772] Rewrite Iteration
0 in EvaluateNode 
[41.845] Finished GPU enumeration and pre-evaluation
[41.846] Replacing sub-graphs
0 after replace 
N = 34215   n = 29378   n * RATIO = 67569
before rebuild, nn = 29378
after rebuild, n = 33998
successfully replaced 1726 cones (pos 9, zero 1717), reverted 13 cones, compromised 438 cones, pre-eval rejected 18206 cones, small cut reject 0 cones, new idx reject 8963 cones
after replace, n = 33998
[41.847] Finished eval and replace
 *** Topo sort time: 0.00 sec
[41.848] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 1.15, EVAL 0.02, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 33998
 before deduplicate, nNodes = 33966
 after deduplicate, nNodes = 33965, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33965
rewrite: alg time 0.09, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[43.606] Rewrite Iteration
0 in EvaluateNode 
[43.677] Finished GPU enumeration and pre-evaluation
[43.678] Replacing sub-graphs
0 after replace 
N = 32214   n = 29369   n * RATIO = 67548
before rebuild, nn = 29369
after rebuild, n = 32153
successfully replaced 1204 cones (pos 12, zero 1192), reverted 2 cones, compromised 140 cones, pre-eval rejected 18057 cones, small cut reject 0 cones, new idx reject 9934 cones
after replace, n = 32153
[43.679] Finished eval and replace
 *** Topo sort time: 0.00 sec
[43.680] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 1.22, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 32153
 before deduplicate, nNodes = 32121
 after deduplicate, nNodes = 32121, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 32121
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[45.284] Rewrite Iteration
0 in EvaluateNode 
[45.356] Finished GPU enumeration and pre-evaluation
[45.356] Replacing sub-graphs
0 after replace 
N = 29382   n = 29357   n * RATIO = 67521
before rebuild, nn = 29357
after rebuild, n = 29379
successfully replaced 11 cones (pos 11, zero 0), reverted 3 cones, compromised 0 cones, pre-eval rejected 29311 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29379
[45.357] Finished eval and replace
 *** Topo sort time: 0.00 sec
[45.358] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 1.29, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29379
 before deduplicate, nNodes = 29347
 after deduplicate, nNodes = 29344, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29344
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[47.001] Rewrite Iteration
0 in EvaluateNode 
[47.072] Finished GPU enumeration and pre-evaluation
[47.073] Replacing sub-graphs
0 after replace 
N = 29346   n = 29344   n * RATIO = 67491
before rebuild, nn = 29344
after rebuild, n = 29346
successfully replaced 1 cones (pos 1, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 29311 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 29346
[47.074] Finished eval and replace
 *** Topo sort time: 0.00 sec
[47.074] Rewrite Iteration Ends
real reduction: 1
** Total Time breakdown: ENUM 1.36, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 29346
 before deduplicate, nNodes = 29314
 after deduplicate, nNodes = 29314, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 29314
rewrite: alg time 0.08, full time 0.09

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[48.731] Rewrite Iteration
0 in EvaluateNode 
[48.803] Finished GPU enumeration and pre-evaluation
[48.803] Replacing sub-graphs
0 after replace 
N = 31821   n = 29343   n * RATIO = 67488
before rebuild, nn = 29343
after rebuild, n = 31784
successfully replaced 1086 cones (pos 0, zero 1086), reverted 7 cones, compromised 83 cones, pre-eval rejected 18020 cones, small cut reject 0 cones, new idx reject 10115 cones
after replace, n = 31784
[48.804] Finished eval and replace
 *** Topo sort time: 0.00 sec
[48.805] Rewrite Iteration Ends
real reduction: 0
** Total Time breakdown: ENUM 1.43, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 31784
 before deduplicate, nNodes = 31752
 after deduplicate, nNodes = 31752, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 31752
rewrite: alg time 0.08, full time 0.09

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5058
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35703
Start reordering ...
Reordered network new nObjs: 29340, original nObjs: 29344
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5046
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35136
Start reordering ...
Reordered network new nObjs: 29340, original nObjs: 29340
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5043
Truth table computation time: 0.00 sec
ISOP + factor time: 0.03 sec
Insertion complete, idCounter = 35024
Start reordering ...
Reordered network new nObjs: 29340, original nObjs: 29340
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.27 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[55.864] Rewrite Iteration
0 in EvaluateNode 
[55.936] Finished GPU enumeration and pre-evaluation
[55.936] Replacing sub-graphs
0 after replace 
N = 34311   n = 29339   n * RATIO = 67479
before rebuild, nn = 29339
after rebuild, n = 34073
successfully replaced 1897 cones (pos 7, zero 1890), reverted 33 cones, compromised 351 cones, pre-eval rejected 18192 cones, small cut reject 0 cones, new idx reject 8834 cones
after replace, n = 34073
[55.938] Finished eval and replace
 *** Topo sort time: 0.00 sec
[55.939] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 1.49, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 34073
 before deduplicate, nNodes = 34041
 after deduplicate, nNodes = 34040, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 34040
rewrite: alg time 0.09, full time 0.09

*****Perform Balance*****
Phase 1 time: 0.017984
Max cover len: 22
Total number of covers: 24587
*** Max Level: 403
Reconstruct complete! #reconstructed covers = 24587
#nodes = 31931
Phase 2 time: 0.347131
Total time: 0.365405
balance: alg time 0.37, full time 0.37

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 32 POs
Total number of cones to be resyned: 5102
Truth table computation time: 0.00 sec
refactor: local memory overflow during ISOP + factor.
refactor: decrease K to 11 and try again.
refactor: execute with maximum cut size = 11...
Gathered 32 POs
Total number of cones to be resyned: 5187
Truth table computation time: 0.00 sec
ISOP + factor time: 0.02 sec
Insertion complete, idCounter = 40478
Start reordering ...
Reordered network new nObjs: 30755, original nObjs: 31964
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 6214.94 MB, free = 18044.75 MB, total = 24259.69 MB
memory needed for Cut: 6.57 MB
GPU memory usage: used = 6222.94 MB, free = 18036.75 MB, total = 24259.69 MB
[85.627] Rewrite Iteration
0 in EvaluateNode 
[85.715] Finished GPU enumeration and pre-evaluation
[85.716] Replacing sub-graphs
0 after replace 
N = 36096   n = 30754   n * RATIO = 70734
before rebuild, nn = 30754
after rebuild, n = 35148
successfully replaced 1185 cones (pos 1185, zero 0), reverted 482 cones, compromised 1 cones, pre-eval rejected 29054 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 35148
[85.717] Finished eval and replace
 *** Topo sort time: 0.00 sec
[85.718] Rewrite Iteration Ends
real reduction: 1186
** Total Time breakdown: ENUM 1.58, EVAL 0.03, REPLACE 0.05, REORDER 0.02, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 35148
 before deduplicate, nNodes = 35116
 after deduplicate, nNodes = 33700, elapsed time = 0.00 sec
rewrite: after rewrite, nNodes = 33700
rewrite: alg time 0.10, full time 0.11
