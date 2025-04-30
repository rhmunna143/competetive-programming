/***
 * Objective:
 * Find the nearest multiple of 3 to a given positive integer N.
 * 
 * Context:
 * The nearest multiple is the one that minimizes |N - X|,
 * where X is a multiple of 3.
 * 
 * Constraints:
 * 1 ≤ N ≤ 10
 * 
 * Algorithm:
 * 1. Calculate the remainder when N is divided by 3
 * 2. Based on the remainder:
 *    - If remainder = 0: N is already a multiple of 3
 *    - If remainder = 1: The nearest multiple is (N - 1)
 *    - If remainder = 2: The nearest multiple is (N + 1)
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    
    int remainder = N % 3;
    
    if (remainder == 0) {
        // N is already a multiple of 3
        cout << N << endl;
    } else if (remainder == 1) {
        // Previous multiple of 3 is closer
        cout << (N - 1) << endl;
    } else { // remainder == 2
        // Next multiple of 3 is closer
        cout << (N + 1) << endl;
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