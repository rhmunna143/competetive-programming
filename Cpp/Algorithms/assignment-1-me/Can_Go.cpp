/***
 * Objective:
 *
 * Context: You are given an N*M sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms A and B. You need to tell if you can go from room A to B by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.
 *
 *
 * Constrains:
 * 1. 1 <= N, M <= 10^3
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. Take input N, M the height and width of the map
 * 3. input Then there are N lines of M characters describing the map. Each character is .(floor), #(wall), A or B (rooms)
 * 4. Create a 2D vector MAP of size N
 * 5. Loop N times
 * 6. Loop M times
 * 7. Take input C
 * 8. MAP[i].push_back(C)
 * 9. Loop N times
 * 10. Loop M times
 * 11. If MAP[i][j] is A
 * 12. Call dfs(i,j)
 * 13. If vis[B] is true
 * 14. Print "YES"
 * 15. Else
 * 16. Print "NO"
 * 17. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> MAP;
vector<vector<bool>> vis;
pair<int, int> start, target;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si, int sj, int n, int m)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj, n, m) && !vis[ci][cj] && (MAP[ci][cj] == '.' || MAP[ci][cj] == 'B'))
        {
            dfs(ci, cj, n, m);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    MAP.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> MAP[i][j];
            if (MAP[i][j] == 'A')
                start = {i, j};
            if (MAP[i][j] == 'B')
                target = {i, j};
        }
    }

    dfs(start.first, start.second, n, m);

    cout << (vis[target.first][target.second] ? "YES" : "NO") << endl; 

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