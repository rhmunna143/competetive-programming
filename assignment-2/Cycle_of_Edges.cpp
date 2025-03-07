/***
 * Objective: Count number of edges that can create cycles in an undirected graph
 *
 * Context: Using Disjoint Set Union (Dis_s_uni) to detect cycles
 *
 * Constrains:
 * - No duplicate edges
 * - Node values from 1 to N
 *
 * Algorithm:
 * 1. Initialize Dis_s_uni with all nodes as separate sets
 * 2. For each edge (u,v):
 *    - If find(u) == find(v): increment cycle count
 *    - Else: union(u,v)
 * 3. Output cycle count
 */

#include <bits/stdc++.h>
using namespace std;

class Dis_s_uni
{
    vector<int> parent, rank;

public:
    Dis_s_uni(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    bool union_sets(int a, int b)
    {
        int p = find(a), q = find(b);
        if (p == q)
            return false;

        if (rank[p] < rank[q])
            swap(p, q);
        parent[q] = p;
        if (rank[p] == rank[q])
            rank[p]++;
        return true;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Dis_s_uni dsu(n);
    int cycleCount = 0;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (!dsu.union_sets(u, v))
            cycleCount++;
    }

    cout << cycleCount << endl;
    return 0;
}
/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */