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
    int T;
    cin >> T;

    while (T--)
    {
        long long N; // Using long long for large inputs
        cin >> N;

        // A non-degenerate triangle is only possible when N > 3
        // For N=3, sticks of length 1,2,3 don't form a non-degenerate triangle
        // because 2*3 is not < (1+2+3)
        if (N <= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            // The maximum perimeter is obtained by using the three largest sticks:
            // N, N-1, and N-2, which is 3N-3
            cout << 3 * N - 3 << endl;
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