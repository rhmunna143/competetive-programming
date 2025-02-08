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
 
 void connect(int x, int y, vector<int> adj_list[]) {
     if (x == y) {
         cout << "YES" << endl;
         return;
     }
     for (int child : adj_list[x]) {
         if (child == y) {
             cout << "YES" << endl;
             return;
         }
     }
     cout << "NO" << endl;
 }
 
 int main() {
     int n, e;
     cin >> n >> e;
     vector<int> adj_list[n];
     
     // Read edges
     while (e--) {
         int a, b;
         cin >> a >> b;
         adj_list[a].push_back(b);
     } 
     int q;
     cin >> q;
     while (q--) {
         int x, y;
         cin >> x >> y;
         connect(x, y, adj_list);
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
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */