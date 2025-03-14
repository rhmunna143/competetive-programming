/***
 * Objective: Find the number of ways to reconstruct an array
 *
 * Context:
 * - Two non-negative elements were deleted from an array
 * - We know the sum of the original array
 * - We need to count how many ways we can add two elements to maintain the same sum
 *
 * Approach:
 * 1. Calculate sum of the current array (after deletion)
 * 2. Find the difference between original sum and current sum
 * 3. Count pairs of non-negative integers that sum to this difference
 *
 * Note: Elements can be up to 10^18
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n - 2);
        long long current_sum = 0;

        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
            current_sum += arr[i];
        }

        // sum of the main arr
        long long sum_of_main_array;
        cin >> sum_of_main_array;

        // difference between sum of main arr and current arr
        long long difference = sum_of_main_array - current_sum;

        // skip if difference is negative
        if (difference < 0)
        {
            cout << 0 << endl;
            continue;
        }

        cout << difference + 1 << endl;
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