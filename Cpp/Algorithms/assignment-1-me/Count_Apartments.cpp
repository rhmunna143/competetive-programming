/***
 * Objective:
 *
 * Context: You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number of apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.
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
 * 3. input Then there are N lines of M characters describing the map. Each character is either .(room) or #(wall).
 * 4. Create a 2D vector MAP of size N
 * 5. Loop N times
 * 6. Loop M times
 * 7. Take input C
 * 8. MAP[i].push_back(C)
 * 9. Loop N times
 * 10. Loop M times
 * 11. If MAP[i][j] is a room and not visited
 * 12. Call dfs(i,j)
 * 13. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> MAP;
vector<vector<bool>> vis;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj, int n, int m)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj, n, m) && !vis[ci][cj] && MAP[ci][cj] == '.')
            dfs(ci, cj, n, m);
    }
}

int count_apartments(int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (MAP[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j, n, m);
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;

    MAP.resize(n);
    vis.resize(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            MAP[i].push_back(c);
            vis[i].push_back(false);
        }
    }

    cout << count_apartments(n, m) << endl;

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