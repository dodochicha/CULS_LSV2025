
*****Perform Balance*****
Phase 1 time: 0.151448
Max cover len: 10
Total number of covers: 44692
*** Max Level: 4344
Reconstruct complete! #reconstructed covers = 44692
#nodes = 57225
Phase 2 time: 0.946106
Total time: 1.097784
balance: alg time 1.10, full time 1.10

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3870.00 MB, free = 20389.69 MB, total = 24259.69 MB
memory needed for Cut: 12.25 MB
GPU memory usage: used = 3884.00 MB, free = 20375.69 MB, total = 24259.69 MB
[ 6.995] Rewrite Iteration
0 in EvaluateNode 
[ 7.388] Finished GPU enumeration and pre-evaluation
[ 7.389] Replacing sub-graphs
0 after replace 
N = 82716   n = 57353   n * RATIO = 131911
before rebuild, nn = 57353
after rebuild, n = 79842
successfully replaced 15346 cones (pos 15346, zero 0), reverted 1947 cones, compromised 617 cones, pre-eval rejected 39315 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 79842
[ 7.391] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 7.393] Rewrite Iteration Ends
real reduction: 15353
** Total Time breakdown: ENUM 0.39, EVAL 0.00, REPLACE 0.00, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 79842

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41872
rewrite: alg time 0.41, full time 0.66

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8355
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 63432
Start reordering ...
Reordered network new nObjs: 41341, original nObjs: 42001
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.146106
Max cover len: 7
Total number of covers: 40429
*** Max Level: 4404
Reconstruct complete! #reconstructed covers = 40429
#nodes = 41182
Phase 2 time: 0.688538
Total time: 0.834771
balance: alg time 0.83, full time 0.84

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.82 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[ 8.770] Rewrite Iteration
0 in EvaluateNode 
[ 9.216] Finished GPU enumeration and pre-evaluation
[ 9.217] Replacing sub-graphs
0 after replace 
N = 41602   n = 41310   n * RATIO = 95012
before rebuild, nn = 41310
after rebuild, n = 41542
successfully replaced 118 cones (pos 118, zero 0), reverted 62 cones, compromised 14 cones, pre-eval rejected 40988 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41542
[ 9.218] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.219] Rewrite Iteration Ends
real reduction: 124
** Total Time breakdown: ENUM 0.83, EVAL 0.00, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41542

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41058
rewrite: alg time 0.46, full time 0.70

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.80 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[ 9.472] Rewrite Iteration
0 in EvaluateNode 
[ 9.850] Finished GPU enumeration and pre-evaluation
[ 9.851] Replacing sub-graphs
0 after replace 
N = 45673   n = 41186   n * RATIO = 94727
before rebuild, nn = 41186
after rebuild, n = 45652
successfully replaced 1485 cones (pos 28, zero 1457), reverted 13 cones, compromised 66 cones, pre-eval rejected 24795 cones, small cut reject 0 cones, new idx reject 14699 cones
after replace, n = 45652
[ 9.853] Finished eval and replace
 *** Topo sort time: 0.00 sec
[ 9.854] Rewrite Iteration Ends
real reduction: 37
** Total Time breakdown: ENUM 1.21, EVAL 0.01, REPLACE 0.01, REORDER 0.00, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 45652

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41021
rewrite: alg time 0.39, full time 0.63

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.79 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[10.104] Rewrite Iteration
0 in EvaluateNode 
[10.518] Finished GPU enumeration and pre-evaluation
[10.519] Replacing sub-graphs
0 after replace 
N = 44707   n = 41149   n * RATIO = 94642
before rebuild, nn = 41149
after rebuild, n = 44591
successfully replaced 1243 cones (pos 16, zero 1227), reverted 10 cones, compromised 46 cones, pre-eval rejected 24943 cones, small cut reject 0 cones, new idx reject 14778 cones
after replace, n = 44591
[10.520] Finished eval and replace
 *** Topo sort time: 0.00 sec
[10.521] Rewrite Iteration Ends
real reduction: 23
** Total Time breakdown: ENUM 1.62, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 44591

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40998
rewrite: alg time 0.43, full time 0.66

*****Perform Balance*****
Phase 1 time: 0.143298
Max cover len: 5
Total number of covers: 39134
*** Max Level: 4335
Reconstruct complete! #reconstructed covers = 39134
#nodes = 40997
Phase 2 time: 0.923049
Total time: 1.066453
balance: alg time 1.07, full time 1.07

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8249
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61501
Start reordering ...
Reordered network new nObjs: 41030, original nObjs: 41126
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[12.101] Rewrite Iteration
0 in EvaluateNode 
[12.487] Finished GPU enumeration and pre-evaluation
[12.488] Replacing sub-graphs
0 after replace 
N = 42580   n = 41029   n * RATIO = 94366
before rebuild, nn = 41029
after rebuild, n = 42484
successfully replaced 559 cones (pos 14, zero 545), reverted 14 cones, compromised 53 cones, pre-eval rejected 24918 cones, small cut reject 0 cones, new idx reject 15356 cones
after replace, n = 42484
[12.489] Finished eval and replace
 *** Topo sort time: 0.00 sec
[12.490] Rewrite Iteration Ends
real reduction: 17
** Total Time breakdown: ENUM 2.00, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42484

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40884
rewrite: alg time 0.40, full time 0.64

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[12.739] Rewrite Iteration
0 in EvaluateNode 
[13.125] Finished GPU enumeration and pre-evaluation
[13.127] Replacing sub-graphs
0 after replace 
N = 42666   n = 41012   n * RATIO = 94327
before rebuild, nn = 41012
after rebuild, n = 42591
successfully replaced 624 cones (pos 4, zero 620), reverted 4 cones, compromised 19 cones, pre-eval rejected 24878 cones, small cut reject 0 cones, new idx reject 15358 cones
after replace, n = 42591
[13.128] Finished eval and replace
 *** Topo sort time: 0.00 sec
[13.128] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 2.39, EVAL 0.01, REPLACE 0.01, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42591

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40880
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.144198
Max cover len: 5
Total number of covers: 37701
*** Max Level: 4364
Reconstruct complete! #reconstructed covers = 37701
#nodes = 40879
Phase 2 time: 0.984156
Total time: 1.128457
balance: alg time 1.13, full time 1.13

*****Perform Balance*****
Phase 1 time: 0.142716
Max cover len: 5
Total number of covers: 37701
*** Max Level: 4364
Reconstruct complete! #reconstructed covers = 37701
#nodes = 40879
Phase 2 time: 0.794265
Total time: 0.937083
balance: alg time 0.94, full time 0.94

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[15.445] Rewrite Iteration
0 in EvaluateNode 
[15.854] Finished GPU enumeration and pre-evaluation
[15.856] Replacing sub-graphs
0 after replace 
N = 41169   n = 41007   n * RATIO = 94316
before rebuild, nn = 41007
after rebuild, n = 41161
successfully replaced 88 cones (pos 88, zero 0), reverted 7 cones, compromised 1 cones, pre-eval rejected 40782 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41161
[15.856] Finished eval and replace
 *** Topo sort time: 0.00 sec
