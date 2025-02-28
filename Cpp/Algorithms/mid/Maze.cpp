#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
// ডান, বাম, উপরে, নিচে
vector<pair<int,int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}}; // Right, Left, Up, Down
int n, m;
pair<int,int> start, destination;

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

bool dfs(int si, int sj) {
    vis[si][sj] = true;

    // যদি গন্তব্যে পৌঁছে যাই
    if (si == destination.first && sj == destination.second) {
        return true;
    }

    // Right, Left, Up, Down অনুসারে পাথ খোঁজা
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj)) {
            if (dfs(ci, cj)) {
                // পাথের কোষে 'X' বসাও
                if (grid[si][sj] == '.') {
                    grid[si][sj] = 'X';
                }
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;

    // গ্রিড ইনপুট নিন
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') start = {i, j};
            if (grid[i][j] == 'D') destination = {i, j};
        }
    }

    // যদি শুরু বা গন্তব্য ব্লক হয়ে থাকে
    if (grid[start.first][start.second] == '#' || grid[destination.first][destination.second] == '#') {
        cout << "পথ সম্ভব নয়!" << endl;
        return 0;
    }

    // ভিজিটেড অ্যারে শুরু করা
    memset(vis, false, sizeof(vis));

    // DFS শুরু করা
    if (!dfs(start.first, start.second)) {
        cout << "কোনো পথ পাওয়া যায়নি!" << endl;
    }

    // গ্রিডটি প্রিন্ট করুন যেখানে পাথ 'X' দিয়ে চিহ্নিত করা হয়েছে
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
