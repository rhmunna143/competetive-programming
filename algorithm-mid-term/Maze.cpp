/***
 * Objective:
 *
 * Context: Rezia is trapped in a 2D maze of N*M size, starting at position R, and her goal is to reach the exit marked by D. The maze contains blocks represented by #, and she can only traverse through cells marked with dots (.). As she need to escape as early as possible, we need to determine the path she will follow.

Place an X in each cell representing Rezia's route to exit the maze. If there is no viable path for her to exit, leave the maze unchanged.

Note: Rezia can move in four directions – right, left, up, and down. It is crucial to adhere to the specified order: attempting right first, then left, followed by up, and finally down.
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

const int N = 1005;
char grid[N][N];
bool vis[N][N];
int n, m;
pair<int, int> start, dest;
bool found = false;

// Directions in specified order: Right, Left, Up, Down
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

bool dfs(int si, int sj) {
    vis[si][sj] = true;
    
    // If destination reached
    if(si == dest.first && sj == dest.second) {
        return true;
    }
    
    // Try all directions in specified order
    for(auto move : d) {
        int ci = si + move.first;
        int cj = sj + move.second;
        
        if(valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D')) {
            if(dfs(ci, cj)) {
                // Mark path only for '.' cells
                if(grid[ci][cj] == '.') {
                    grid[ci][cj] = 'X';
                }
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    
    // Read the maze
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'R') start = {i, j};
            if(grid[i][j] == 'D') dest = {i, j};
        }
    }
    
    memset(vis, false, sizeof(vis));
    bool pathExists = dfs(start.first, start.second);
    
    // Print maze (with path if found)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
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