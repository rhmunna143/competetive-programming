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

// declare global variables
int n, m;
vector<int> adj[100001];
bool vis[100001];
int par[100001];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    par[s] = -1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i=0; i<adj[node].size(); i++)
        {
            if(!vis[adj[node][i]])
            {
                q.push(adj[node][i]);
                vis[adj[node][i]] = true;
                par[adj[node][i]] = node;
            }
        }
    }
}



int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    if(!vis[n])
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> path;
        for(int v=n; v!=-1; v=par[v])
        {
            path.push_back(v);
        }

        reverse(path.begin(), path.end());

        cout << path.size() << endl;
        for(int i=0; i<path.size(); i++)
        {
            cout << path[i] << " ";
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