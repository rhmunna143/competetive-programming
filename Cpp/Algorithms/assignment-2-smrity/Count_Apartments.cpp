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
 
 char grid[1005][1005];
 bool vis[1005][1005];
 vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 int n,m;
 bool valid(int i, int j) {
     return i >= 0 && i < n && j >= 0 && j < m;
 }
 
 void dfs(int si, int sj) {
     vis[si][sj] = true;
     for (int i = 0; i < 4; i++) {
         int ci = si + d[i].first;
         int cj = sj + d[i].second;
         if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
             dfs(ci, cj);
         }
     }
 }
 
 int main() {
    cin >> n >> m;
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             cin >> grid[i][j];
         }
     }
     memset(vis, false, sizeof(vis));
     int apt_cnt = 0;
 
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             if (grid[i][j] == '.' && !vis[i][j]) {
                 dfs(i, j);
                 apt_cnt++;
             }
         }
     }
     cout << apt_cnt << endl;
 
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