[15.857] Rewrite Iteration Ends
real reduction: 144
** Total Time breakdown: ENUM 2.79, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41161

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40730
rewrite: alg time 0.42, full time 0.66

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8239
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60856
Start reordering ...
Reordered network new nObjs: 40853, original nObjs: 40859
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.146427
Max cover len: 6
Total number of covers: 39519
*** Max Level: 4400
Reconstruct complete! #reconstructed covers = 39519
#nodes = 40722
Phase 2 time: 0.711120
Total time: 0.857650
balance: alg time 0.86, full time 0.86

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[17.229] Rewrite Iteration
0 in EvaluateNode 
[17.608] Finished GPU enumeration and pre-evaluation
[17.609] Replacing sub-graphs
0 after replace 
N = 40867   n = 40850   n * RATIO = 93955
before rebuild, nn = 40850
after rebuild, n = 40867
successfully replaced 17 cones (pos 17, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40704 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40867
[17.610] Finished eval and replace
 *** Topo sort time: 0.00 sec
[17.611] Rewrite Iteration Ends
real reduction: 18
** Total Time breakdown: ENUM 3.17, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40867

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40704
rewrite: alg time 0.39, full time 0.63

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[17.862] Rewrite Iteration
0 in EvaluateNode 
[18.250] Finished GPU enumeration and pre-evaluation
[18.251] Replacing sub-graphs
0 after replace 
N = 44229   n = 40832   n * RATIO = 93913
before rebuild, nn = 40832
after rebuild, n = 44163
successfully replaced 1189 cones (pos 8, zero 1181), reverted 1 cones, compromised 26 cones, pre-eval rejected 24633 cones, small cut reject 0 cones, new idx reject 14855 cones
after replace, n = 44163
[18.252] Finished eval and replace
 *** Topo sort time: 0.00 sec
[18.253] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 3.55, EVAL 0.01, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 44163

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40691
rewrite: alg time 0.40, full time 0.64

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[18.505] Rewrite Iteration
0 in EvaluateNode 
[18.894] Finished GPU enumeration and pre-evaluation
[18.895] Replacing sub-graphs
0 after replace 
N = 43431   n = 40819   n * RATIO = 93883
before rebuild, nn = 40819
after rebuild, n = 43374
successfully replaced 939 cones (pos 4, zero 935), reverted 11 cones, compromised 10 cones, pre-eval rejected 24709 cones, small cut reject 0 cones, new idx reject 15021 cones
after replace, n = 43374
[18.896] Finished eval and replace
 *** Topo sort time: 0.00 sec
[18.897] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 3.94, EVAL 0.02, REPLACE 0.02, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 43374

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40686
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.144404
Max cover len: 5
Total number of covers: 39179
*** Max Level: 4405
Reconstruct complete! #reconstructed covers = 39179
#nodes = 40686
Phase 2 time: 0.914857
Total time: 1.059367
balance: alg time 1.06, full time 1.06

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8221
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60718
Start reordering ...
Reordered network new nObjs: 40810, original nObjs: 40815
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[20.471] Rewrite Iteration
0 in EvaluateNode 
[20.852] Finished GPU enumeration and pre-evaluation
[20.854] Replacing sub-graphs
0 after replace 
N = 42510   n = 40809   n * RATIO = 93860
before rebuild, nn = 40809
after rebuild, n = 42429
successfully replaced 586 cones (pos 3, zero 583), reverted 18 cones, compromised 51 cones, pre-eval rejected 24858 cones, small cut reject 0 cones, new idx reject 15168 cones
after replace, n = 42429
[20.854] Finished eval and replace
 *** Topo sort time: 0.00 sec
[20.855] Rewrite Iteration Ends
real reduction: 3
** Total Time breakdown: ENUM 4.32, EVAL 0.02, REPLACE 0.03, REORDER 0.01, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42429

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40678
rewrite: alg time 0.39, full time 0.64

*****Perform Rewrite*****
rewrite: use zeros activated!
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[21.106] Rewrite Iteration
0 in EvaluateNode 
[21.492] Finished GPU enumeration and pre-evaluation
[21.494] Replacing sub-graphs
0 after replace 
N = 42201   n = 40806   n * RATIO = 93853
before rebuild, nn = 40806
after rebuild, n = 42137
successfully replaced 534 cones (pos 2, zero 532), reverted 19 cones, compromised 17 cones, pre-eval rejected 24754 cones, small cut reject 0 cones, new idx reject 15354 cones
after replace, n = 42137
[21.495] Finished eval and replace
 *** Topo sort time: 0.00 sec
[21.496] Rewrite Iteration Ends
real reduction: 2
** Total Time breakdown: ENUM 4.70, EVAL 0.02, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42137

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40655
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.144197
Max cover len: 5
Total number of covers: 37298
*** Max Level: 4402
Reconstruct complete! #reconstructed covers = 37298
#nodes = 40655
Phase 2 time: 0.991056
Total time: 1.135360
balance: alg time 1.14, full time 1.14

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 47979, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145676
Max cover len: 10
Total number of covers: 37221
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37221
#nodes = 47775
Phase 2 time: 0.835602
Total time: 0.981530
balance: alg time 0.98, full time 0.98

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.23 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[30.549] Rewrite Iteration
0 in EvaluateNode 
[30.945] Finished GPU enumeration and pre-evaluation
[30.947] Replacing sub-graphs
0 after replace 
N = 56237   n = 47903   n * RATIO = 110176
before rebuild, nn = 47903
after rebuild, n = 55366
successfully replaced 6471 cones (pos 6471, zero 0), reverted 789 cones, compromised 73 cones, pre-eval rejected 40432 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 55366
[30.948] Finished eval and replace
 *** Topo sort time: 0.00 sec
[30.949] Rewrite Iteration Ends
real reduction: 6484
** Total Time breakdown: ENUM 5.10, EVAL 0.02, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 55366

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41291
rewrite: alg time 0.41, full time 0.65

*****Perform Balance*****
Phase 1 time: 0.143555
Max cover len: 7
Total number of covers: 37056
*** Max Level: 4404
Reconstruct complete! #reconstructed covers = 37056
#nodes = 41286
Phase 2 time: 1.038797
Total time: 1.182486
balance: alg time 1.18, full time 1.18

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.144365
Max cover len: 5
Total number of covers: 37053
*** Max Level: 4404
Reconstruct complete! #reconstructed covers = 37053
#nodes = 41286
Phase 2 time: 0.853347
Total time: 0.997825
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.85 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[39.547] Rewrite Iteration
0 in EvaluateNode 
[39.986] Finished GPU enumeration and pre-evaluation
[39.988] Replacing sub-graphs
0 after replace 
N = 41805   n = 41414   n * RATIO = 95252
before rebuild, nn = 41414
after rebuild, n = 41770
successfully replaced 203 cones (pos 203, zero 0), reverted 35 cones, compromised 17 cones, pre-eval rejected 41030 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41770
[39.989] Finished eval and replace
 *** Topo sort time: 0.00 sec
[39.989] Rewrite Iteration Ends
real reduction: 212
** Total Time breakdown: ENUM 5.53, EVAL 0.02, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41770

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41074
rewrite: alg time 0.45, full time 0.69

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.146997
Max cover len: 5
Total number of covers: 36849
*** Max Level: 4423
Reconstruct complete! #reconstructed covers = 36849
#nodes = 41072
Phase 2 time: 1.016053
Total time: 1.163186
balance: alg time 1.16, full time 1.16

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8267
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61849
Start reordering ...
Reordered network new nObjs: 41045, original nObjs: 41201
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146173
Max cover len: 5
Total number of covers: 40637
*** Max Level: 4431
Reconstruct complete! #reconstructed covers = 40637
#nodes = 40916
Phase 2 time: 0.851177
Total time: 0.997466
balance: alg time 1.00, full time 1.00

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8212
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61245
Start reordering ...
Reordered network new nObjs: 41024, original nObjs: 41045
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144590
Max cover len: 4
Total number of covers: 36815
*** Max Level: 4434
Reconstruct complete! #reconstructed covers = 36815
#nodes = 40895
Phase 2 time: 0.814256
Total time: 0.958962
balance: alg time 0.96, full time 0.96

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8201
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61175
Start reordering ...
Reordered network new nObjs: 41020, original nObjs: 41024
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[55.602] Rewrite Iteration
0 in EvaluateNode 
[55.947] Finished GPU enumeration and pre-evaluation
[55.948] Replacing sub-graphs
0 after replace 
N = 42476   n = 41019   n * RATIO = 94343
before rebuild, nn = 41019
after rebuild, n = 42397
successfully replaced 551 cones (pos 85, zero 466), reverted 31 cones, compromised 69 cones, pre-eval rejected 24444 cones, small cut reject 0 cones, new idx reject 15794 cones
after replace, n = 42397
[55.949] Finished eval and replace
 *** Topo sort time: 0.00 sec
[55.950] Rewrite Iteration Ends
real reduction: 99
** Total Time breakdown: ENUM 5.88, EVAL 0.02, REPLACE 0.03, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42397

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40790
rewrite: alg time 0.36, full time 0.60

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[57.815] Rewrite Iteration
0 in EvaluateNode 
[58.252] Finished GPU enumeration and pre-evaluation
[58.253] Replacing sub-graphs
0 after replace 
N = 41038   n = 40918   n * RATIO = 94111
before rebuild, nn = 40918
after rebuild, n = 41020
successfully replaced 46 cones (pos 46, zero 0), reverted 20 cones, compromised 0 cones, pre-eval rejected 40721 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41020
[58.254] Finished eval and replace
 *** Topo sort time: 0.00 sec
[58.255] Rewrite Iteration Ends
real reduction: 58
** Total Time breakdown: ENUM 6.31, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41020

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40726
rewrite: alg time 0.45, full time 0.69

*****Perform Strash*****

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8183
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60893
Start reordering ...
Reordered network new nObjs: 40840, original nObjs: 40855
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8202
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60837
Start reordering ...
Reordered network new nObjs: 40840, original nObjs: 40840
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[66.401] Rewrite Iteration
0 in EvaluateNode 
[66.754] Finished GPU enumeration and pre-evaluation
[66.755] Replacing sub-graphs
0 after replace 
N = 41278   n = 40839   n * RATIO = 93929
before rebuild, nn = 40839
after rebuild, n = 41250
successfully replaced 206 cones (pos 22, zero 184), reverted 1 cones, compromised 14 cones, pre-eval rejected 24448 cones, small cut reject 0 cones, new idx reject 16040 cones
after replace, n = 41250
[66.756] Finished eval and replace
 *** Topo sort time: 0.00 sec
[66.757] Rewrite Iteration Ends
real reduction: 22
** Total Time breakdown: ENUM 6.66, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41250

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40688
rewrite: alg time 0.37, full time 0.61

*****Perform Balance*****
Phase 1 time: 0.146293
Max cover len: 8
Total number of covers: 40447
*** Max Level: 4399
Reconstruct complete! #reconstructed covers = 40447
#nodes = 40688
Phase 2 time: 0.655286
Total time: 0.801737
balance: alg time 0.80, full time 0.80

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[70.704] Rewrite Iteration
0 in EvaluateNode 
[71.143] Finished GPU enumeration and pre-evaluation
[71.144] Replacing sub-graphs
0 after replace 
N = 41016   n = 40816   n * RATIO = 93876
before rebuild, nn = 40816
after rebuild, n = 41007
successfully replaced 91 cones (pos 18, zero 73), reverted 5 cones, compromised 3 cones, pre-eval rejected 24470 cones, small cut reject 0 cones, new idx reject 16119 cones
after replace, n = 41007
[71.145] Finished eval and replace
 *** Topo sort time: 0.00 sec
[71.146] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 7.10, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41007

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40664
rewrite: alg time 0.45, full time 0.69

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.71 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[72.857] Rewrite Iteration
0 in EvaluateNode 
[73.195] Finished GPU enumeration and pre-evaluation
[73.197] Replacing sub-graphs
0 after replace 
N = 40931   n = 40792   n * RATIO = 93821
before rebuild, nn = 40792
after rebuild, n = 40922
successfully replaced 67 cones (pos 15, zero 52), reverted 0 cones, compromised 6 cones, pre-eval rejected 24445 cones, small cut reject 0 cones, new idx reject 16146 cones
after replace, n = 40922
[73.198] Finished eval and replace
 *** Topo sort time: 0.00 sec
[73.198] Rewrite Iteration Ends
real reduction: 18
** Total Time breakdown: ENUM 7.43, EVAL 0.03, REPLACE 0.04, REORDER 0.02, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.00
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40922

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40646
rewrite: alg time 0.35, full time 0.59

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60637
Start reordering ...
Reordered network new nObjs: 40766, original nObjs: 40775
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8218
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60610
Start reordering ...
Reordered network new nObjs: 40766, original nObjs: 40766
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.71 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[77.944] Rewrite Iteration
0 in EvaluateNode 
[78.309] Finished GPU enumeration and pre-evaluation
[78.310] Replacing sub-graphs
0 after replace 
N = 40785   n = 40765   n * RATIO = 93759
before rebuild, nn = 40765
after rebuild, n = 40784
successfully replaced 10 cones (pos 10, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 40625 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40784
[78.311] Finished eval and replace
 *** Topo sort time: 0.00 sec
[78.312] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 7.80, EVAL 0.03, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40784

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40591
rewrite: alg time 0.38, full time 0.62

*****Perform Strash*****

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.70 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[83.308] Rewrite Iteration
0 in EvaluateNode 
[83.664] Finished GPU enumeration and pre-evaluation
[83.665] Replacing sub-graphs
0 after replace 
N = 40893   n = 40719   n * RATIO = 93653
before rebuild, nn = 40719
after rebuild, n = 40874
successfully replaced 82 cones (pos 12, zero 70), reverted 4 cones, compromised 7 cones, pre-eval rejected 24390 cones, small cut reject 0 cones, new idx reject 16107 cones
after replace, n = 40874
[83.666] Finished eval and replace
 *** Topo sort time: 0.00 sec
[83.667] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 8.15, EVAL 0.03, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40874

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40554
rewrite: alg time 0.37, full time 0.61

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.69 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[85.240] Rewrite Iteration
0 in EvaluateNode 
[85.594] Finished GPU enumeration and pre-evaluation
[85.596] Replacing sub-graphs
0 after replace 
N = 40828   n = 40682   n * RATIO = 93568
before rebuild, nn = 40682
after rebuild, n = 40809
successfully replaced 77 cones (pos 14, zero 63), reverted 3 cones, compromised 5 cones, pre-eval rejected 24358 cones, small cut reject 0 cones, new idx reject 16110 cones
after replace, n = 40809
[85.596] Finished eval and replace
 *** Topo sort time: 0.00 sec
[85.597] Rewrite Iteration Ends
real reduction: 19
** Total Time breakdown: ENUM 8.50, EVAL 0.04, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40809

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40534
rewrite: alg time 0.37, full time 0.61

*****Perform Balance*****
Phase 1 time: 0.143675
Max cover len: 5
Total number of covers: 40314
*** Max Level: 4407
Reconstruct complete! #reconstructed covers = 40314
#nodes = 40532
Phase 2 time: 0.653888
Total time: 0.797682
balance: alg time 0.80, full time 0.80

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.69 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[89.482] Rewrite Iteration
0 in EvaluateNode 
[89.823] Finished GPU enumeration and pre-evaluation
[89.824] Replacing sub-graphs
0 after replace 
N = 40850   n = 40660   n * RATIO = 93518
before rebuild, nn = 40660
after rebuild, n = 40829
successfully replaced 97 cones (pos 12, zero 85), reverted 0 cones, compromised 6 cones, pre-eval rejected 24341 cones, small cut reject 0 cones, new idx reject 16087 cones
after replace, n = 40829
[89.825] Finished eval and replace
 *** Topo sort time: 0.00 sec
[89.826] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 8.84, EVAL 0.04, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40829

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40487
rewrite: alg time 0.35, full time 0.60

*****Perform Balance*****
Phase 1 time: 0.143482
Max cover len: 4
Total number of covers: 40264
*** Max Level: 4408
Reconstruct complete! #reconstructed covers = 40264
#nodes = 40483
Phase 2 time: 0.658705
Total time: 0.802303
balance: alg time 0.80, full time 0.80

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.144035
Max cover len: 4
Total number of covers: 40264
*** Max Level: 4408
Reconstruct complete! #reconstructed covers = 40264
#nodes = 40483
Phase 2 time: 0.846778
Total time: 0.990937
balance: alg time 0.99, full time 0.99

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.68 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[97.804] Rewrite Iteration
0 in EvaluateNode 
[98.145] Finished GPU enumeration and pre-evaluation
[98.146] Replacing sub-graphs
0 after replace 
N = 40780   n = 40611   n * RATIO = 93405
before rebuild, nn = 40611
after rebuild, n = 40766
successfully replaced 104 cones (pos 21, zero 83), reverted 2 cones, compromised 5 cones, pre-eval rejected 24287 cones, small cut reject 0 cones, new idx reject 16079 cones
after replace, n = 40766
[98.147] Finished eval and replace
 *** Topo sort time: 0.00 sec
[98.148] Rewrite Iteration Ends
real reduction: 27
** Total Time breakdown: ENUM 9.18, EVAL 0.04, REPLACE 0.05, REORDER 0.03, REDUNDANCY 0.00
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40766

*****Perform Strash*****
rewrite: after rewrite, nNodes = 39395
rewrite: alg time 0.35, full time 0.59

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.44 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[99.745] Rewrite Iteration
0 in EvaluateNode 
[100.111] Finished GPU enumeration and pre-evaluation
[100.112] Replacing sub-graphs
0 after replace 
N = 39704   n = 39523   n * RATIO = 90902
before rebuild, nn = 39523
after rebuild, n = 39678
successfully replaced 88 cones (pos 15, zero 73), reverted 2 cones, compromised 7 cones, pre-eval rejected 23637 cones, small cut reject 0 cones, new idx reject 15661 cones
after replace, n = 39678
[100.113] Finished eval and replace
 *** Topo sort time: 0.00 sec
[100.114] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 9.54, EVAL 0.04, REPLACE 0.06, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 39678

*****Perform Strash*****
rewrite: after rewrite, nNodes = 39380
rewrite: alg time 0.38, full time 0.62

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 7960
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 58890
Start reordering ...
Reordered network new nObjs: 39501, original nObjs: 39509
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 7959
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 58816
Start reordering ...
Reordered network new nObjs: 39501, original nObjs: 39501
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 48135, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10832
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 77343
Start reordering ...
Reordered network new nObjs: 48041, original nObjs: 48135
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10767
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 77031
Start reordering ...
Reordered network new nObjs: 47023, original nObjs: 48040
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.05 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[140.660] Rewrite Iteration
0 in EvaluateNode 
[140.915] Finished GPU enumeration and pre-evaluation
[140.917] Replacing sub-graphs
0 after replace 
N = 64077   n = 47022   n * RATIO = 108150
before rebuild, nn = 47022
after rebuild, n = 62512
successfully replaced 10015 cones (pos 5602, zero 4413), reverted 38 cones, compromised 1200 cones, pre-eval rejected 28760 cones, small cut reject 0 cones, new idx reject 6858 cones
after replace, n = 62512
[140.918] Finished eval and replace
 *** Topo sort time: 0.00 sec
[140.920] Rewrite Iteration Ends
real reduction: 5684
** Total Time breakdown: ENUM 9.79, EVAL 0.04, REPLACE 0.06, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.00, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 62512

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41209
rewrite: alg time 0.27, full time 0.51

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8337
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61917
Start reordering ...
Reordered network new nObjs: 41195, original nObjs: 41338
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146939
Max cover len: 11
Total number of covers: 40743
*** Max Level: 4432
Reconstruct complete! #reconstructed covers = 40743
#nodes = 41064
Phase 2 time: 0.660845
Total time: 0.808043
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.146813
Max cover len: 10
Total number of covers: 40743
*** Max Level: 4432
Reconstruct complete! #reconstructed covers = 40743
#nodes = 41064
Phase 2 time: 0.660045
Total time: 0.806986
balance: alg time 0.81, full time 0.81

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.80 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[148.722] Rewrite Iteration
0 in EvaluateNode 
[149.072] Finished GPU enumeration and pre-evaluation
[149.074] Replacing sub-graphs
0 after replace 
N = 42752   n = 41192   n * RATIO = 94741
before rebuild, nn = 41192
after rebuild, n = 42731
successfully replaced 577 cones (pos 67, zero 510), reverted 7 cones, compromised 29 cones, pre-eval rejected 24600 cones, small cut reject 0 cones, new idx reject 15847 cones
after replace, n = 42731
[149.074] Finished eval and replace
 *** Topo sort time: 0.00 sec
[149.075] Rewrite Iteration Ends
real reduction: 77
** Total Time breakdown: ENUM 10.14, EVAL 0.04, REPLACE 0.06, REORDER 0.03, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42731

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40987
rewrite: alg time 0.36, full time 0.60

*****Perform Strash*****

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8202
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61395
Start reordering ...
Reordered network new nObjs: 41054, original nObjs: 41116
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8204
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61307
Start reordering ...
Reordered network new nObjs: 41054, original nObjs: 41054
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.77 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[158.404] Rewrite Iteration
0 in EvaluateNode 
[158.845] Finished GPU enumeration and pre-evaluation
[158.846] Replacing sub-graphs
0 after replace 
N = 41117   n = 41053   n * RATIO = 94421
before rebuild, nn = 41053
after rebuild, n = 41111
successfully replaced 30 cones (pos 30, zero 0), reverted 5 cones, compromised 1 cones, pre-eval rejected 40887 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41111
[158.847] Finished eval and replace
 *** Topo sort time: 0.00 sec
[158.848] Rewrite Iteration Ends
real reduction: 40
** Total Time breakdown: ENUM 10.58, EVAL 0.04, REPLACE 0.06, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41111

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40885
rewrite: alg time 0.45, full time 0.69

*****Perform Balance*****
Phase 1 time: 0.145372
Max cover len: 11
Total number of covers: 40723
*** Max Level: 4384
Reconstruct complete! #reconstructed covers = 40723
#nodes = 40883
Phase 2 time: 0.843855
Total time: 0.989346
balance: alg time 0.99, full time 0.99

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.145331
Max cover len: 10
Total number of covers: 40722
*** Max Level: 4384
Reconstruct complete! #reconstructed covers = 40722
#nodes = 40883
Phase 2 time: 0.651222
Total time: 0.796672
balance: alg time 0.80, full time 0.80

*****Perform Balance*****
Phase 1 time: 0.145116
Max cover len: 10
Total number of covers: 40722
*** Max Level: 4384
Reconstruct complete! #reconstructed covers = 40722
#nodes = 40883
Phase 2 time: 0.843507
Total time: 0.988744
balance: alg time 0.99, full time 0.99

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8208
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61115
Start reordering ...
Reordered network new nObjs: 41007, original nObjs: 41012
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8206
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61076
Start reordering ...
Reordered network new nObjs: 41007, original nObjs: 41007
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8206
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61073
Start reordering ...
Reordered network new nObjs: 41007, original nObjs: 41007
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[173.892] Rewrite Iteration
0 in EvaluateNode 
[174.250] Finished GPU enumeration and pre-evaluation
[174.251] Replacing sub-graphs
0 after replace 
N = 41148   n = 41006   n * RATIO = 94313
before rebuild, nn = 41006
after rebuild, n = 41148
successfully replaced 69 cones (pos 69, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40808 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41148
[174.252] Finished eval and replace
 *** Topo sort time: 0.00 sec
[174.253] Rewrite Iteration Ends
real reduction: 123
** Total Time breakdown: ENUM 10.93, EVAL 0.05, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41148

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40755
rewrite: alg time 0.37, full time 0.61

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8207
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60650
Start reordering ...
Reordered network new nObjs: 40873, original nObjs: 40884
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[177.557] Rewrite Iteration
0 in EvaluateNode 
[177.931] Finished GPU enumeration and pre-evaluation
[177.932] Replacing sub-graphs
0 after replace 
N = 41344   n = 40872   n * RATIO = 94005
before rebuild, nn = 40872
after rebuild, n = 41327
successfully replaced 219 cones (pos 16, zero 203), reverted 7 cones, compromised 14 cones, pre-eval rejected 24540 cones, small cut reject 0 cones, new idx reject 15964 cones
after replace, n = 41327
[177.933] Finished eval and replace
 *** Topo sort time: 0.00 sec
[177.934] Rewrite Iteration Ends
real reduction: 18
** Total Time breakdown: ENUM 11.31, EVAL 0.05, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41327

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40726
rewrite: alg time 0.39, full time 0.63

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8212
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60685
Start reordering ...
Reordered network new nObjs: 40853, original nObjs: 40855
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[181.171] Rewrite Iteration
0 in EvaluateNode 
[181.531] Finished GPU enumeration and pre-evaluation
[181.532] Replacing sub-graphs
0 after replace 
N = 50510   n = 40852   n * RATIO = 93959
before rebuild, nn = 40852
after rebuild, n = 50485
successfully replaced 3242 cones (pos 8, zero 3234), reverted 41 cones, compromised 39 cones, pre-eval rejected 24450 cones, small cut reject 0 cones, new idx reject 12952 cones
after replace, n = 50485
[181.533] Finished eval and replace
 *** Topo sort time: 0.00 sec
[181.534] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 11.66, EVAL 0.05, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.01 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 50485

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40710
rewrite: alg time 0.37, full time 0.62

*****Perform Balance*****
Phase 1 time: 0.146430
Max cover len: 9
Total number of covers: 39661
*** Max Level: 4409
Reconstruct complete! #reconstructed covers = 39661
#nodes = 40707
Phase 2 time: 0.896318
Total time: 1.042876
balance: alg time 1.04, full time 1.04

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8199
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60647
Start reordering ...
Reordered network new nObjs: 40832, original nObjs: 40836
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8198
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60612
Start reordering ...
Reordered network new nObjs: 40832, original nObjs: 40832
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.143777
Max cover len: 6
Total number of covers: 39662
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 39662
#nodes = 40703
Phase 2 time: 0.896565
Total time: 1.040465
balance: alg time 1.04, full time 1.04

*****Perform Balance*****
Phase 1 time: 0.147778
Max cover len: 6
Total number of covers: 39662
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 39662
#nodes = 40703
Phase 2 time: 0.898001
Total time: 1.045901
balance: alg time 1.05, full time 1.05

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[193.872] Rewrite Iteration
0 in EvaluateNode 
[194.293] Finished GPU enumeration and pre-evaluation
[194.294] Replacing sub-graphs
0 after replace 
N = 43577   n = 40831   n * RATIO = 93911
before rebuild, nn = 40831
after rebuild, n = 43552
successfully replaced 954 cones (pos 13, zero 941), reverted 8 cones, compromised 14 cones, pre-eval rejected 24730 cones, small cut reject 0 cones, new idx reject 14996 cones
after replace, n = 43552
[194.295] Finished eval and replace
 *** Topo sort time: 0.00 sec
[194.296] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 12.08, EVAL 0.05, REPLACE 0.07, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 43552

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40687
rewrite: alg time 0.43, full time 0.68

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8191
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60613
Start reordering ...
Reordered network new nObjs: 40814, original nObjs: 40816
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8191
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60578
Start reordering ...
Reordered network new nObjs: 40814, original nObjs: 40814
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8191
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60578
Start reordering ...
Reordered network new nObjs: 40814, original nObjs: 40814
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145281
Max cover len: 8
Total number of covers: 36634
*** Max Level: 4407
Reconstruct complete! #reconstructed covers = 36634
#nodes = 40684
Phase 2 time: 1.009904
Total time: 1.155297
balance: alg time 1.16, full time 1.16

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[203.374] Rewrite Iteration
0 in EvaluateNode 
[203.794] Finished GPU enumeration and pre-evaluation
[203.795] Replacing sub-graphs
0 after replace 
N = 52642   n = 40812   n * RATIO = 93867
before rebuild, nn = 40812
after rebuild, n = 52616
successfully replaced 3987 cones (pos 12, zero 3975), reverted 16 cones, compromised 7 cones, pre-eval rejected 24458 cones, small cut reject 0 cones, new idx reject 12213 cones
after replace, n = 52616
[203.797] Finished eval and replace
 *** Topo sort time: 0.00 sec
[203.798] Rewrite Iteration Ends
real reduction: 14
** Total Time breakdown: ENUM 12.50, EVAL 0.05, REPLACE 0.08, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.00, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 52616

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40670
rewrite: alg time 0.43, full time 0.68

*****Perform Balance*****
Phase 1 time: 0.145776
Max cover len: 8
Total number of covers: 40431
*** Max Level: 4407
Reconstruct complete! #reconstructed covers = 40431
#nodes = 40670
Phase 2 time: 0.656003
Total time: 0.801895
balance: alg time 0.80, full time 0.80

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 1820.00 MB, free = 22439.69 MB, total = 24259.69 MB
memory needed for Cut: 12.26 MB
GPU memory usage: used = 1834.00 MB, free = 22425.69 MB, total = 24259.69 MB
[245.214] Rewrite Iteration
0 in EvaluateNode 
[245.627] Finished GPU enumeration and pre-evaluation
[245.628] Replacing sub-graphs
0 after replace 
N = 83222   n = 57375   n * RATIO = 131962
before rebuild, nn = 57375
after rebuild, n = 79704
successfully replaced 17056 cones (pos 14990, zero 2066), reverted 27 cones, compromised 1092 cones, pre-eval rejected 32301 cones, small cut reject 0 cones, new idx reject 6771 cones
after replace, n = 79704
[245.631] Finished eval and replace
 *** Topo sort time: 0.00 sec
[245.633] Rewrite Iteration Ends
real reduction: 15040
** Total Time breakdown: ENUM 12.91, EVAL 0.05, REPLACE 0.08, REORDER 0.04, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 79704

*****Perform Strash*****
rewrite: after rewrite, nNodes = 42207
rewrite: alg time 0.43, full time 0.67

*****Perform Balance*****
Phase 1 time: 0.144333
Max cover len: 11
Total number of covers: 37251
*** Max Level: 4406
Reconstruct complete! #reconstructed covers = 37251
#nodes = 42183
Phase 2 time: 1.087941
Total time: 1.232527
balance: alg time 1.23, full time 1.23

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8324
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 63864
Start reordering ...
Reordered network new nObjs: 41692, original nObjs: 42312
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146476
Max cover len: 10
Total number of covers: 40210
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 40210
#nodes = 41561
Phase 2 time: 0.719488
Total time: 0.866105
balance: alg time 0.87, full time 0.87

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8227
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 62254
Start reordering ...
Reordered network new nObjs: 41583, original nObjs: 41690
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61972
Start reordering ...
Reordered network new nObjs: 41553, original nObjs: 41583
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146733
Max cover len: 9
Total number of covers: 40244
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 40244
#nodes = 41421
Phase 2 time: 0.899998
Total time: 1.046855
balance: alg time 1.05, full time 1.05

*****Perform Balance*****
Phase 1 time: 0.145792
Max cover len: 9
Total number of covers: 40244
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 40244
#nodes = 41421
Phase 2 time: 0.708580
Total time: 0.854503
balance: alg time 0.85, full time 0.86

*****Perform Balance*****
Phase 1 time: 0.146811
Max cover len: 9
Total number of covers: 40244
*** Max Level: 4410
Reconstruct complete! #reconstructed covers = 40244
#nodes = 41420
Phase 2 time: 0.900421
Total time: 1.047347
balance: alg time 1.05, full time 1.05

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8204
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61990
Start reordering ...
Reordered network new nObjs: 41543, original nObjs: 41549
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.87 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[265.266] Rewrite Iteration
0 in EvaluateNode 
[265.674] Finished GPU enumeration and pre-evaluation
[265.676] Replacing sub-graphs
0 after replace 
N = 50790   n = 41542   n * RATIO = 95546
before rebuild, nn = 41542
after rebuild, n = 50680
successfully replaced 3176 cones (pos 385, zero 2791), reverted 74 cones, compromised 89 cones, pre-eval rejected 24976 cones, small cut reject 0 cones, new idx reject 13089 cones
after replace, n = 50680
[265.677] Finished eval and replace
 *** Topo sort time: 0.00 sec
[265.679] Rewrite Iteration Ends
real reduction: 411
** Total Time breakdown: ENUM 13.31, EVAL 0.06, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 50680

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41002
rewrite: alg time 0.42, full time 0.66

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8219
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61741
Start reordering ...
Reordered network new nObjs: 41040, original nObjs: 41131
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.77 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[270.499] Rewrite Iteration
0 in EvaluateNode 
[270.863] Finished GPU enumeration and pre-evaluation
[270.864] Replacing sub-graphs
0 after replace 
N = 41152   n = 41039   n * RATIO = 94389
before rebuild, nn = 41039
after rebuild, n = 41133
successfully replaced 59 cones (pos 59, zero 0), reverted 17 cones, compromised 0 cones, pre-eval rejected 40833 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41133
[270.865] Finished eval and replace
 *** Topo sort time: 0.00 sec
[270.866] Rewrite Iteration Ends
real reduction: 67
** Total Time breakdown: ENUM 13.68, EVAL 0.06, REPLACE 0.08, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41133

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40844
rewrite: alg time 0.38, full time 0.62

*****Perform Balance*****
Phase 1 time: 0.147705
Max cover len: 16
Total number of covers: 37742
*** Max Level: 4385
Reconstruct complete! #reconstructed covers = 37742
#nodes = 40840
Phase 2 time: 0.992756
Total time: 1.140595
balance: alg time 1.14, full time 1.14

*****Perform Strash*****

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8214
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61055
Start reordering ...
Reordered network new nObjs: 40965, original nObjs: 40969
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8213
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60998
Start reordering ...
Reordered network new nObjs: 40965, original nObjs: 40965
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[281.511] Rewrite Iteration
0 in EvaluateNode 
[281.881] Finished GPU enumeration and pre-evaluation
[281.882] Replacing sub-graphs
0 after replace 
N = 40983   n = 40964   n * RATIO = 94217
before rebuild, nn = 40964
after rebuild, n = 40983
successfully replaced 10 cones (pos 10, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40824 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40983
[281.883] Finished eval and replace
 *** Topo sort time: 0.00 sec
[281.884] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 14.04, EVAL 0.06, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40983

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40825
rewrite: alg time 0.38, full time 0.63

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[283.689] Rewrite Iteration
0 in EvaluateNode 
[284.060] Finished GPU enumeration and pre-evaluation
[284.061] Replacing sub-graphs
0 after replace 
N = 48141   n = 40953   n * RATIO = 94191
before rebuild, nn = 40953
after rebuild, n = 48113
successfully replaced 2478 cones (pos 20, zero 2458), reverted 4 cones, compromised 14 cones, pre-eval rejected 24604 cones, small cut reject 0 cones, new idx reject 13723 cones
after replace, n = 48113
[284.062] Finished eval and replace
 *** Topo sort time: 0.00 sec
[284.063] Rewrite Iteration Ends
real reduction: 20
** Total Time breakdown: ENUM 14.41, EVAL 0.06, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 48113

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40805
rewrite: alg time 0.38, full time 0.63

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[285.770] Rewrite Iteration
0 in EvaluateNode 
[286.142] Finished GPU enumeration and pre-evaluation
[286.144] Replacing sub-graphs
0 after replace 
N = 40985   n = 40933   n * RATIO = 94145
before rebuild, nn = 40933
after rebuild, n = 40983
successfully replaced 22 cones (pos 22, zero 0), reverted 8 cones, compromised 0 cones, pre-eval rejected 40772 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40983
[286.144] Finished eval and replace
 *** Topo sort time: 0.00 sec
[286.145] Rewrite Iteration Ends
real reduction: 24
** Total Time breakdown: ENUM 14.78, EVAL 0.06, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40983

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40781
rewrite: alg time 0.39, full time 0.63

*****Perform Strash*****

*****Perform Strash*****

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8209
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60809
Start reordering ...
Reordered network new nObjs: 40909, original nObjs: 40910
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60756
Start reordering ...
Reordered network new nObjs: 40908, original nObjs: 40909
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.147646
Max cover len: 16
Total number of covers: 39904
*** Max Level: 4392
Reconstruct complete! #reconstructed covers = 39904
#nodes = 40777
Phase 2 time: 0.880271
Total time: 1.028045
balance: alg time 1.03, full time 1.03

*****Perform Balance*****
Phase 1 time: 0.147321
Max cover len: 16
Total number of covers: 39902
*** Max Level: 4392
Reconstruct complete! #reconstructed covers = 39902
#nodes = 40777
Phase 2 time: 0.690683
Total time: 0.838154
balance: alg time 0.84, full time 0.84

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.148516
Max cover len: 16
Total number of covers: 39902
*** Max Level: 4392
Reconstruct complete! #reconstructed covers = 39902
#nodes = 40777
Phase 2 time: 0.691282
Total time: 0.839928
balance: alg time 0.84, full time 0.84

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60762
Start reordering ...
Reordered network new nObjs: 40905, original nObjs: 40906
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[307.814] Rewrite Iteration
0 in EvaluateNode 
[308.242] Finished GPU enumeration and pre-evaluation
[308.243] Replacing sub-graphs
0 after replace 
N = 40916   n = 40904   n * RATIO = 94079
before rebuild, nn = 40904
after rebuild, n = 40916
successfully replaced 9 cones (pos 9, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40765 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40916
[308.244] Finished eval and replace
 *** Topo sort time: 0.00 sec
[308.245] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 15.21, EVAL 0.06, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40916

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40767
rewrite: alg time 0.44, full time 0.68

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[311.655] Rewrite Iteration
0 in EvaluateNode 
[312.081] Finished GPU enumeration and pre-evaluation
[312.082] Replacing sub-graphs
0 after replace 
N = 40909   n = 40895   n * RATIO = 94058
before rebuild, nn = 40895
after rebuild, n = 40909
successfully replaced 4 cones (pos 4, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 40761 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40909
[312.083] Finished eval and replace
 *** Topo sort time: 0.00 sec
[312.084] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 15.63, EVAL 0.07, REPLACE 0.09, REORDER 0.05, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40909

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40763
rewrite: alg time 0.44, full time 0.68

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8208
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60715
Start reordering ...
Reordered network new nObjs: 40892, original nObjs: 40892
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8208
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60715
Start reordering ...
Reordered network new nObjs: 40891, original nObjs: 40892
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 47979, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.25 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[355.540] Rewrite Iteration
0 in EvaluateNode 
[355.800] Finished GPU enumeration and pre-evaluation
[355.802] Replacing sub-graphs
0 after replace 
N = 59722   n = 47978   n * RATIO = 110349
before rebuild, nn = 47978
after rebuild, n = 57283
successfully replaced 4431 cones (pos 4431, zero 0), reverted 285 cones, compromised 4279 cones, pre-eval rejected 38840 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 57283
[355.803] Finished eval and replace
 *** Topo sort time: 0.00 sec
[355.804] Rewrite Iteration Ends
real reduction: 4441
** Total Time breakdown: ENUM 15.89, EVAL 0.07, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 57283

*****Perform Strash*****
rewrite: after rewrite, nNodes = 43409
rewrite: alg time 0.27, full time 0.51

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 9.30 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[359.513] Rewrite Iteration
0 in EvaluateNode 
[359.799] Finished GPU enumeration and pre-evaluation
[359.800] Replacing sub-graphs
0 after replace 
N = 61686   n = 43537   n * RATIO = 100135
before rebuild, nn = 43537
after rebuild, n = 59819
successfully replaced 8248 cones (pos 2296, zero 5952), reverted 31 cones, compromised 110 cones, pre-eval rejected 28318 cones, small cut reject 0 cones, new idx reject 6700 cones
after replace, n = 59819
[359.802] Finished eval and replace
 *** Topo sort time: 0.00 sec
[359.803] Rewrite Iteration Ends
real reduction: 2305
** Total Time breakdown: ENUM 16.17, EVAL 0.07, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 59819

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41103
rewrite: alg time 0.30, full time 0.54

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.81 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[361.517] Rewrite Iteration
0 in EvaluateNode 
[361.866] Finished GPU enumeration and pre-evaluation
[361.867] Replacing sub-graphs
0 after replace 
N = 48509   n = 41231   n * RATIO = 94831
before rebuild, nn = 41231
after rebuild, n = 48499
successfully replaced 2525 cones (pos 162, zero 2363), reverted 22 cones, compromised 18 cones, pre-eval rejected 24552 cones, small cut reject 0 cones, new idx reject 13985 cones
after replace, n = 48499
[361.868] Finished eval and replace
 *** Topo sort time: 0.00 sec
[361.869] Rewrite Iteration Ends
real reduction: 164
** Total Time breakdown: ENUM 16.52, EVAL 0.07, REPLACE 0.10, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 48499

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40938
rewrite: alg time 0.36, full time 0.60

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8206
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61464
Start reordering ...
Reordered network new nObjs: 41010, original nObjs: 41067
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.147655
Max cover len: 16
Total number of covers: 36791
*** Max Level: 4377
Reconstruct complete! #reconstructed covers = 36791
#nodes = 40878
Phase 2 time: 0.861215
Total time: 1.009178
balance: alg time 1.01, full time 1.01

*****Perform Balance*****
Phase 1 time: 0.146815
Max cover len: 15
Total number of covers: 36789
*** Max Level: 4377
Reconstruct complete! #reconstructed covers = 36789
#nodes = 40875
Phase 2 time: 0.865188
Total time: 1.012160
balance: alg time 1.01, full time 1.01

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8222
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61315
Start reordering ...
Reordered network new nObjs: 41001, original nObjs: 41004
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146653
Max cover len: 15
Total number of covers: 40635
*** Max Level: 4381
Reconstruct complete! #reconstructed covers = 40635
#nodes = 40872
Phase 2 time: 0.658320
Total time: 0.805094
balance: alg time 0.81, full time 0.81

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8231
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61239
Start reordering ...
Reordered network new nObjs: 40999, original nObjs: 41001
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[378.964] Rewrite Iteration
0 in EvaluateNode 
[379.401] Finished GPU enumeration and pre-evaluation
[379.402] Replacing sub-graphs
0 after replace 
N = 51194   n = 40998   n * RATIO = 94295
before rebuild, nn = 40998
after rebuild, n = 51170
successfully replaced 3462 cones (pos 50, zero 3412), reverted 44 cones, compromised 11 cones, pre-eval rejected 24503 cones, small cut reject 0 cones, new idx reject 12849 cones
after replace, n = 51170
[379.404] Finished eval and replace
 *** Topo sort time: 0.00 sec
[379.405] Rewrite Iteration Ends
real reduction: 84
** Total Time breakdown: ENUM 16.95, EVAL 0.07, REPLACE 0.11, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 51170

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40786
rewrite: alg time 0.45, full time 0.69

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[381.929] Rewrite Iteration
0 in EvaluateNode 
[382.346] Finished GPU enumeration and pre-evaluation
[382.348] Replacing sub-graphs
0 after replace 
N = 42583   n = 40914   n * RATIO = 94102
before rebuild, nn = 40914
after rebuild, n = 42572
successfully replaced 616 cones (pos 22, zero 594), reverted 4 cones, compromised 6 cones, pre-eval rejected 24704 cones, small cut reject 0 cones, new idx reject 15455 cones
after replace, n = 42572
[382.349] Finished eval and replace
 *** Topo sort time: 0.00 sec
[382.350] Rewrite Iteration Ends
real reduction: 27
** Total Time breakdown: ENUM 17.36, EVAL 0.07, REPLACE 0.11, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42572

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40759
rewrite: alg time 0.43, full time 0.67

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[384.391] Rewrite Iteration
0 in EvaluateNode 
[384.823] Finished GPU enumeration and pre-evaluation
[384.824] Replacing sub-graphs
0 after replace 
N = 41410   n = 40887   n * RATIO = 94040
before rebuild, nn = 40887
after rebuild, n = 41392
successfully replaced 223 cones (pos 14, zero 209), reverted 8 cones, compromised 8 cones, pre-eval rejected 24570 cones, small cut reject 0 cones, new idx reject 15950 cones
after replace, n = 41392
[384.825] Finished eval and replace
 *** Topo sort time: 0.00 sec
[384.826] Rewrite Iteration Ends
real reduction: 16
** Total Time breakdown: ENUM 17.79, EVAL 0.08, REPLACE 0.11, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41392

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40743
rewrite: alg time 0.45, full time 0.69

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[386.767] Rewrite Iteration
0 in EvaluateNode 
[387.198] Finished GPU enumeration and pre-evaluation
[387.199] Replacing sub-graphs
0 after replace 
N = 41194   n = 40871   n * RATIO = 94003
before rebuild, nn = 40871
after rebuild, n = 41181
successfully replaced 143 cones (pos 11, zero 132), reverted 4 cones, compromised 9 cones, pre-eval rejected 24519 cones, small cut reject 0 cones, new idx reject 16067 cones
after replace, n = 41181
[387.200] Finished eval and replace
 *** Topo sort time: 0.00 sec
[387.201] Rewrite Iteration Ends
real reduction: 12
** Total Time breakdown: ENUM 18.22, EVAL 0.08, REPLACE 0.11, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41181

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40724
rewrite: alg time 0.44, full time 0.69

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60771
Start reordering ...
Reordered network new nObjs: 40847, original nObjs: 40853
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[392.746] Rewrite Iteration
0 in EvaluateNode 
[393.090] Finished GPU enumeration and pre-evaluation
[393.092] Replacing sub-graphs
0 after replace 
N = 50644   n = 40846   n * RATIO = 93945
before rebuild, nn = 40846
after rebuild, n = 50626
successfully replaced 3341 cones (pos 6, zero 3335), reverted 15 cones, compromised 8 cones, pre-eval rejected 24475 cones, small cut reject 0 cones, new idx reject 12879 cones
after replace, n = 50626
[393.093] Finished eval and replace
 *** Topo sort time: 0.00 sec
[393.094] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 18.56, EVAL 0.08, REPLACE 0.11, REORDER 0.06, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.02 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 50626

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40712
rewrite: alg time 0.36, full time 0.60

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60718
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60711
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60711
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60711
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60711
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8224
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60711
Start reordering ...
Reordered network new nObjs: 40841, original nObjs: 40841
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[407.864] Rewrite Iteration
0 in EvaluateNode 
[408.211] Finished GPU enumeration and pre-evaluation
[408.212] Replacing sub-graphs
0 after replace 
N = 42575   n = 40840   n * RATIO = 93932
before rebuild, nn = 40840
after rebuild, n = 42553
successfully replaced 629 cones (pos 13, zero 616), reverted 5 cones, compromised 6 cones, pre-eval rejected 24555 cones, small cut reject 0 cones, new idx reject 15516 cones
after replace, n = 42553
[408.213] Finished eval and replace
 *** Topo sort time: 0.00 sec
[408.214] Rewrite Iteration Ends
real reduction: 15
** Total Time breakdown: ENUM 18.91, EVAL 0.08, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42553

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40697
rewrite: alg time 0.36, full time 0.60

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8213
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60680
Start reordering ...
Reordered network new nObjs: 40822, original nObjs: 40826
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.149678
Max cover len: 17
Total number of covers: 36817
*** Max Level: 4409
Reconstruct complete! #reconstructed covers = 36817
#nodes = 40692
Phase 2 time: 0.851990
Total time: 1.001791
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[414.116] Rewrite Iteration
0 in EvaluateNode 
[414.466] Finished GPU enumeration and pre-evaluation
[414.467] Replacing sub-graphs
0 after replace 
N = 52044   n = 40820   n * RATIO = 93886
before rebuild, nn = 40820
after rebuild, n = 52029
successfully replaced 3789 cones (pos 7, zero 3782), reverted 5 cones, compromised 9 cones, pre-eval rejected 24517 cones, small cut reject 0 cones, new idx reject 12372 cones
after replace, n = 52029
[414.469] Finished eval and replace
 *** Topo sort time: 0.00 sec
[414.470] Rewrite Iteration Ends
real reduction: 7
** Total Time breakdown: ENUM 19.26, EVAL 0.08, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 52029

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40669
rewrite: alg time 0.36, full time 0.60

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8222
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60645
Start reordering ...
Reordered network new nObjs: 40795, original nObjs: 40798
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.71 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[419.795] Rewrite Iteration
0 in EvaluateNode 
[420.155] Finished GPU enumeration and pre-evaluation
[420.156] Replacing sub-graphs
0 after replace 
N = 50204   n = 40794   n * RATIO = 93826
before rebuild, nn = 40794
after rebuild, n = 50189
successfully replaced 3191 cones (pos 16, zero 3175), reverted 27 cones, compromised 20 cones, pre-eval rejected 24439 cones, small cut reject 0 cones, new idx reject 12988 cones
after replace, n = 50189
[420.157] Finished eval and replace
 *** Topo sort time: 0.00 sec
[420.159] Rewrite Iteration Ends
real reduction: 20
** Total Time breakdown: ENUM 19.61, EVAL 0.08, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.01
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 50189

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40643
rewrite: alg time 0.38, full time 0.62

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8210
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60588
Start reordering ...
Reordered network new nObjs: 40771, original nObjs: 40772
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8209
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60559
Start reordering ...
Reordered network new nObjs: 40771, original nObjs: 40771
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.148407
Max cover len: 19
Total number of covers: 39521
*** Max Level: 4403
Reconstruct complete! #reconstructed covers = 39521
#nodes = 40639
Phase 2 time: 0.899552
Total time: 1.048101
balance: alg time 1.05, full time 1.05

*****Perform Balance*****
Phase 1 time: 0.147644
Max cover len: 18
Total number of covers: 39522
*** Max Level: 4403
Reconstruct complete! #reconstructed covers = 39522
#nodes = 40639
Phase 2 time: 0.708030
Total time: 0.855814
balance: alg time 0.86, full time 0.86

*****Perform Balance*****
Phase 1 time: 0.150460
Max cover len: 10
Total number of covers: 44692
*** Max Level: 4344
Reconstruct complete! #reconstructed covers = 44692
#nodes = 57225
Phase 2 time: 0.948114
Total time: 1.098862
balance: alg time 1.10, full time 1.10

*****Perform Balance*****
Phase 1 time: 0.146659
Max cover len: 10
Total number of covers: 44691
*** Max Level: 4344
Reconstruct complete! #reconstructed covers = 44691
#nodes = 57224
Phase 2 time: 0.930043
Total time: 1.076822
balance: alg time 1.08, full time 1.08

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10728
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96017
Start reordering ...
Reordered network new nObjs: 48087, original nObjs: 57353
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3870.00 MB, free = 20389.69 MB, total = 24259.69 MB
memory needed for Cut: 10.27 MB
GPU memory usage: used = 3882.00 MB, free = 20377.69 MB, total = 24259.69 MB
[480.531] Rewrite Iteration
0 in EvaluateNode 
[480.793] Finished GPU enumeration and pre-evaluation
[480.794] Replacing sub-graphs
0 after replace 
N = 67790   n = 48086   n * RATIO = 110597
before rebuild, nn = 48086
after rebuild, n = 65259
successfully replaced 11013 cones (pos 6644, zero 4369), reverted 27 cones, compromised 2086 cones, pre-eval rejected 28609 cones, small cut reject 0 cones, new idx reject 6211 cones
after replace, n = 65259
[480.796] Finished eval and replace
 *** Topo sort time: 0.00 sec
[480.798] Rewrite Iteration Ends
real reduction: 6692
** Total Time breakdown: ENUM 19.87, EVAL 0.09, REPLACE 0.12, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 65259

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41266
rewrite: alg time 0.28, full time 0.52

*****Perform Balance*****
Phase 1 time: 0.144688
Max cover len: 10
Total number of covers: 37087
*** Max Level: 4422
Reconstruct complete! #reconstructed covers = 37087
#nodes = 41259
Phase 2 time: 0.842108
Total time: 0.986918
balance: alg time 0.99, full time 0.99

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.143247
Max cover len: 9
Total number of covers: 37085
*** Max Level: 4422
Reconstruct complete! #reconstructed covers = 37085
#nodes = 41258
Phase 2 time: 0.828796
Total time: 0.972136
balance: alg time 0.97, full time 0.97

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8344
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 62114
Start reordering ...
Reordered network new nObjs: 41204, original nObjs: 41387
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8222
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61418
Start reordering ...
Reordered network new nObjs: 41199, original nObjs: 41204
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144400
Max cover len: 9
Total number of covers: 36998
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 36998
#nodes = 41070
Phase 2 time: 0.832167
Total time: 0.976684
balance: alg time 0.98, full time 0.98

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.146249
Max cover len: 9
Total number of covers: 36998
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 36998
#nodes = 41068
Phase 2 time: 1.025519
Total time: 1.171887
balance: alg time 1.17, full time 1.17

*****Perform Balance*****
Phase 1 time: 0.145976
Max cover len: 8
Total number of covers: 36999
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 36999
#nodes = 41068
Phase 2 time: 0.835204
Total time: 0.981305
balance: alg time 0.98, full time 0.98

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.80 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[505.070] Rewrite Iteration
0 in EvaluateNode 
[505.493] Finished GPU enumeration and pre-evaluation
[505.495] Replacing sub-graphs
0 after replace 
N = 53953   n = 41196   n * RATIO = 94750
before rebuild, nn = 41196
after rebuild, n = 53931
successfully replaced 4232 cones (pos 124, zero 4108), reverted 60 cones, compromised 52 cones, pre-eval rejected 24637 cones, small cut reject 0 cones, new idx reject 12081 cones
after replace, n = 53931
[505.496] Finished eval and replace
 *** Topo sort time: 0.00 sec
[505.498] Rewrite Iteration Ends
real reduction: 143
** Total Time breakdown: ENUM 20.29, EVAL 0.09, REPLACE 0.13, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53931

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40924
rewrite: alg time 0.44, full time 0.68

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.77 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[507.396] Rewrite Iteration
0 in EvaluateNode 
[507.760] Finished GPU enumeration and pre-evaluation
[507.762] Replacing sub-graphs
0 after replace 
N = 41255   n = 41052   n * RATIO = 94419
before rebuild, nn = 41052
after rebuild, n = 41248
successfully replaced 97 cones (pos 97, zero 0), reverted 10 cones, compromised 2 cones, pre-eval rejected 40815 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41248
[507.762] Finished eval and replace
 *** Topo sort time: 0.00 sec
[507.763] Rewrite Iteration Ends
real reduction: 105
** Total Time breakdown: ENUM 20.65, EVAL 0.09, REPLACE 0.13, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41248

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40818
rewrite: alg time 0.38, full time 0.62

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[511.451] Rewrite Iteration
0 in EvaluateNode 
[511.827] Finished GPU enumeration and pre-evaluation
[511.828] Replacing sub-graphs
0 after replace 
N = 40970   n = 40946   n * RATIO = 94175
before rebuild, nn = 40946
after rebuild, n = 40968
successfully replaced 11 cones (pos 11, zero 0), reverted 2 cones, compromised 1 cones, pre-eval rejected 40804 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40968
[511.829] Finished eval and replace
 *** Topo sort time: 0.00 sec
[511.830] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 21.03, EVAL 0.09, REPLACE 0.13, REORDER 0.07, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40968

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40805
rewrite: alg time 0.39, full time 0.63

*****Perform Balance*****
Phase 1 time: 0.142144
Max cover len: 7
Total number of covers: 40574
*** Max Level: 4383
Reconstruct complete! #reconstructed covers = 40574
#nodes = 40805
Phase 2 time: 0.847995
Total time: 0.990272
balance: alg time 0.99, full time 0.99

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[516.623] Rewrite Iteration
0 in EvaluateNode 
[517.014] Finished GPU enumeration and pre-evaluation
[517.015] Replacing sub-graphs
0 after replace 
N = 41530   n = 40933   n * RATIO = 94145
before rebuild, nn = 40933
after rebuild, n = 41480
successfully replaced 225 cones (pos 16, zero 209), reverted 2 cones, compromised 32 cones, pre-eval rejected 24496 cones, small cut reject 0 cones, new idx reject 16050 cones
after replace, n = 41480
[517.017] Finished eval and replace
 *** Topo sort time: 0.00 sec
[517.018] Rewrite Iteration Ends
real reduction: 17
** Total Time breakdown: ENUM 21.42, EVAL 0.09, REPLACE 0.13, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41480

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40788
rewrite: alg time 0.40, full time 0.65

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[519.029] Rewrite Iteration
0 in EvaluateNode 
[519.415] Finished GPU enumeration and pre-evaluation
[519.416] Replacing sub-graphs
0 after replace 
N = 41232   n = 40916   n * RATIO = 94106
before rebuild, nn = 40916
after rebuild, n = 41193
successfully replaced 136 cones (pos 16, zero 120), reverted 7 cones, compromised 16 cones, pre-eval rejected 24520 cones, small cut reject 0 cones, new idx reject 16109 cones
after replace, n = 41193
[519.417] Finished eval and replace
 *** Topo sort time: 0.00 sec
[519.418] Rewrite Iteration Ends
real reduction: 18
** Total Time breakdown: ENUM 21.80, EVAL 0.09, REPLACE 0.14, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41193

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40770
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.146097
Max cover len: 9
Total number of covers: 40530
*** Max Level: 4382
Reconstruct complete! #reconstructed covers = 40530
#nodes = 40766
Phase 2 time: 0.848105
Total time: 0.994327
balance: alg time 0.99, full time 1.00

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60739
Start reordering ...
Reordered network new nObjs: 40891, original nObjs: 40895
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60682
Start reordering ...
Reordered network new nObjs: 40890, original nObjs: 40891
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145210
Max cover len: 9
Total number of covers: 40527
*** Max Level: 4382
Reconstruct complete! #reconstructed covers = 40527
#nodes = 40761
Phase 2 time: 0.654501
Total time: 0.799822
balance: alg time 0.80, full time 0.80

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60697
Start reordering ...
Reordered network new nObjs: 40890, original nObjs: 40890
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[532.467] Rewrite Iteration
0 in EvaluateNode 
[532.840] Finished GPU enumeration and pre-evaluation
[532.841] Replacing sub-graphs
0 after replace 
N = 40910   n = 40889   n * RATIO = 94044
before rebuild, nn = 40889
after rebuild, n = 40909
successfully replaced 11 cones (pos 11, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40746 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40909
[532.842] Finished eval and replace
 *** Topo sort time: 0.00 sec
[532.843] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 22.17, EVAL 0.10, REPLACE 0.14, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40909

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40747
rewrite: alg time 0.39, full time 0.63

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[534.626] Rewrite Iteration
0 in EvaluateNode 
[535.057] Finished GPU enumeration and pre-evaluation
[535.058] Replacing sub-graphs
0 after replace 
N = 49523   n = 40875   n * RATIO = 94012
before rebuild, nn = 40875
after rebuild, n = 49497
successfully replaced 2941 cones (pos 10, zero 2931), reverted 14 cones, compromised 28 cones, pre-eval rejected 24447 cones, small cut reject 0 cones, new idx reject 13316 cones
after replace, n = 49497
[535.060] Finished eval and replace
 *** Topo sort time: 0.00 sec
[535.061] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 22.60, EVAL 0.10, REPLACE 0.14, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 49497

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40732
rewrite: alg time 0.44, full time 0.69

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8219
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60689
Start reordering ...
Reordered network new nObjs: 40858, original nObjs: 40861
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[542.381] Rewrite Iteration
0 in EvaluateNode 
[542.808] Finished GPU enumeration and pre-evaluation
[542.810] Replacing sub-graphs
0 after replace 
N = 40879   n = 40857   n * RATIO = 93971
before rebuild, nn = 40857
after rebuild, n = 40878
successfully replaced 9 cones (pos 9, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 40718 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40878
[542.811] Finished eval and replace
 *** Topo sort time: 0.00 sec
[542.811] Rewrite Iteration Ends
real reduction: 10
** Total Time breakdown: ENUM 23.02, EVAL 0.10, REPLACE 0.14, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40878

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40719
rewrite: alg time 0.44, full time 0.68

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8217
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60613
Start reordering ...
Reordered network new nObjs: 40848, original nObjs: 40848
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8217
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60610
Start reordering ...
Reordered network new nObjs: 40848, original nObjs: 40848
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[547.768] Rewrite Iteration
0 in EvaluateNode 
[548.143] Finished GPU enumeration and pre-evaluation
[548.145] Replacing sub-graphs
0 after replace 
N = 47611   n = 40847   n * RATIO = 93948
before rebuild, nn = 40847
after rebuild, n = 47604
successfully replaced 2322 cones (pos 9, zero 2313), reverted 8 cones, compromised 12 cones, pre-eval rejected 24721 cones, small cut reject 0 cones, new idx reject 13656 cones
after replace, n = 47604
[548.146] Finished eval and replace
 *** Topo sort time: 0.00 sec
[548.147] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 23.39, EVAL 0.10, REPLACE 0.15, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 47604

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40710
rewrite: alg time 0.39, full time 0.63

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8218
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60640
Start reordering ...
Reordered network new nObjs: 40837, original nObjs: 40839
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60610
Start reordering ...
Reordered network new nObjs: 40837, original nObjs: 40837
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60607
Start reordering ...
Reordered network new nObjs: 40836, original nObjs: 40837
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 47979, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146616
Max cover len: 10
Total number of covers: 37221
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37221
#nodes = 47775
Phase 2 time: 0.844201
Total time: 0.991107
balance: alg time 0.99, full time 0.99

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.23 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[594.173] Rewrite Iteration
0 in EvaluateNode 
[594.574] Finished GPU enumeration and pre-evaluation
[594.575] Replacing sub-graphs
0 after replace 
N = 56237   n = 47903   n * RATIO = 110176
before rebuild, nn = 47903
after rebuild, n = 55366
successfully replaced 6471 cones (pos 6471, zero 0), reverted 789 cones, compromised 73 cones, pre-eval rejected 40432 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 55366
[594.576] Finished eval and replace
 *** Topo sort time: 0.00 sec
[594.577] Rewrite Iteration Ends
real reduction: 6484
** Total Time breakdown: ENUM 23.79, EVAL 0.10, REPLACE 0.15, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 55366

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41291
rewrite: alg time 0.41, full time 0.66

*****Perform Balance*****
Phase 1 time: 0.143695
Max cover len: 7
Total number of covers: 37056
*** Max Level: 4404
Reconstruct complete! #reconstructed covers = 37056
#nodes = 41286
Phase 2 time: 1.046990
Total time: 1.190807
balance: alg time 1.19, full time 1.19

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8316
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 62104
Start reordering ...
Reordered network new nObjs: 41280, original nObjs: 41415
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144598
Max cover len: 4
Total number of covers: 40868
*** Max Level: 4406
Reconstruct complete! #reconstructed covers = 40868
#nodes = 41151
Phase 2 time: 0.663352
Total time: 0.808073
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.144692
Max cover len: 4
Total number of covers: 40868
*** Max Level: 4406
Reconstruct complete! #reconstructed covers = 40868
#nodes = 41151
Phase 2 time: 0.857531
Total time: 1.002328
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.82 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[605.546] Rewrite Iteration
0 in EvaluateNode 
[605.996] Finished GPU enumeration and pre-evaluation
[605.997] Replacing sub-graphs
0 after replace 
N = 41489   n = 41279   n * RATIO = 94941
before rebuild, nn = 41279
after rebuild, n = 41452
successfully replaced 104 cones (pos 104, zero 0), reverted 41 cones, compromised 3 cones, pre-eval rejected 41000 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41452
[605.998] Finished eval and replace
 *** Topo sort time: 0.00 sec
[605.999] Rewrite Iteration Ends
real reduction: 121
** Total Time breakdown: ENUM 24.24, EVAL 0.10, REPLACE 0.15, REORDER 0.08, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41452

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41030
rewrite: alg time 0.46, full time 0.71

*****Perform Balance*****
Phase 1 time: 0.145462
Max cover len: 5
Total number of covers: 40816
*** Max Level: 4420
Reconstruct complete! #reconstructed covers = 40816
#nodes = 41030
Phase 2 time: 0.856067
Total time: 1.001654
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.79 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[610.254] Rewrite Iteration
0 in EvaluateNode 
[610.692] Finished GPU enumeration and pre-evaluation
[610.693] Replacing sub-graphs
0 after replace 
N = 42471   n = 41158   n * RATIO = 94663
before rebuild, nn = 41158
after rebuild, n = 42423
successfully replaced 405 cones (pos 58, zero 347), reverted 6 cones, compromised 90 cones, pre-eval rejected 24559 cones, small cut reject 0 cones, new idx reject 15969 cones
after replace, n = 42423
[610.694] Finished eval and replace
 *** Topo sort time: 0.00 sec
[610.695] Rewrite Iteration Ends
real reduction: 70
** Total Time breakdown: ENUM 24.67, EVAL 0.11, REPLACE 0.15, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42423

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40960
rewrite: alg time 0.45, full time 0.69

*****Perform Strash*****

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.78 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[616.156] Rewrite Iteration
0 in EvaluateNode 
[616.572] Finished GPU enumeration and pre-evaluation
[616.573] Replacing sub-graphs
0 after replace 
N = 41880   n = 41088   n * RATIO = 94502
before rebuild, nn = 41088
after rebuild, n = 41815
successfully replaced 309 cones (pos 118, zero 191), reverted 21 cones, compromised 32 cones, pre-eval rejected 24529 cones, small cut reject 0 cones, new idx reject 16067 cones
after replace, n = 41815
[616.574] Finished eval and replace
 *** Topo sort time: 0.00 sec
[616.575] Rewrite Iteration Ends
real reduction: 220
** Total Time breakdown: ENUM 25.09, EVAL 0.11, REPLACE 0.16, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41815

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40740
rewrite: alg time 0.43, full time 0.68

*****Perform Balance*****
Phase 1 time: 0.144977
Max cover len: 4
Total number of covers: 40516
*** Max Level: 4417
Reconstruct complete! #reconstructed covers = 40516
#nodes = 40740
Phase 2 time: 0.856120
Total time: 1.001216
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[620.975] Rewrite Iteration
0 in EvaluateNode 
[621.388] Finished GPU enumeration and pre-evaluation
[621.390] Replacing sub-graphs
0 after replace 
N = 40975   n = 40868   n * RATIO = 93996
before rebuild, nn = 40868
after rebuild, n = 40965
successfully replaced 36 cones (pos 36, zero 0), reverted 7 cones, compromised 0 cones, pre-eval rejected 40697 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40965
[621.390] Finished eval and replace
 *** Topo sort time: 0.00 sec
[621.391] Rewrite Iteration Ends
real reduction: 44
** Total Time breakdown: ENUM 25.50, EVAL 0.11, REPLACE 0.16, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40965

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40696
rewrite: alg time 0.43, full time 0.67

*****Perform Balance*****
Phase 1 time: 0.144235
Max cover len: 4
Total number of covers: 40488
*** Max Level: 4421
Reconstruct complete! #reconstructed covers = 40488
#nodes = 40696
Phase 2 time: 0.659335
Total time: 0.803686
balance: alg time 0.80, full time 0.80

*****Perform Balance*****
Phase 1 time: 0.144330
Max cover len: 4
Total number of covers: 40488
*** Max Level: 4421
Reconstruct complete! #reconstructed covers = 40488
#nodes = 40696
Phase 2 time: 0.661113
Total time: 0.805542
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.145327
Max cover len: 4
Total number of covers: 40488
*** Max Level: 4421
Reconstruct complete! #reconstructed covers = 40488
#nodes = 40696
Phase 2 time: 0.660962
Total time: 0.806409
balance: alg time 0.81, full time 0.81

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60768
Start reordering ...
Reordered network new nObjs: 40824, original nObjs: 40825
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144570
Max cover len: 4
Total number of covers: 36682
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 36682
#nodes = 40695
Phase 2 time: 0.864840
Total time: 1.009527
balance: alg time 1.01, full time 1.01

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[634.994] Rewrite Iteration
0 in EvaluateNode 
[635.371] Finished GPU enumeration and pre-evaluation
[635.372] Replacing sub-graphs
0 after replace 
N = 40862   n = 40823   n * RATIO = 93892
before rebuild, nn = 40823
after rebuild, n = 40862
successfully replaced 22 cones (pos 22, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40673 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40862
[635.373] Finished eval and replace
 *** Topo sort time: 0.00 sec
[635.373] Rewrite Iteration Ends
real reduction: 30
** Total Time breakdown: ENUM 25.87, EVAL 0.11, REPLACE 0.16, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40862

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40665
rewrite: alg time 0.39, full time 0.63

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60657
Start reordering ...
Reordered network new nObjs: 40781, original nObjs: 40794
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.144948
Max cover len: 4
Total number of covers: 40431
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40431
#nodes = 40652
Phase 2 time: 0.854200
Total time: 0.999276
balance: alg time 1.00, full time 1.00

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8217
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60601
Start reordering ...
Reordered network new nObjs: 40780, original nObjs: 40781
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60592
Start reordering ...
Reordered network new nObjs: 40780, original nObjs: 40780
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.144903
Max cover len: 4
Total number of covers: 40433
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40433
#nodes = 40651
Phase 2 time: 0.660853
Total time: 0.805887
balance: alg time 0.81, full time 0.81

*****Perform Strash*****

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.144882
Max cover len: 4
Total number of covers: 40433
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40433
#nodes = 40651
Phase 2 time: 0.662118
Total time: 0.807124
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.144301
Max cover len: 4
Total number of covers: 40433
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40433
#nodes = 40651
Phase 2 time: 0.853460
Total time: 0.997883
balance: alg time 1.00, full time 1.00

*****Perform Balance*****
Phase 1 time: 0.144540
Max cover len: 4
Total number of covers: 40433
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40433
#nodes = 40651
Phase 2 time: 0.660779
Total time: 0.805434
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.144854
Max cover len: 4
Total number of covers: 40433
*** Max Level: 4425
Reconstruct complete! #reconstructed covers = 40433
#nodes = 40651
Phase 2 time: 0.661010
Total time: 0.805985
balance: alg time 0.81, full time 0.81

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60598
Start reordering ...
Reordered network new nObjs: 40780, original nObjs: 40780
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145064
Max cover len: 4
Total number of covers: 36642
*** Max Level: 4430
Reconstruct complete! #reconstructed covers = 36642
#nodes = 40651
Phase 2 time: 0.812785
Total time: 0.957973
balance: alg time 0.96, full time 0.96

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60598
Start reordering ...
Reordered network new nObjs: 40780, original nObjs: 40780
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.71 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[668.656] Rewrite Iteration
0 in EvaluateNode 
[669.078] Finished GPU enumeration and pre-evaluation
[669.079] Replacing sub-graphs
0 after replace 
N = 40790   n = 40779   n * RATIO = 93791
before rebuild, nn = 40779
after rebuild, n = 40789
successfully replaced 8 cones (pos 8, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40642 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40789
[669.080] Finished eval and replace
 *** Topo sort time: 0.00 sec
[669.081] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 26.29, EVAL 0.11, REPLACE 0.16, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.03 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40789

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40642
rewrite: alg time 0.44, full time 0.68

*****Perform Balance*****
Phase 1 time: 0.143752
Max cover len: 4
Total number of covers: 40431
*** Max Level: 4427
Reconstruct complete! #reconstructed covers = 40431
#nodes = 40642
Phase 2 time: 0.660912
Total time: 0.804785
balance: alg time 0.81, full time 0.81

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8207
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60561
Start reordering ...
Reordered network new nObjs: 40771, original nObjs: 40771
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 47979, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10680
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 77007
Start reordering ...
Reordered network new nObjs: 47761, original nObjs: 47979
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.20 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[712.364] Rewrite Iteration
0 in EvaluateNode 
[712.625] Finished GPU enumeration and pre-evaluation
[712.626] Replacing sub-graphs
0 after replace 
N = 66851   n = 47759   n * RATIO = 109845
before rebuild, nn = 47759
after rebuild, n = 64561
successfully replaced 10654 cones (pos 6396, zero 4258), reverted 14 cones, compromised 2113 cones, pre-eval rejected 32192 cones, small cut reject 0 cones, new idx reject 2637 cones
after replace, n = 64561
[712.628] Finished eval and replace
 *** Topo sort time: 0.00 sec
[712.630] Rewrite Iteration Ends
real reduction: 6416
** Total Time breakdown: ENUM 26.55, EVAL 0.11, REPLACE 0.16, REORDER 0.09, REDUNDANCY 0.01
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 64561

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41214
rewrite: alg time 0.28, full time 0.52

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.83 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[714.299] Rewrite Iteration
0 in EvaluateNode 
[714.746] Finished GPU enumeration and pre-evaluation
[714.747] Replacing sub-graphs
0 after replace 
N = 41741   n = 41342   n * RATIO = 95086
before rebuild, nn = 41342
after rebuild, n = 41701
successfully replaced 183 cones (pos 183, zero 0), reverted 45 cones, compromised 3 cones, pre-eval rejected 40979 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41701
[714.748] Finished eval and replace
 *** Topo sort time: 0.00 sec
[714.749] Rewrite Iteration Ends
real reduction: 192
** Total Time breakdown: ENUM 27.00, EVAL 0.11, REPLACE 0.17, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41701

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41022
rewrite: alg time 0.46, full time 0.70

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.79 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[718.369] Rewrite Iteration
0 in EvaluateNode 
[718.757] Finished GPU enumeration and pre-evaluation
[718.758] Replacing sub-graphs
0 after replace 
N = 53398   n = 41150   n * RATIO = 94644
before rebuild, nn = 41150
after rebuild, n = 53374
successfully replaced 4115 cones (pos 120, zero 3995), reverted 12 cones, compromised 26 cones, pre-eval rejected 24488 cones, small cut reject 0 cones, new idx reject 12379 cones
after replace, n = 53374
[718.759] Finished eval and replace
 *** Topo sort time: 0.00 sec
[718.760] Rewrite Iteration Ends
real reduction: 120
** Total Time breakdown: ENUM 27.38, EVAL 0.12, REPLACE 0.17, REORDER 0.09, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 53374

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40902
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.145075
Max cover len: 12
Total number of covers: 40567
*** Max Level: 4358
Reconstruct complete! #reconstructed covers = 40567
#nodes = 40899
Phase 2 time: 0.655784
Total time: 0.801115
balance: alg time 0.80, full time 0.80

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8214
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61434
Start reordering ...
Reordered network new nObjs: 41011, original nObjs: 41028
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61328
Start reordering ...
Reordered network new nObjs: 41009, original nObjs: 41011
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8219
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61316
Start reordering ...
Reordered network new nObjs: 41009, original nObjs: 41009
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144075
Max cover len: 11
Total number of covers: 36770
*** Max Level: 4357
Reconstruct complete! #reconstructed covers = 36770
#nodes = 40877
Phase 2 time: 1.025561
Total time: 1.169766
balance: alg time 1.17, full time 1.17

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8227
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61271
Start reordering ...
Reordered network new nObjs: 41006, original nObjs: 41006
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144095
Max cover len: 10
Total number of covers: 40580
*** Max Level: 4358
Reconstruct complete! #reconstructed covers = 40580
#nodes = 40877
Phase 2 time: 0.654419
Total time: 0.798639
balance: alg time 0.80, full time 0.80

*****Perform Balance*****
Phase 1 time: 0.144481
Max cover len: 10
Total number of covers: 40580
*** Max Level: 4358
Reconstruct complete! #reconstructed covers = 40580
#nodes = 40877
Phase 2 time: 0.655345
Total time: 0.799945
balance: alg time 0.80, full time 0.80

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8227
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61271
Start reordering ...
Reordered network new nObjs: 41006, original nObjs: 41006
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144714
Max cover len: 10
Total number of covers: 36769
*** Max Level: 4357
Reconstruct complete! #reconstructed covers = 36769
#nodes = 40874
Phase 2 time: 1.016890
Total time: 1.161743
balance: alg time 1.16, full time 1.16

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[740.907] Rewrite Iteration
0 in EvaluateNode 
[741.314] Finished GPU enumeration and pre-evaluation
[741.315] Replacing sub-graphs
0 after replace 
N = 41128   n = 41002   n * RATIO = 94304
before rebuild, nn = 41002
after rebuild, n = 41103
successfully replaced 61 cones (pos 61, zero 0), reverted 26 cones, compromised 1 cones, pre-eval rejected 40786 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41103
[741.316] Finished eval and replace
 *** Topo sort time: 0.00 sec
[741.317] Rewrite Iteration Ends
real reduction: 74
** Total Time breakdown: ENUM 27.78, EVAL 0.12, REPLACE 0.17, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.01, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41103

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40800
rewrite: alg time 0.42, full time 0.66

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8218
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60974
Start reordering ...
Reordered network new nObjs: 40923, original nObjs: 40929
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60954
Start reordering ...
Reordered network new nObjs: 40923, original nObjs: 40923
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60951
Start reordering ...
Reordered network new nObjs: 40922, original nObjs: 40923
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60952
Start reordering ...
Reordered network new nObjs: 40922, original nObjs: 40922
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60952
Start reordering ...
Reordered network new nObjs: 40922, original nObjs: 40922
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144953
Max cover len: 10
Total number of covers: 40520
*** Max Level: 4383
Reconstruct complete! #reconstructed covers = 40520
#nodes = 40793
Phase 2 time: 0.655034
Total time: 0.800107
balance: alg time 0.80, full time 0.80

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60961
Start reordering ...
Reordered network new nObjs: 40922, original nObjs: 40922
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60952
Start reordering ...
Reordered network new nObjs: 40922, original nObjs: 40922
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144450
Max cover len: 10
Total number of covers: 40520
*** Max Level: 4383
Reconstruct complete! #reconstructed covers = 40520
#nodes = 40793
Phase 2 time: 0.655830
Total time: 0.800391
balance: alg time 0.80, full time 0.80

*****Perform Balance*****
Phase 1 time: 0.144472
Max cover len: 10
Total number of covers: 40520
*** Max Level: 4383
Reconstruct complete! #reconstructed covers = 40520
#nodes = 40793
Phase 2 time: 0.655807
Total time: 0.800391
balance: alg time 0.80, full time 0.80

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[764.980] Rewrite Iteration
0 in EvaluateNode 
[765.333] Finished GPU enumeration and pre-evaluation
[765.334] Replacing sub-graphs
0 after replace 
N = 40931   n = 40921   n * RATIO = 94118
before rebuild, nn = 40921
after rebuild, n = 40931
successfully replaced 6 cones (pos 6, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40787 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40931
[765.335] Finished eval and replace
 *** Topo sort time: 0.00 sec
[765.336] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 28.13, EVAL 0.12, REPLACE 0.17, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40931

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40787
rewrite: alg time 0.37, full time 0.60

*****Perform Balance*****
Phase 1 time: 0.144782
Max cover len: 10
Total number of covers: 40515
*** Max Level: 4386
Reconstruct complete! #reconstructed covers = 40515
#nodes = 40787
Phase 2 time: 0.657048
Total time: 0.801952
balance: alg time 0.80, full time 0.80

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8217
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60950
Start reordering ...
Reordered network new nObjs: 40912, original nObjs: 40916
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145636
Max cover len: 10
Total number of covers: 36732
*** Max Level: 4384
Reconstruct complete! #reconstructed covers = 36732
#nodes = 40783
Phase 2 time: 0.844999
Total time: 0.990776
balance: alg time 0.99, full time 0.99

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60939
Start reordering ...
Reordered network new nObjs: 40911, original nObjs: 40912
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[775.225] Rewrite Iteration
0 in EvaluateNode 
[775.661] Finished GPU enumeration and pre-evaluation
[775.662] Replacing sub-graphs
0 after replace 
N = 41393   n = 40910   n * RATIO = 94093
before rebuild, nn = 40910
after rebuild, n = 41382
successfully replaced 239 cones (pos 8, zero 231), reverted 12 cones, compromised 12 cones, pre-eval rejected 24502 cones, small cut reject 0 cones, new idx reject 16016 cones
after replace, n = 41382
[775.663] Finished eval and replace
 *** Topo sort time: 0.00 sec
[775.664] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 28.57, EVAL 0.12, REPLACE 0.18, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41382

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40774
rewrite: alg time 0.45, full time 0.69

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8211
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60923
Start reordering ...
Reordered network new nObjs: 40903, original nObjs: 40903
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60848
Start reordering ...
Reordered network new nObjs: 40903, original nObjs: 40903
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145637
Max cover len: 12
Total number of covers: 40507
*** Max Level: 4386
Reconstruct complete! #reconstructed covers = 40507
#nodes = 40771
Phase 2 time: 0.850519
Total time: 0.996287
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[783.403] Rewrite Iteration
0 in EvaluateNode 
[783.772] Finished GPU enumeration and pre-evaluation
[783.773] Replacing sub-graphs
0 after replace 
N = 41139   n = 40899   n * RATIO = 94067
before rebuild, nn = 40899
after rebuild, n = 41134
successfully replaced 146 cones (pos 11, zero 135), reverted 0 cones, compromised 2 cones, pre-eval rejected 24521 cones, small cut reject 0 cones, new idx reject 16100 cones
after replace, n = 41134
[783.774] Finished eval and replace
 *** Topo sort time: 0.00 sec
[783.775] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 28.93, EVAL 0.12, REPLACE 0.18, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41134

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40758
rewrite: alg time 0.38, full time 0.62

*****Perform Balance*****
Phase 1 time: 0.149702
Max cover len: 10
Total number of covers: 44692
*** Max Level: 4344
Reconstruct complete! #reconstructed covers = 44692
#nodes = 57225
Phase 2 time: 0.963936
Total time: 1.113911
balance: alg time 1.11, full time 1.11

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10729
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96020
Start reordering ...
Reordered network new nObjs: 48014, original nObjs: 57354
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10681
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 76989
Start reordering ...
Reordered network new nObjs: 47794, original nObjs: 48014
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144709
Max cover len: 8
Total number of covers: 37102
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37102
#nodes = 47614
Phase 2 time: 1.018009
Total time: 1.162842
balance: alg time 1.16, full time 1.17

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.20 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[831.181] Rewrite Iteration
0 in EvaluateNode 
[831.480] Finished GPU enumeration and pre-evaluation
[831.481] Replacing sub-graphs
0 after replace 
N = 56288   n = 47742   n * RATIO = 109806
before rebuild, nn = 47742
after rebuild, n = 55532
successfully replaced 7374 cones (pos 6350, zero 1024), reverted 1 cones, compromised 122 cones, pre-eval rejected 28485 cones, small cut reject 0 cones, new idx reject 11626 cones
after replace, n = 55532
[831.483] Finished eval and replace
 *** Topo sort time: 0.00 sec
[831.484] Rewrite Iteration Ends
real reduction: 6375
** Total Time breakdown: ENUM 29.23, EVAL 0.12, REPLACE 0.18, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 55532

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41237
rewrite: alg time 0.31, full time 0.56

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8260
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61894
Start reordering ...
Reordered network new nObjs: 41281, original nObjs: 41366
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144259
Max cover len: 8
Total number of covers: 40886
*** Max Level: 4409
Reconstruct complete! #reconstructed covers = 40886
#nodes = 41150
Phase 2 time: 0.660879
Total time: 0.805253
balance: alg time 0.81, full time 0.81

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8227
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61634
Start reordering ...
Reordered network new nObjs: 41249, original nObjs: 41279
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.143797
Max cover len: 7
Total number of covers: 37049
*** Max Level: 4409
Reconstruct complete! #reconstructed covers = 37049
#nodes = 41120
Phase 2 time: 1.032193
Total time: 1.176122
balance: alg time 1.18, full time 1.18

*****Perform Balance*****
Phase 1 time: 0.143475
Max cover len: 7
Total number of covers: 37049
*** Max Level: 4409
Reconstruct complete! #reconstructed covers = 37049
#nodes = 41120
Phase 2 time: 1.034684
Total time: 1.178273
balance: alg time 1.18, full time 1.18

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8226
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61579
Start reordering ...
Reordered network new nObjs: 41237, original nObjs: 41249
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.143771
Max cover len: 7
Total number of covers: 40903
*** Max Level: 4415
Reconstruct complete! #reconstructed covers = 40903
#nodes = 41108
Phase 2 time: 0.852426
Total time: 0.996326
balance: alg time 1.00, full time 1.00

*****Perform Balance*****
Phase 1 time: 0.143736
Max cover len: 7
Total number of covers: 40903
*** Max Level: 4415
Reconstruct complete! #reconstructed covers = 40903
#nodes = 41108
Phase 2 time: 0.866339
Total time: 1.010195
balance: alg time 1.01, full time 1.01

*****Perform Balance*****
Phase 1 time: 0.143507
Max cover len: 7
Total number of covers: 40903
*** Max Level: 4415
Reconstruct complete! #reconstructed covers = 40903
#nodes = 41108
Phase 2 time: 0.850484
Total time: 0.994116
balance: alg time 0.99, full time 0.99

*****Perform Balance*****
Phase 1 time: 0.143512
Max cover len: 7
Total number of covers: 40903
*** Max Level: 4415
Reconstruct complete! #reconstructed covers = 40903
#nodes = 41108
Phase 2 time: 0.659007
Total time: 0.802643
balance: alg time 0.80, full time 0.80

*****Perform Balance*****
Phase 1 time: 0.143257
Max cover len: 7
Total number of covers: 40903
*** Max Level: 4415
Reconstruct complete! #reconstructed covers = 40903
#nodes = 41108
Phase 2 time: 0.659564
Total time: 0.802951
balance: alg time 0.80, full time 0.80

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8220
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61515
Start reordering ...
Reordered network new nObjs: 41237, original nObjs: 41237
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.81 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[869.389] Rewrite Iteration
0 in EvaluateNode 
[869.756] Finished GPU enumeration and pre-evaluation
[869.758] Replacing sub-graphs
0 after replace 
N = 51486   n = 41236   n * RATIO = 94842
before rebuild, nn = 41236
after rebuild, n = 51380
successfully replaced 3403 cones (pos 142, zero 3261), reverted 75 cones, compromised 48 cones, pre-eval rejected 24626 cones, small cut reject 0 cones, new idx reject 12949 cones
after replace, n = 51380
[869.759] Finished eval and replace
 *** Topo sort time: 0.00 sec
[869.760] Rewrite Iteration Ends
real reduction: 164
** Total Time breakdown: ENUM 29.59, EVAL 0.13, REPLACE 0.18, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 51380

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40944
rewrite: alg time 0.38, full time 0.62

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8214
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61647
Start reordering ...
Reordered network new nObjs: 40981, original nObjs: 41073
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8196
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61220
Start reordering ...
Reordered network new nObjs: 40979, original nObjs: 40981
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8205
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61155
Start reordering ...
Reordered network new nObjs: 40979, original nObjs: 40979
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[878.108] Rewrite Iteration
0 in EvaluateNode 
[878.551] Finished GPU enumeration and pre-evaluation
[878.552] Replacing sub-graphs
0 after replace 
N = 49211   n = 40978   n * RATIO = 94249
before rebuild, nn = 40978
after rebuild, n = 49159
successfully replaced 2804 cones (pos 64, zero 2740), reverted 43 cones, compromised 45 cones, pre-eval rejected 24739 cones, small cut reject 0 cones, new idx reject 13217 cones
after replace, n = 49159
[878.554] Finished eval and replace
 *** Topo sort time: 0.00 sec
[878.555] Rewrite Iteration Ends
real reduction: 71
** Total Time breakdown: ENUM 30.03, EVAL 0.13, REPLACE 0.19, REORDER 0.10, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 49159

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40775
rewrite: alg time 0.46, full time 0.70

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[880.259] Rewrite Iteration
0 in EvaluateNode 
[880.702] Finished GPU enumeration and pre-evaluation
[880.704] Replacing sub-graphs
0 after replace 
N = 42325   n = 40903   n * RATIO = 94076
before rebuild, nn = 40903
after rebuild, n = 42286
successfully replaced 549 cones (pos 27, zero 522), reverted 9 cones, compromised 7 cones, pre-eval rejected 24660 cones, small cut reject 0 cones, new idx reject 15549 cones
after replace, n = 42286
[880.705] Finished eval and replace
 *** Topo sort time: 0.00 sec
[880.706] Rewrite Iteration Ends
real reduction: 33
** Total Time breakdown: ENUM 30.48, EVAL 0.13, REPLACE 0.19, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42286

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40741
rewrite: alg time 0.46, full time 0.69

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60869
Start reordering ...
Reordered network new nObjs: 40856, original nObjs: 40870
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60812
Start reordering ...
Reordered network new nObjs: 40856, original nObjs: 40856
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8215
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60812
Start reordering ...
Reordered network new nObjs: 40856, original nObjs: 40856
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145607
Max cover len: 13
Total number of covers: 36779
*** Max Level: 4393
Reconstruct complete! #reconstructed covers = 36779
#nodes = 40727
Phase 2 time: 0.997001
Total time: 1.142729
balance: alg time 1.14, full time 1.15

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[890.013] Rewrite Iteration
0 in EvaluateNode 
[890.400] Finished GPU enumeration and pre-evaluation
[890.402] Replacing sub-graphs
0 after replace 
N = 40860   n = 40855   n * RATIO = 93966
before rebuild, nn = 40855
after rebuild, n = 40860
successfully replaced 5 cones (pos 5, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40721 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40860
[890.402] Finished eval and replace
 *** Topo sort time: 0.00 sec
[890.403] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 30.86, EVAL 0.13, REPLACE 0.19, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40860

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40686
rewrite: alg time 0.40, full time 0.64

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[892.114] Rewrite Iteration
0 in EvaluateNode 
[892.502] Finished GPU enumeration and pre-evaluation
[892.503] Replacing sub-graphs
0 after replace 
N = 40816   n = 40814   n * RATIO = 93872
before rebuild, nn = 40814
after rebuild, n = 40816
successfully replaced 5 cones (pos 5, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40678 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40816
[892.504] Finished eval and replace
 *** Topo sort time: 0.00 sec
[892.505] Rewrite Iteration Ends
real reduction: 6
** Total Time breakdown: ENUM 31.25, EVAL 0.13, REPLACE 0.19, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40816

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40605
rewrite: alg time 0.40, full time 0.64

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.70 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[894.283] Rewrite Iteration
0 in EvaluateNode 
[894.668] Finished GPU enumeration and pre-evaluation
[894.670] Replacing sub-graphs
0 after replace 
N = 40738   n = 40733   n * RATIO = 93685
before rebuild, nn = 40733
after rebuild, n = 40737
successfully replaced 9 cones (pos 9, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40592 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40737
[894.670] Finished eval and replace
 *** Topo sort time: 0.00 sec
[894.671] Rewrite Iteration Ends
real reduction: 11
** Total Time breakdown: ENUM 31.63, EVAL 0.13, REPLACE 0.19, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40737

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40544
rewrite: alg time 0.40, full time 0.64

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8175
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60529
Start reordering ...
Reordered network new nObjs: 40673, original nObjs: 40673
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.69 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[897.931] Rewrite Iteration
0 in EvaluateNode 
[898.275] Finished GPU enumeration and pre-evaluation
[898.276] Replacing sub-graphs
0 after replace 
N = 41449   n = 40672   n * RATIO = 93545
before rebuild, nn = 40672
after rebuild, n = 41422
successfully replaced 327 cones (pos 14, zero 313), reverted 13 cones, compromised 6 cones, pre-eval rejected 24417 cones, small cut reject 0 cones, new idx reject 15778 cones
after replace, n = 41422
[898.277] Finished eval and replace
 *** Topo sort time: 0.00 sec
[898.278] Rewrite Iteration Ends
real reduction: 18
** Total Time breakdown: ENUM 31.97, EVAL 0.14, REPLACE 0.20, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41422

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40396
rewrite: alg time 0.36, full time 0.60

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8129
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60345
Start reordering ...
Reordered network new nObjs: 40522, original nObjs: 40525
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8129
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60333
Start reordering ...
Reordered network new nObjs: 40522, original nObjs: 40522
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 1820.00 MB, free = 22439.69 MB, total = 24259.69 MB
memory needed for Cut: 12.26 MB
GPU memory usage: used = 1834.00 MB, free = 22425.69 MB, total = 24259.69 MB
[939.418] Rewrite Iteration
0 in EvaluateNode 
[939.822] Finished GPU enumeration and pre-evaluation
[939.824] Replacing sub-graphs
0 after replace 
N = 83222   n = 57375   n * RATIO = 131962
before rebuild, nn = 57375
after rebuild, n = 79704
successfully replaced 17056 cones (pos 14990, zero 2066), reverted 27 cones, compromised 1092 cones, pre-eval rejected 32301 cones, small cut reject 0 cones, new idx reject 6771 cones
after replace, n = 79704
[939.826] Finished eval and replace
 *** Topo sort time: 0.00 sec
[939.829] Rewrite Iteration Ends
real reduction: 15040
** Total Time breakdown: ENUM 32.37, EVAL 0.14, REPLACE 0.20, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 79704

*****Perform Strash*****
rewrite: after rewrite, nNodes = 42207
rewrite: alg time 0.42, full time 0.66

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8317
Truth table computation time: 0.00 sec
ISOP + factor time: 0.01 sec
Insertion complete, idCounter = 63885
Start reordering ...
Reordered network new nObjs: 41523, original nObjs: 42336
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8244
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61883
Start reordering ...
Reordered network new nObjs: 41509, original nObjs: 41523
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.87 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[944.359] Rewrite Iteration
0 in EvaluateNode 
[944.740] Finished GPU enumeration and pre-evaluation
[944.741] Replacing sub-graphs
0 after replace 
N = 42167   n = 41508   n * RATIO = 95468
before rebuild, nn = 41508
after rebuild, n = 42067
successfully replaced 288 cones (pos 288, zero 0), reverted 103 cones, compromised 2 cones, pre-eval rejected 40978 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 42067
[944.742] Finished eval and replace
 *** Topo sort time: 0.00 sec
[944.743] Rewrite Iteration Ends
real reduction: 301
** Total Time breakdown: ENUM 32.75, EVAL 0.14, REPLACE 0.20, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.01, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42067

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41079
rewrite: alg time 0.40, full time 0.64

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.80 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[948.143] Rewrite Iteration
0 in EvaluateNode 
[948.578] Finished GPU enumeration and pre-evaluation
[948.579] Replacing sub-graphs
0 after replace 
N = 41485   n = 41207   n * RATIO = 94776
before rebuild, nn = 41207
after rebuild, n = 41478
successfully replaced 138 cones (pos 138, zero 0), reverted 11 cones, compromised 0 cones, pre-eval rejected 40930 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41478
[948.580] Finished eval and replace
 *** Topo sort time: 0.00 sec
[948.581] Rewrite Iteration Ends
real reduction: 139
** Total Time breakdown: ENUM 33.18, EVAL 0.14, REPLACE 0.20, REORDER 0.11, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41478

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40940
rewrite: alg time 0.45, full time 0.69

*****Perform Balance*****
Phase 1 time: 0.147072
Max cover len: 12
Total number of covers: 37613
*** Max Level: 4419
Reconstruct complete! #reconstructed covers = 37613
#nodes = 40938
Phase 2 time: 1.001506
Total time: 1.148866
balance: alg time 1.15, full time 1.15

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.77 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[953.165] Rewrite Iteration
0 in EvaluateNode 
[953.555] Finished GPU enumeration and pre-evaluation
[953.556] Replacing sub-graphs
0 after replace 
N = 41097   n = 41066   n * RATIO = 94451
before rebuild, nn = 41066
after rebuild, n = 41096
successfully replaced 13 cones (pos 13, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 40923 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41096
[953.557] Finished eval and replace
 *** Topo sort time: 0.00 sec
[953.558] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 33.57, EVAL 0.14, REPLACE 0.21, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41096

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40925
rewrite: alg time 0.40, full time 0.64

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8185
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61219
Start reordering ...
Reordered network new nObjs: 41052, original nObjs: 41054
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146842
Max cover len: 11
Total number of covers: 39973
*** Max Level: 4419
Reconstruct complete! #reconstructed covers = 39973
#nodes = 40923
Phase 2 time: 0.896742
Total time: 1.043706
balance: alg time 1.04, full time 1.05

*****Perform Balance*****
Phase 1 time: 0.146036
Max cover len: 11
Total number of covers: 39973
*** Max Level: 4419
Reconstruct complete! #reconstructed covers = 39973
#nodes = 40923
Phase 2 time: 0.702651
Total time: 0.848805
balance: alg time 0.85, full time 0.85

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8185
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61213
Start reordering ...
Reordered network new nObjs: 41052, original nObjs: 41052
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.146464
Max cover len: 11
Total number of covers: 37610
*** Max Level: 4419
Reconstruct complete! #reconstructed covers = 37610
#nodes = 40923
Phase 2 time: 1.002178
Total time: 1.148758
balance: alg time 1.15, full time 1.15

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8185
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61213
Start reordering ...
Reordered network new nObjs: 41047, original nObjs: 41052
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.77 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[969.566] Rewrite Iteration
0 in EvaluateNode 
[969.932] Finished GPU enumeration and pre-evaluation
[969.933] Replacing sub-graphs
0 after replace 
N = 44203   n = 41046   n * RATIO = 94405
before rebuild, nn = 41046
after rebuild, n = 44153
successfully replaced 1107 cones (pos 54, zero 1053), reverted 35 cones, compromised 75 cones, pre-eval rejected 24931 cones, small cut reject 0 cones, new idx reject 14768 cones
after replace, n = 44153
[969.934] Finished eval and replace
 *** Topo sort time: 0.00 sec
[969.936] Rewrite Iteration Ends
real reduction: 57
** Total Time breakdown: ENUM 33.93, EVAL 0.14, REPLACE 0.21, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 44153

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40861
rewrite: alg time 0.38, full time 0.62

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8166
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61140
Start reordering ...
Reordered network new nObjs: 40987, original nObjs: 40990
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.147006
Max cover len: 15
Total number of covers: 36912
*** Max Level: 4381
Reconstruct complete! #reconstructed covers = 36912
#nodes = 40850
Phase 2 time: 0.841189
Total time: 0.988324
balance: alg time 0.99, full time 0.99

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[977.232] Rewrite Iteration
0 in EvaluateNode 
[977.620] Finished GPU enumeration and pre-evaluation
[977.622] Replacing sub-graphs
0 after replace 
N = 41024   n = 40978   n * RATIO = 94249
before rebuild, nn = 40978
after rebuild, n = 41020
successfully replaced 26 cones (pos 26, zero 0), reverted 3 cones, compromised 1 cones, pre-eval rejected 40819 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 41020
[977.622] Finished eval and replace
 *** Topo sort time: 0.00 sec
[977.623] Rewrite Iteration Ends
real reduction: 36
** Total Time breakdown: ENUM 34.32, EVAL 0.15, REPLACE 0.21, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.02
** CPU sequential time: 0.04 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41020

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40814
rewrite: alg time 0.40, full time 0.64

*****Perform Balance*****
Phase 1 time: 0.146350
Max cover len: 13
Total number of covers: 36883
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 36883
#nodes = 40813
Phase 2 time: 1.030710
Total time: 1.177179
balance: alg time 1.18, full time 1.18

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8182
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60918
Start reordering ...
Reordered network new nObjs: 40938, original nObjs: 40942
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.75 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[983.668] Rewrite Iteration
0 in EvaluateNode 
[984.019] Finished GPU enumeration and pre-evaluation
[984.020] Replacing sub-graphs
0 after replace 
N = 40949   n = 40937   n * RATIO = 94155
before rebuild, nn = 40937
after rebuild, n = 40949
successfully replaced 9 cones (pos 9, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40799 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40949
[984.021] Finished eval and replace
 *** Topo sort time: 0.00 sec
[984.022] Rewrite Iteration Ends
real reduction: 9
** Total Time breakdown: ENUM 34.67, EVAL 0.15, REPLACE 0.21, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40949

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40800
rewrite: alg time 0.36, full time 0.60

*****Perform Balance*****
Phase 1 time: 0.147324
Max cover len: 12
Total number of covers: 40453
*** Max Level: 4391
Reconstruct complete! #reconstructed covers = 40453
#nodes = 40799
Phase 2 time: 0.666646
Total time: 0.814097
balance: alg time 0.81, full time 0.81

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[988.243] Rewrite Iteration
0 in EvaluateNode 
[988.591] Finished GPU enumeration and pre-evaluation
[988.592] Replacing sub-graphs
0 after replace 
N = 40939   n = 40927   n * RATIO = 94132
before rebuild, nn = 40927
after rebuild, n = 40937
successfully replaced 8 cones (pos 8, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40789 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40937
[988.593] Finished eval and replace
 *** Topo sort time: 0.00 sec
[988.594] Rewrite Iteration Ends
real reduction: 8
** Total Time breakdown: ENUM 35.01, EVAL 0.15, REPLACE 0.21, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40937

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40790
rewrite: alg time 0.36, full time 0.60

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[990.331] Rewrite Iteration
0 in EvaluateNode 
[990.679] Finished GPU enumeration and pre-evaluation
[990.681] Replacing sub-graphs
0 after replace 
N = 40921   n = 40918   n * RATIO = 94111
before rebuild, nn = 40918
after rebuild, n = 40921
successfully replaced 4 cones (pos 4, zero 0), reverted 0 cones, compromised 0 cones, pre-eval rejected 40784 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40921
[990.681] Finished eval and replace
 *** Topo sort time: 0.00 sec
[990.682] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 35.36, EVAL 0.15, REPLACE 0.22, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40921

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40786
rewrite: alg time 0.36, full time 0.60

*****Perform Balance*****
Phase 1 time: 0.146717
Max cover len: 13
Total number of covers: 40436
*** Max Level: 4390
Reconstruct complete! #reconstructed covers = 40436
#nodes = 40786
Phase 2 time: 0.858384
Total time: 1.005222
balance: alg time 1.01, full time 1.01

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8182
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60843
Start reordering ...
Reordered network new nObjs: 40911, original nObjs: 40915
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146935
Max cover len: 13
Total number of covers: 36846
*** Max Level: 4388
Reconstruct complete! #reconstructed covers = 36846
#nodes = 40774
Phase 2 time: 0.810256
Total time: 0.957324
balance: alg time 0.96, full time 0.96

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8184
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60801
Start reordering ...
Reordered network new nObjs: 40903, original nObjs: 40903
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146210
Max cover len: 12
Total number of covers: 40424
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40424
#nodes = 40773
Phase 2 time: 0.857004
Total time: 1.003328
balance: alg time 1.00, full time 1.01

*****Perform Balance*****
Phase 1 time: 0.146232
Max cover len: 11
Total number of covers: 40424
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40424
#nodes = 40773
Phase 2 time: 0.858325
Total time: 1.004682
balance: alg time 1.00, full time 1.01

*****Perform Balance*****
Phase 1 time: 0.145038
Max cover len: 11
Total number of covers: 40424
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40424
#nodes = 40773
Phase 2 time: 0.663512
Total time: 0.808711
balance: alg time 0.81, full time 0.81

*****Perform Balance*****
Phase 1 time: 0.145543
Max cover len: 11
Total number of covers: 40424
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40424
#nodes = 40773
Phase 2 time: 0.857571
Total time: 1.003230
balance: alg time 1.00, full time 1.00

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1010.507] Rewrite Iteration
0 in EvaluateNode 
[1010.861] Finished GPU enumeration and pre-evaluation
[1010.862] Replacing sub-graphs
0 after replace 
N = 40904   n = 40901   n * RATIO = 94072
before rebuild, nn = 40901
after rebuild, n = 40904
successfully replaced 3 cones (pos 3, zero 0), reverted 1 cones, compromised 0 cones, pre-eval rejected 40768 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40904
[1010.863] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1010.864] Rewrite Iteration Ends
real reduction: 4
** Total Time breakdown: ENUM 35.71, EVAL 0.15, REPLACE 0.22, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40904

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40766
rewrite: alg time 0.37, full time 0.61

*****Perform Balance*****
Phase 1 time: 0.144786
Max cover len: 11
Total number of covers: 40418
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40418
#nodes = 40766
Phase 2 time: 0.855621
Total time: 1.000527
balance: alg time 1.00, full time 1.00

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8182
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60784
Start reordering ...
Reordered network new nObjs: 40894, original nObjs: 40895
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.144883
Max cover len: 11
Total number of covers: 36841
*** Max Level: 4388
Reconstruct complete! #reconstructed covers = 36841
#nodes = 40765
Phase 2 time: 0.810992
Total time: 0.955990
balance: alg time 0.96, full time 0.96

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8183
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60783
Start reordering ...
Reordered network new nObjs: 40894, original nObjs: 40894
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8183
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60770
Start reordering ...
Reordered network new nObjs: 40893, original nObjs: 40894
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10731
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 96047
Start reordering ...
Reordered network new nObjs: 47979, original nObjs: 57376
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10680
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 77007
Start reordering ...
Reordered network new nObjs: 47765, original nObjs: 47979
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146882
Max cover len: 10
Total number of covers: 37169
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37169
#nodes = 47565
Phase 2 time: 0.838105
Total time: 0.985256
balance: alg time 0.99, full time 0.99

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 10561
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 76203
Start reordering ...
Reordered network new nObjs: 47645, original nObjs: 47694
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.145650
Max cover len: 9
Total number of covers: 37102
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37102
#nodes = 47508
Phase 2 time: 1.019743
Total time: 1.165516
balance: alg time 1.17, full time 1.17

*****Perform Balance*****
Phase 1 time: 0.145329
Max cover len: 8
Total number of covers: 37100
*** Max Level: 4370
Reconstruct complete! #reconstructed covers = 37100
#nodes = 47504
Phase 2 time: 1.021891
Total time: 1.167355
balance: alg time 1.17, full time 1.17

*****Perform Balance*****
Phase 1 time: 0.144550
Max cover len: 7
Total number of covers: 37099
*** Max Level: 4369
Reconstruct complete! #reconstructed covers = 37099
#nodes = 47504
Phase 2 time: 1.025390
Total time: 1.170084
balance: alg time 1.17, full time 1.17

*****Perform Strash*****

*****Perform Balance*****
Phase 1 time: 0.143456
Max cover len: 7
Total number of covers: 37099
*** Max Level: 4369
Reconstruct complete! #reconstructed covers = 37099
#nodes = 47502
Phase 2 time: 1.020458
Total time: 1.164041
balance: alg time 1.16, full time 1.16

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3868.00 MB, free = 20391.69 MB, total = 24259.69 MB
memory needed for Cut: 10.18 MB
GPU memory usage: used = 3880.00 MB, free = 20379.69 MB, total = 24259.69 MB
[1076.959] Rewrite Iteration
0 in EvaluateNode 
[1077.365] Finished GPU enumeration and pre-evaluation
[1077.366] Replacing sub-graphs
0 after replace 
N = 55263   n = 47630   n * RATIO = 109548
before rebuild, nn = 47630
after rebuild, n = 54618
successfully replaced 6310 cones (pos 6310, zero 0), reverted 650 cones, compromised 14 cones, pre-eval rejected 40518 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 54618
[1077.367] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1077.369] Rewrite Iteration Ends
real reduction: 6329
** Total Time breakdown: ENUM 36.11, EVAL 0.15, REPLACE 0.22, REORDER 0.12, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 54618

*****Perform Strash*****
rewrite: after rewrite, nNodes = 41173
rewrite: alg time 0.42, full time 0.69

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.82 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1087.248] Rewrite Iteration
0 in EvaluateNode 
[1087.598] Finished GPU enumeration and pre-evaluation
[1087.599] Replacing sub-graphs
0 after replace 
N = 52982   n = 41301   n * RATIO = 94992
before rebuild, nn = 41301
after rebuild, n = 52938
successfully replaced 3830 cones (pos 172, zero 3658), reverted 57 cones, compromised 73 cones, pre-eval rejected 24582 cones, small cut reject 0 cones, new idx reject 12629 cones
after replace, n = 52938
[1087.601] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1087.602] Rewrite Iteration Ends
real reduction: 197
** Total Time breakdown: ENUM 36.46, EVAL 0.15, REPLACE 0.22, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 52938

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40976
rewrite: alg time 0.36, full time 0.61

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8235
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61836
Start reordering ...
Reordered network new nObjs: 40990, original nObjs: 41105
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Strash*****

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8211
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 61349
Start reordering ...
Reordered network new nObjs: 40984, original nObjs: 40984
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.76 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1094.540] Rewrite Iteration
0 in EvaluateNode 
[1094.908] Finished GPU enumeration and pre-evaluation
[1094.909] Replacing sub-graphs
0 after replace 
N = 42201   n = 40983   n * RATIO = 94260
before rebuild, nn = 40983
after rebuild, n = 42166
successfully replaced 445 cones (pos 44, zero 401), reverted 9 cones, compromised 12 cones, pre-eval rejected 24501 cones, small cut reject 0 cones, new idx reject 15885 cones
after replace, n = 42166
[1094.910] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1094.911] Rewrite Iteration Ends
real reduction: 57
** Total Time breakdown: ENUM 36.82, EVAL 0.16, REPLACE 0.23, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 42166

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40797
rewrite: alg time 0.38, full time 0.62

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.74 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1096.700] Rewrite Iteration
0 in EvaluateNode 
[1097.135] Finished GPU enumeration and pre-evaluation
[1097.136] Replacing sub-graphs
0 after replace 
N = 41855   n = 40925   n * RATIO = 94127
before rebuild, nn = 40925
after rebuild, n = 41709
successfully replaced 293 cones (pos 51, zero 242), reverted 73 cones, compromised 10 cones, pre-eval rejected 24493 cones, small cut reject 0 cones, new idx reject 15926 cones
after replace, n = 41709
[1097.137] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1097.138] Rewrite Iteration Ends
real reduction: 57
** Total Time breakdown: ENUM 37.26, EVAL 0.16, REPLACE 0.23, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41709

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40739
rewrite: alg time 0.45, full time 0.69

*****Perform Balance*****
Phase 1 time: 0.145892
Max cover len: 14
Total number of covers: 40370
*** Max Level: 4389
Reconstruct complete! #reconstructed covers = 40370
#nodes = 40725
Phase 2 time: 0.664273
Total time: 0.810283
balance: alg time 0.81, full time 0.81

*****Perform Strash*****

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8216
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60885
Start reordering ...
Reordered network new nObjs: 40848, original nObjs: 40854
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.73 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1106.520] Rewrite Iteration
0 in EvaluateNode 
[1106.918] Finished GPU enumeration and pre-evaluation
[1106.919] Replacing sub-graphs
0 after replace 
N = 40873   n = 40847   n * RATIO = 93948
before rebuild, nn = 40847
after rebuild, n = 40869
successfully replaced 16 cones (pos 16, zero 0), reverted 5 cones, compromised 0 cones, pre-eval rejected 40697 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40869
[1106.920] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1106.921] Rewrite Iteration Ends
real reduction: 20
** Total Time breakdown: ENUM 37.65, EVAL 0.16, REPLACE 0.23, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40869

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40690
rewrite: alg time 0.41, full time 0.65

*****Perform Balance*****
Phase 1 time: 0.149348
Max cover len: 14
Total number of covers: 36716
*** Max Level: 4394
Reconstruct complete! #reconstructed covers = 36716
#nodes = 40690
Phase 2 time: 1.010798
Total time: 1.160545
balance: alg time 1.16, full time 1.16

*****Perform Balance*****
Phase 1 time: 0.146527
Max cover len: 14
Total number of covers: 36716
*** Max Level: 4394
Reconstruct complete! #reconstructed covers = 36716
#nodes = 40690
Phase 2 time: 1.012859
Total time: 1.159521
balance: alg time 1.16, full time 1.16

*****Perform Strash*****

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.72 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1117.664] Rewrite Iteration
0 in EvaluateNode 
[1118.057] Finished GPU enumeration and pre-evaluation
[1118.058] Replacing sub-graphs
0 after replace 
N = 52442   n = 40818   n * RATIO = 93881
before rebuild, nn = 40818
after rebuild, n = 52392
successfully replaced 3923 cones (pos 24, zero 3899), reverted 12 cones, compromised 6 cones, pre-eval rejected 24462 cones, small cut reject 0 cones, new idx reject 12284 cones
after replace, n = 52392
[1118.060] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1118.061] Rewrite Iteration Ends
real reduction: 27
** Total Time breakdown: ENUM 38.04, EVAL 0.16, REPLACE 0.23, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 52392

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40661
rewrite: alg time 0.41, full time 0.65

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.71 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1119.878] Rewrite Iteration
0 in EvaluateNode 
[1120.269] Finished GPU enumeration and pre-evaluation
[1120.271] Replacing sub-graphs
0 after replace 
N = 41065   n = 40789   n * RATIO = 93814
before rebuild, nn = 40789
after rebuild, n = 41049
successfully replaced 140 cones (pos 24, zero 116), reverted 8 cones, compromised 5 cones, pre-eval rejected 24397 cones, small cut reject 0 cones, new idx reject 16108 cones
after replace, n = 41049
[1120.271] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1120.272] Rewrite Iteration Ends
real reduction: 30
** Total Time breakdown: ENUM 38.43, EVAL 0.16, REPLACE 0.24, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 41049

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40622
rewrite: alg time 0.40, full time 0.64

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8191
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60601
Start reordering ...
Reordered network new nObjs: 40735, original nObjs: 40751
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Balance*****
Phase 1 time: 0.146927
Max cover len: 15
Total number of covers: 36528
*** Max Level: 4402
Reconstruct complete! #reconstructed covers = 36528
#nodes = 40582
Phase 2 time: 1.026780
Total time: 1.173825
balance: alg time 1.17, full time 1.18

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.70 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1126.297] Rewrite Iteration
0 in EvaluateNode 
[1126.694] Finished GPU enumeration and pre-evaluation
[1126.696] Replacing sub-graphs
0 after replace 
N = 52572   n = 40710   n * RATIO = 93633
before rebuild, nn = 40710
after rebuild, n = 52530
successfully replaced 4001 cones (pos 12, zero 3989), reverted 7 cones, compromised 8 cones, pre-eval rejected 24320 cones, small cut reject 0 cones, new idx reject 12245 cones
after replace, n = 52530
[1126.697] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1126.698] Rewrite Iteration Ends
real reduction: 19
** Total Time breakdown: ENUM 38.83, EVAL 0.16, REPLACE 0.24, REORDER 0.13, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 52530

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40562
rewrite: alg time 0.41, full time 0.65

