/***
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note: using two pointers technique to solve this problem
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
    int N;

    // taking input
    cin >> N;

    // declaring an array of size N
    int A[N];

    // taking input
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // using two pointers technique to solve this problem
    int i = 0, j = N - 1;

    while (i < j)
    {
        if (A[i] != A[j])
        {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }

    cout << "YES";

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