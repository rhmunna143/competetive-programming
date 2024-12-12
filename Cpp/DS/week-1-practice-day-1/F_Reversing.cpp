/***
 * Objective:
 *
 * Context: Given a number N and an array A of N numbers. Print the array in a reversed order.
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10 pow(3)
 * 2. 0 <= A sub(i) <= 10 pow(9)
 *
 * Note:
 * 1. *Don't use built-in-functions.
 * 2. using vectors to solve
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> v(n);

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // reverse
    reverse(v.begin(), v.end());

    // output
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    v.clear();

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