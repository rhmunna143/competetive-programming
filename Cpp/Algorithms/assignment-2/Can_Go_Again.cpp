/***
 * Objective:
 *
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

struct Edge
{
    int u, v;
    long long w;
};

bool bellmanFord(int n, vector<Edge> &edges, int source, vector<long long> &dist)
{
    dist.assign(n + 1, INF);
    dist[source] = 0;

    // relax all edges n-1 times
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto edge : edges)
        {
            if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v])
            {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    // check for negative cycle
    for (auto edge : edges)
    {
        if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v])
        {
            return true; // Negative cycle exists
        }
    }

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int source;
    cin >> source;

    vector<long long> dist;
    bool hasNegativeCycle = bellmanFord(n, edges, source, dist);

    if (hasNegativeCycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int q;
    cin >> q;
    
    while (q--)
    {
        int dest;
        cin >> dest;
        if (dist[dest] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[dest] << endl;
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