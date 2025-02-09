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

#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 505;
vector<pair<int, int>> adj[N];
int n, m;

void dijkstra(int source, vector<int>& max_road) {
    max_road.assign(n, INF);
    max_road[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > max_road[u]) continue;

        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            int new_max = max(max_road[u], w);
            if (new_max < max_road[v]) {
                max_road[v] = new_max;
                pq.push({new_max, v});
            }
        }
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            adj[i].clear();
        }

        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<int> max_road;
        dijkstra(0, max_road);

        cout << "Case " << i << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (max_road[i] == INF) {
                cout << "Impossible" << endl;
            } else {
                cout << max_road[i] << endl;
            }
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