/***
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
    int A, B;
    char S[2]; // declaring symbol for comparison

    // taking input
    cin >> A >> S >> B;

    // comparing the values
    if (S[0] == '<')
    {
        if (A < B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (S[0] == '>')
    {
        if (A > B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (S[0] == '=')
    {
        if (A == B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
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