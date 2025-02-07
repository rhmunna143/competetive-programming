/***
 * Objective:
 *
 * Context: You will be given an undirected graph as input. Then you will be given Q queries. For each query you will be given a node X. You need to print the nodes that are connected with X in descending order.
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. 1 <= E <= 10^6
 * 3. 1 <= Q <= 10^5
 * 4. 0 <= X <= N
 *
 *
 * Note:  If there is no node connected to X, then print -1.
 *
 * Input Format

The first line will contain N and E, the number of nodes and the number of edges, respectively. The values of the nodes range from 0 to N-1.
 *
 * Next E lines will contain two node values which means there is a connection between first node and second node.
 *
 * The next line will contain Q
 *
 * The following Q lines will each contain X.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. Take input N, E
 * 3. Create a 2D vector ADJ of size N
 * 4. Loop E times
 * 5. Take input U, V
 * 6. ADJ[U].push_back(V)
 * 7. ADJ[V].push_back(U)
 * 8. Loop Q times
 * 9. Take input X
 * 10. Call print_connected(X, ADJ)
 * 11. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

void print_connected(int X, vector<vector<int>> &ADJ)
{
    if (ADJ[X].empty())
    {
        cout << -1 << endl;
        return;
    }

    vector<int> connected = ADJ[X];
    sort(connected.begin(), connected.end(), greater<int>());

    for (int node : connected)
    {
        cout << node << " ";
    }
    cout << endl;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, E;
    cin >> N >> E;

    vector<vector<int>> ADJ(N);

    for (int i = 0; i < E; i++)
    {
        int U, V;
        cin >> U >> V;
        ADJ[U].push_back(V);
        ADJ[V].push_back(U);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X;
        cin >> X;
        print_connected(X, ADJ);
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