*****Perform Strash*****

*****Perform Refactor*****
refactor: use zeros activated!
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8181
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60561
Start reordering ...
Reordered network new nObjs: 40685, original nObjs: 40691
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8179
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60526
Start reordering ...
Reordered network new nObjs: 40685, original nObjs: 40685
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8179
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60518
Start reordering ...
Reordered network new nObjs: 40685, original nObjs: 40685
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8180
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60518
Start reordering ...
Reordered network new nObjs: 40685, original nObjs: 40685
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.69 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1142.269] Rewrite Iteration
0 in EvaluateNode 
[1142.631] Finished GPU enumeration and pre-evaluation
[1142.632] Replacing sub-graphs
0 after replace 
N = 40701   n = 40684   n * RATIO = 93573
before rebuild, nn = 40684
after rebuild, n = 40699
successfully replaced 10 cones (pos 10, zero 0), reverted 2 cones, compromised 0 cones, pre-eval rejected 40542 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40699
[1142.633] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1142.634] Rewrite Iteration Ends
real reduction: 13
** Total Time breakdown: ENUM 39.19, EVAL 0.17, REPLACE 0.24, REORDER 0.14, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40699

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40505
rewrite: alg time 0.38, full time 0.62

*****Perform Rewrite*****
rewrite: use zeros activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.68 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1148.323] Rewrite Iteration
0 in EvaluateNode 
[1148.682] Finished GPU enumeration and pre-evaluation
[1148.683] Replacing sub-graphs
0 after replace 
N = 40873   n = 40633   n * RATIO = 93455
before rebuild, nn = 40633
after rebuild, n = 40855
successfully replaced 141 cones (pos 16, zero 125), reverted 3 cones, compromised 4 cones, pre-eval rejected 24295 cones, small cut reject 0 cones, new idx reject 16057 cones
after replace, n = 40855
[1148.684] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1148.685] Rewrite Iteration Ends
real reduction: 21
** Total Time breakdown: ENUM 39.54, EVAL 0.17, REPLACE 0.24, REORDER 0.14, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40855

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40482
rewrite: alg time 0.37, full time 0.61

