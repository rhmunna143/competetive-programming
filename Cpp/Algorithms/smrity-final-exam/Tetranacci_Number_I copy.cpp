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

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        return 0;
    }
    long long int t0 = 0, t1 = 1, t2 = 1, t3 = 2, t4 = 0;
    for (int i = 4; i <= n; i++)
    {
        t4 = t0 + t1 + t2 + t3;
        t0 = t1;
        t1 = t2;
        t2 = t3;
        t3 = t4;
    }
    cout << t4 << endl;
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