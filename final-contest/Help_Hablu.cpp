/***
 * Objective: Count how many times string T appears as a subsequence in string S
 *
 * Context:
 * - A subsequence is formed by deleting some characters without changing order
 * - Need to count all possible ways to form subsequence T from S
 *
 * Constrains:
 * - 1 ≤ t ≤ 100
 * - Summation of |S| over all test cases ≤ 10^5
 * - 1 ≤ |T| ≤ |S| ≤ 10^5
 *
 * Algorithm:
 * - Use dynamic programming to count subsequence occurrences
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;

        int m = s.length();
        int n = t.length();

        vector<long long> dp(n + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= m; i++)
        {
            for (int j = n; j >= 1; j--)
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[j] += dp[j - 1];
                }
            }
        }

        cout << dp[n] << endl;
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