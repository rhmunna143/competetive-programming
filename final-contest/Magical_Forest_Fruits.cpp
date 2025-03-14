/***
 * Objective: Calculate sum of fruits within specific tree ranges
 *
 * Context: Given n trees with fruits and q queries [L,R],
 * calculate the total number of fruits on trees from index L to R
 *
 * Constrains:
 * - 1 <= n, q <= 10^5
 * - Tree indices are 1-indexed in the problem
 *
 * Approach:
 * 1. Use prifix_sum sums for efficient range sum queries
 * 2. For each query [L,R], compute prifix_sum[R] - prifix_sum[L-1]
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> fruits(n + 1);
    vector<long long> prifix_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> fruits[i];
        prifix_sum[i] = prifix_sum[i - 1] + fruits[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum = prifix_sum[r] - prifix_sum[l - 1];

        cout << sum << endl;
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