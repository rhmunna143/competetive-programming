/***
 * Objective: Check if three given side lengths can form a valid triangle
 *
 * Context: Three lengths A, B, and C can form a valid non-degenerate triangle
 * if and only if each of the following conditions hold:
 * A + B > C
 * B + C > A
 * A + C > B
 *
 * Constrains: 1 ≤ A, B, C ≤ 10
 *
 * TODO:
 * 1. Read three integers A, B, C
 * 2. Check if all three triangle inequality conditions are met
 * 3. Output "Yes" if valid triangle, "No" otherwise
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    // Check all three triangle inequality conditions
    if (A + B > C && B + C > A && A + C > B)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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