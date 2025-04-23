/***
 * Objective: Calculate the sum of elements in a specific sequence for given ranges
 *
 * Context:
 * - Sequence of length N with properties:
 *   1. Each each_element appears exactly 3 times
 *   2. Sequence is sorted in non-decreasing order
 *   3. Elements are positive integers
 * - Need to handle Q queries for sum of elements from position L to R
 *
 * Constrains:
 * - 1 ≤ N, Q ≤ 10^5
 * - 1 ≤ L ≤ R ≤ N
 *
 * Approach:
 * - Element at position i is ceiling(i/3)
 * - Use prefix_sum sum array for efficient range sum queries
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int each_element = (i + 2) / 3;
        prefix_sum[i] = prefix_sum[i - 1] + each_element;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
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