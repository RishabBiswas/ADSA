Maximum Bipartite Graph Matching (DFS Approach)
=========================================

This program finds the **maximum matching** in a **bipartite graph** using a **Depth First Search (DFS)–based augmenting path algorithm**.

In a bipartite graph, vertices are divided into two disjoint sets **U** and **V**, and edges only connect vertices between these two sets.

-----------------------------------
How the Algorithm Works
-----------------------------------
1. The program takes as input two sets of vertices: **U** (left side) and **V** (right side).
2. It uses an adjacency matrix `graph[u][v]`, where:
   - `graph[u][v] = 1` means there is an edge between node `u` in U and node `v` in V.
3. It performs DFS to find **augmenting paths** — paths that can increase the number of matched pairs.
4. The process continues until no more augmenting paths can be found.
5. The final output shows:
   - The **maximum number of matchings**
   - The **matched pairs (U → V)**



-----------------------------------
Input Format
-----------------------------------
1. Enter the number of vertices in **U** and **V**.
2. Enter the adjacency matrix (size nU × nV).

Example Input:
----------------
Enter number of nodes in U and V: 3 3
Enter adjacency matrix (U x V):
1 1 0
0 1 1
1 0 1

-----------------------------------
Output Format
-----------------------------------
The program prints:
- The maximum matching size
- The matched pairs (U → V)

Example Output:
----------------
Maximum Bipartite Matching = 3
Matched pairs (U -> V):
U0 -> V0
U1 -> V1
U2 -> V2

-----------------------------------
Explanation:
-----------------------------------
Given:
U = {U0, U1, U2}
V = {V0, V1, V2}

Edges:
U0 -> V0, V1
U1 -> V1, V2
U2 -> V0, V2

The maximum possible matching is 3 pairs:
U0-V0, U1-V1, and U2-V2.

-----------------------------------
Algorithm Details
-----------------------------------
- Uses DFS to find augmenting paths.
- For each node in U:
  - Try to find a free node in V.
  - If no free node exists, try to reassign existing matches recursively.

-----------------------------------
Time Complexity
-----------------------------------
- For each vertex in U, DFS explores all edges to V.
- Complexity: **O(V × E)** (where E = nU × nV for dense graphs)
- Works efficiently for moderate-size graphs (n ≤ 100).

-----------------------------------
Notes
-----------------------------------
- The program uses an adjacency matrix (size MAX × MAX).
- You can adjust `#define MAX` to handle larger inputs.
- Ensure that nU and nV are ≤ MAX.
- Input should only contain 0s and 1s.

-----------------------------------
Author
-----------------------------------
Created for academic and learning purposes.
Demonstrates Maximum Bipartite Matching using DFS-based augmenting path algorithm in C.
