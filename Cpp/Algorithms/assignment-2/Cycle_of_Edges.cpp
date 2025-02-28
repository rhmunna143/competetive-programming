/***
 * Objective:
 *
 * Context: You will be given an undirected graph where there will be N nodes and E edges. You need to tell the number of edges that can create a cycle in the graph.

Note: Duplicate edges as input can not be possible. The value of nodes are from 1 to N.
 *
 *
 * Constrains:
 *  1 <= N <= 10^5
 *  1 <= E <= 10^6
 *  1 <= u, v <= N
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input the number of nodes N and the number of edges E
 * 3. for each edge, input the two nodes A and B which means there is a edge between A and B.
 * 4. Output the number of edges that can create a cycle.
 * 5. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& parent, int node) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = find(parent, parent[node]);
}

void merge(vector<int>& parent, int u, int v) {
    u = find(parent, u);
    v = find(parent, v);
    
    if (u != v) {
        parent[u] = v;
    }
}

int main() {
    int N, E;
    cin >> N >> E;

    vector<int> parent(N + 1);

    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    int cycleEdges = 0;

    for (int i = 0; i < E; i++) {
        int A, B;
        cin >> A >> B;

        if (find(parent, A) == find(parent, B)) {
            cycleEdges++;
        } else {
            merge(parent, A, B);
        }
    }

    cout << cycleEdges << endl;
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