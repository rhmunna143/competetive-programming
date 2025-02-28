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

vector<long long> dijkstra(int source, const vector<vector<pair<int, long long>>> &adj)
{
    int n = adj.size() - 1;
    vector<long long> dist(n + 1, -1);
    dist[source] = 0;

    priority_queue<pair<long long, int>,
                   vector<pair<long long, int>>,
                   greater<pair<long long, int>>>
        pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u])
            continue;

        for (const auto &edge : adj[u])
        {
            int v = edge.first;
            long long w = edge.second;
            if (dist[v] == -1 || dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<pair<int, long long>>> adj(n + 1);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    int q;
    cin >> q;

    vector<long long> dist;
    while (q--)
    {
        int source, dest;
        cin >> source >> dest;
        dist = dijkstra(source, adj);
        cout << dist[dest] << '\n';
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