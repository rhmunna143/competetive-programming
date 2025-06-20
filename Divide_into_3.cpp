/***
 * Objective:
 * Distribute N toffees among 3 friends to minimize imbalance (max - min)
 *
 * Context:
 * Need to find the most balanced way to divide N toffees among 3 people
 * Imbalance = maximum toffees - minimum toffees given to any friend
 *
 * Constrains:
 * 3 ≤ N ≤ 10
 *
 * Note:
 * The optimal strategy is to distribute as evenly as possible
 *
 * TODO:
 * Algorithm || Pseudo-code || Steps -- Write here
 *
 * 1. If N is divisible by 3, give N/3 to each friend (imbalance = 0)
 * 2. If N % 3 == 1, give N/3 to two friends and N/3+1 to one friend (imbalance = 1)
 * 3. If N % 3 == 2, give N/3 to one friend and N/3+1 to two friends (imbalance = 1)
 *
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    // The most balanced distribution is to give as equal amounts as possible
    // If N is divisible by 3, everyone gets N/3 (imbalance = 0)
    // If N % 3 == 1, two people get N/3 and one gets N/3+1 (imbalance = 1)
    // If N % 3 == 2, one person gets N/3 and two get N/3+1 (imbalance = 1)

    if (N % 3 == 0)
    {
        cout << 0 << endl; // Everyone gets equal shares
    }
    else
    {
        cout << 1 << endl; // Difference between max and min is always 1
    }
}

int main()
{
    // Only one test case based on input format
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