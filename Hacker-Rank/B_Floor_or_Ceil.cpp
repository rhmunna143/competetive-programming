/***
 * Objective: Find min and max values after applying floor and ceiling divisions
 *
 * Context:
 * - Two operations: floor(x/2) and ceil(x/2)
 * - Must use exactly n floor operations and m ceil operations in any order
 * - Need to find min and max possible final values
 *
 * Constrains:
 * - 0 ≤ x, n, m ≤ 10^9
 *
 * Key insights:
 * - For even numbers, both operations give the same result
 * - For odd numbers, floor gives (x-1)/2, ceil gives (x+1)/2
 * - To minimize: prioritize floor operations for odd numbers
 * - To maximize: prioritize ceil operations for odd numbers
 */

#include <bits/stdc++.h>
using namespace std;

// Calculate minimum possible value
long long minimizeValue(long long x, long long n, long long m)
{
    // If operations exceed 60, result will be 0
    if (min(n, m) > 0 && n + m >= 60)
        return 0;

    while (n > 0 || m > 0)
    {
        if (x == 0)
            return 0; // Value can't go below 0

        if (x % 2 == 1)
        { // Odd number
            if (n > 0)
            {              // Prefer floor for odd numbers to minimize
                x = x / 2; // Equivalent to floor(x/2)
                n--;
            }
            else
            {
                x = (x + 1) / 2; // Equivalent to ceil(x/2)
                m--;
            }
        }
        else
        {              // Even number
            x = x / 2; // Both operations give the same result
            if (n > 0)
                n--;
            else
                m--;
        }
    }
    return x;
}

// Calculate maximum possible value
long long maximizeValue(long long x, long long n, long long m)
{
    // If operations exceed 60, result will be 0
    if (min(n, m) > 0 && n + m >= 60)
        return 0;

    while (n > 0 || m > 0)
    {
        if (x == 0)
            return 0; // Value can't go below 0

        if (x % 2 == 1)
        { // Odd number
            if (m > 0)
            {                    // Prefer ceil for odd numbers to maximize
                x = (x + 1) / 2; // Equivalent to ceil(x/2)
                m--;
            }
            else
            {
                x = x / 2; // Equivalent to floor(x/2)
                n--;
            }
        }
        else
        {              // Even number
            x = x / 2; // Both operations give the same result
            if (n > 0)
                n--;
            else
                m--;
        }
    }
    return x;
}

int main()
{
    long long x, n, m;
    cin >> x >> n >> m;

    cout << "Min value: " << minimizeValue(x, n, m) << endl;
    cout << "Max value: " << maximizeValue(x, n, m) << endl;

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