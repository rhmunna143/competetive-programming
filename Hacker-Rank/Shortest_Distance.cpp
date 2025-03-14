/***
 * Objective: Find the shortest path between given pairs of nodes in a directed weighted graph
 * Solution: Using Dijkstra's algorithm for each query
 */

#include<bits/stdc++.h>
using namespace std;

void dijkstra(int src, int n, vector<vector<pair<int, long long>>>& adj, vector<long long>& dist) {
    dist.assign(n + 1, LLONG_MAX);
    dist[src] = 0;
    
    priority_queue<pair<long long, int>, 
                  vector<pair<long long, int>>, 
                  greater<pair<long long, int>>> pq;
    pq.push({0, src});
    
    while(!pq.empty()) {
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();
        
        if(d > dist[u]) continue;
        
        for(const auto& edge : adj[u]) {
            int v = edge.first;
            long long w = edge.second;
            
            if(dist[u] != LLONG_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, long long>>> adj(n + 1);
    vector<long long> dist;
    
    for(int i = 0; i < m; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    
    int q;
    cin >> q;
    while(q--) {
        int s, d;
        cin >> s >> d;
        dijkstra(s, n, adj, dist);
        cout << (dist[d] == LLONG_MAX ? -1 : dist[d]) << '\n';
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