*****Perform Strash*****

*****Perform Rewrite*****
rewrite: optimize level activated!
 *** Topo sort time: 0.00 sec
GPUSolver: setting cudaLimitStackSize = 12 KB
GPU memory usage: used = 3866.00 MB, free = 20393.69 MB, total = 24259.69 MB
memory needed for Cut: 8.68 MB
GPU memory usage: used = 3876.00 MB, free = 20383.69 MB, total = 24259.69 MB
[1152.274] Rewrite Iteration
0 in EvaluateNode 
[1152.671] Finished GPU enumeration and pre-evaluation
[1152.672] Replacing sub-graphs
0 after replace 
N = 40656   n = 40610   n * RATIO = 93403
before rebuild, nn = 40610
after rebuild, n = 40653
successfully replaced 15 cones (pos 15, zero 0), reverted 4 cones, compromised 0 cones, pre-eval rejected 40461 cones, small cut reject 0 cones, new idx reject 0 cones
after replace, n = 40653
[1152.673] Finished eval and replace
 *** Topo sort time: 0.00 sec
[1152.674] Rewrite Iteration Ends
real reduction: 19
** Total Time breakdown: ENUM 39.94, EVAL 0.17, REPLACE 0.24, REORDER 0.14, REDUNDANCY 0.02
** Replace Time breakdown: COPYBACK 0.02, REID 0.02, CHOICE 0.03
** CPU sequential time: 0.05 sec
GPUSolver: setting cudaLimitStackSize = 1024
after rewrite, n = 40653

*****Perform Strash*****
rewrite: after rewrite, nNodes = 40412
rewrite: alg time 0.41, full time 0.65

*****Perform Refactor*****
refactor: perform MFFC covering algorithm
Refactor: setting cudaLimitStackSize = 65536
Refactor: checked cudaLimitStackSize = 65536
refactor: execute with maximum cut size = 12...
Gathered 128 POs
Total number of cones to be resyned: 8157
Truth table computation time: 0.00 sec
ISOP + factor time: 0.00 sec
Insertion complete, idCounter = 60352
Start reordering ...
Reordered network new nObjs: 40538, original nObjs: 40541
Reordering complete!
 ** CPU sequential time: 0.00 sec
Sequential reorder time: 0.00 secs
