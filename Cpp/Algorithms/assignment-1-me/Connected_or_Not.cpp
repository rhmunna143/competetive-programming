/***
 * Objective:
 *
 * Context: You will be given a directed graph as input. Then you will receive Q queries. For each query, you will be given two nodes, A and B. You need to determine whether you can go from A to B directly without using any other nodes.
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
 * 1. start
 * 2. The first line will contain N and E, the number of nodes and the number of edges, respectively. The values of the nodes range from 0 to N-1.
 * 3. input Next E lines will contain two node values which means there is a connection from first node to second node.
 * 4. The next line will contain Q
 * 5. The following Q lines will each contain A and B.
 * 6. Create a 2D vector ADJ of size N
 * 7. Loop E times
 * 8. Take input U, V
 * 9. ADJ[U].push_back(V)
 * 10. Loop Q times
 * 11. Take input A, B
 * 12. Call can_go(A, B, ADJ)
 * 13. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

void can_go(int A, int B, vector<vector<int>> &ADJ)
{
    if (A == B)
    {
        cout << "YES" << endl;
        return;
    }
    for (int node : ADJ[A])
    {
        if (node == B)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int N, E;
    cin >> N >> E;

    vector<vector<int>> ADJ(N);

    for (int i = 0; i < E; i++)
    {
        int U, V;
        cin >> U >> V;
        ADJ[U].push_back(V);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int A, B;
        cin >> A >> B;
        can_go(A, B, ADJ);
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