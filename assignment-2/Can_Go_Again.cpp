/***
 * Objective: Find shortest path with negative edges and detect negative cycles
 *
 * Context: Given a weighted directed graph with negative edges, find shortest path
 * from source to destination considering negative cycles
 *
 * Constrains:
 * 1 ≤ N ≤ 1000 where N is number of nodes
 * 1 ≤ M ≤ 2000 where M is number of edges
 * 1 ≤ Q ≤ 1000 where Q is number of queries
 * -1e9 ≤ W ≤ 1e9 where W is edge weight
 */

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
    long long c;
    Edge(int a, int b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long dis[1005];
vector<Edge> edge_list;
int n, m;

bool bellman_ford(int src, int dest)
{
    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int u = ed.a;
            int v = ed.b;
            long long w = ed.c;
            if (dis[u] != LLONG_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    for (auto ed : edge_list)
    {
        int u = ed.a;
        int v = ed.b;
        long long w = ed.c;
        if (dis[u] != LLONG_MAX && dis[u] + w < dis[v])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src, q;
    cin >> src >> q;
    bool has_negative_cycle = bellman_ford(src, 0);
    if (has_negative_cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    while (q--)
    {
        int dest;
        cin >> dest;

        if (dis[dest] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dest] << endl;
        }
    }

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