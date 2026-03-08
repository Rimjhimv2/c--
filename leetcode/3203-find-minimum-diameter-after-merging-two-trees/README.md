# 3203. Find Minimum Diameter After Merging Two Trees

![Hard](https://img.shields.io/badge/Difficulty-Hard-red)

**LeetCode:** [https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/](https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/)
**Date Solved:** 2026-03-08
**Language:** 1class Solution {
2public:
3
4    unordered_map<int, vector<int>> buildAdj(vector<vector<int>>& edges) {
5        unordered_map<int, vector<int>> adj;
6
7        for(int i = 0; i < edges.size(); i++) {
8            int u = edges[i][0];
9            int v = edges[i][1];
10
11            adj[u].push_back(v);
12            adj[v].push_back(u);
13        }
14
15        return adj;
16    }
17
18    int bfs(int start, unordered_map<int, vector<int>>& adj, int &farthest) {
19        queue<int> q;
20        unordered_set<int> visited;
21
22        q.push(start);
23        visited.insert(start);
24
25        int dist = -1;
26
27        while(!q.empty()) {
28            int size = q.size();
29            dist++;
30
31            while(size--) {
32                int node = q.front();
33                q.pop();
34                farthest = node;
35
36                for(int i = 0; i < adj[node].size(); i++) {
37                    int nei = adj[node][i];
38
39                    if(!visited.count(nei)) {
40                        visited.insert(nei);
41                        q.push(nei);
42                    }
43                }
44            }
45        }
46
47        return dist;
48    }
49
50    int findDiameter(unordered_map<int, vector<int>>& adj) {
51
52        if(adj.empty()) return 0;   // ⭐ important fix
53
54        int farthest = adj.begin()->first;
55
56        bfs(farthest, adj, farthest);
57
58        return bfs(farthest, adj, farthest);
59    }
60
61    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
62
63        auto adj1 = buildAdj(edges1);
64        auto adj2 = buildAdj(edges2);
65
66        int d1 = findDiameter(adj1);
67        int d2 = findDiameter(adj2);
68
69        int combined = (d1 + 1)/2 + (d2 + 1)/2 + 1;
70
71        return max({d1, d2, combined});
72    }
73};

## Problem Description

There exist two undirected trees with n and m nodes, numbered from 0 to n - 1 and from 0 to m - 1, respectively. You are given two 2D integer arrays edges1 and edges2 of lengths n - 1 and m - 1, respectively, where edges1[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the first tree and edges2[i] = [ui, vi] indicates that there is an edge between nodes ui and vi in the second tree.
You must connect one node from the first tree with another node from the second tree with an edge.
Return the minimum possible diameter of the resulting tree.
The diameter of a tree is the length of the longest path between any two nodes in the tree.

## Examples

**Example 1:**
```
Input: edges1 = [[0,1],[0,2],[0,3]], edges2 = [[0,1]]
Output: 3
Explanation:
We can obtain a tree of diameter 3 by connecting node 0 from the first tree with any node from the second tree.
```

**Example 2:**
```
Input: edges1 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]], edges2 = [[0,1],[0,2],[0,3],[2,4],[2,5],[3,6],[2,7]]
Output: 5
Explanation:
We can obtain a tree of diameter 5 by connecting node 0 from the first tree with node 0 from the second tree.
```


## Constraints

- 1 <= n, m <= 10^5
- edges1.length == n - 1
- edges2.length == m - 1
- edges1[i].length == edges2[i].length == 2
- edges1[i] = [ai, bi]
- 0 <= ai, bi < n
- edges2[i] = [ui, vi]
- 0 <= ui, vi < m
- The input is generated such that edges1 and edges2 represent valid trees.

## Topics

`Tree` `Depth-First Search` `Breadth-First Search` `Graph Theory`

---
*Synced by [LeetSync](https://github.com) Chrome Extension*
