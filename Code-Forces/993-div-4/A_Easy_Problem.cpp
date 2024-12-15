/***
 * Objective:
 *
 * Context: Cube is given an integer n. She wants to know how many ordered pairs of positive integers (a,b) there are such that a=n−b. Since Cube is not very good at math, please help her!
 *
 * Constrains:
 * 1. 1<=t<=99
 * 2. 2<=n<=100
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input t first line
 * 3. loop t times
 * 4. take input n
 * 5. for each test case, output the number of ordered pairs (a,b) on a new line.
 * 6. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << n - 1 << endl;
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