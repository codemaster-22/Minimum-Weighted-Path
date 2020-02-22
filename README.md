# Minimum-Weighted-Path
Problem Statement:
. You are given a binary tree containing N nodes and a lucky number x. Each node in the binary tree has some
weight associated with it given by the weight array W. Two nodes u and v (u 6= v) are said to be lucky-pair of
nodes if the sum of weights of nodes u and v is equal to lucky number i.e., W(u) + W(v) = x.
. n1, n2, ..., nk−1, nk is said to be a path between two nodes n1 and nk if all the nodes n1, n2, ..., nk−1, nk are
distinct and there is an edge between ni and ni+1 for all 1 ≤ i < k. Two nodes u, v have a unique path between
them in any tree. Weight of the u-v path is defined as the sum of weights of all the vertices on the path from u
to v(See the example below for clarity)
. Find out the value of minimum weighted path among all such weighted paths between lucky-pair of nodes.
It is guaranteed that no two nodes have equal weights.
