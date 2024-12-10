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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> numbers(n);

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // operations
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == 0)
        {
            numbers[i] = 0;
        }
        else if (numbers[i] < 0)
        {
            numbers[i] = 2;
        }
        else
        {
            numbers[i] = 1;
        }
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
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