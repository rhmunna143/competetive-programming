/***
 * Objective:
 *
 * Context: You will be given a chessboard of N*M size. You can move anywhere in the chessboard freely. You will be given two cells - the knight's cell  Q(Qi and Qj), and the queen's cell K (Ki and Kj). You need to tell the minimum number of steps for the knight to attack the queen if the queen doesn't move.

A knight move in 8 directions. The directions are given below:
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

const int N = 105;
int dist[N][N];
vector<pair<int, int>> knight_moves = {
    {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n, m;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int bfs(int si, int sj, int di, int dj)
{
    memset(dist, -1, sizeof(dist));
    queue<pair<int, int>> q;
    q.push({si, sj});
    dist[si][sj] = 0;

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        if (i == di && j == dj)
        {
            return dist[i][j];
        }

        for (auto move : knight_moves)
        {
            int ni = i + move.first;
            int nj = j + move.second;

            if (valid(ni, nj) && dist[ni][nj] == -1)
            {
                q.push({ni, nj});
                dist[ni][nj] = dist[i][j] + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        int result = bfs(ki, kj, qi, qj);
        cout << result << endl;
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