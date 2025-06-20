/***
 * Objective:
 * Find minimum operations to make X and Y have a common divisor > 1
 *
 * Context:
 * We can increment either X or Y by 1 in each operation
 * Goal: Make GCD(X,Y) > 1
 *
 * Constrains:
 * 1 ≤ T ≤ 10^3
 * 1 ≤ X, Y ≤ 10^9
 *
 * Note:
 * If GCD(X,Y) > 1 already, answer is 0
 * Otherwise, we need to make both even (add minimum operations)
 *
 * Algorithm:
 * 1. If GCD(X,Y) > 1, return 0
 * 2. Otherwise, make both numbers even by incrementing odd numbers
 * 3. Count operations needed: (X%2) + (Y%2)
 */

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve()
{
    long long x, y;
    cin >> x >> y;

    // If they already have a common divisor > 1, no operations needed
    if (gcd(x, y) > 1) {
        cout << 0 << endl;
        return;
    }

    // If GCD is 1, we need to make both numbers even
    // This gives us GCD = 2 (which is > 1)
    // Count how many numbers are odd
    int operations = (x % 2) + (y % 2);
    
    cout << operations << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

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