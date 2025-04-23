/***
 * Objective: is the array can be a permutation or not
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
 * 1. Count unique elements from 1 to n already in array
 * 2. Count how many elements need to be changed
 * 3. Check if number of changes needed <= k
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // freq of 1 to n in the array
        vector<bool> freq(n + 1, false);
        int valid_count = 0;

        // marking the frequency of 1 to n in the array and counting the valid numbers
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 1 && a[i] <= n)
            {
                if (!freq[a[i]])
                {
                    freq[a[i]] = true;
                    valid_count++;
                }
            }
        }

        // how many numbers need to change
        int need_to_change = n - valid_count;

        if (need_to_change > k)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
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