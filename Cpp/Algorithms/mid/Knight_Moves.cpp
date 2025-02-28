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

int n, m;
vector<pair<int, int>> knight_moves = {
    {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},
    {1, -2}, {1, 2}, {2, -1}, {2, 1}
};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int bfs(int x1, int y1, int x2, int y2) {
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;
    q.push({x1, y1});
    dist[x1][y1] = 0;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x == x2 && y == y2) {
            return dist[x][y];
        }
        
        for(const auto& move : knight_moves) {
            int o = x + move.first;
            int p = y + move.second;
            
            if(valid(o, p) && dist[o][p] == -1) {
                dist[o][p] = dist[x][y] + 1;
                q.push({o, p});
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> m;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << bfs(x1, y1, x2, y2) << endl;
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