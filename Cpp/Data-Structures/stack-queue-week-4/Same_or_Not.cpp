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

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M, N;
    cin >> M >> N;

    stack<int> s;
    queue<int> q;

    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // if stack and queue are same by any order then print "YES" or "NO" otherwise
    while (!s.empty() && !q.empty())
    {
        if (s.top() == q.front())
        {
            s.pop();
            q.pop();
        }
        else
        {
            break;
        }
    }

    if (s.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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