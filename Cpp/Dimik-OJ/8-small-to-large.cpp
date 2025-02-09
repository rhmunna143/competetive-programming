/***
 * Objective:
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
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    for(int i =1; i<=t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int first, middle, last;

        if (a > b && a > c)
        {
            first = a;
            if (b > c)
            {
                middle = b;
                last = c;
            }
            else
            {
                middle = c;
                last = b;
            }
        }
        else if (b > a && b > c)
        {
            first = b;
            if (a > c)
            {
                middle = a;
                last = c;
            }
            else
            {
                middle = c;
                last = a;
            }
        }
        else
        {
            first = c;
            if (a > b)
            {
                middle = a;
                last = b;
            }
            else
            {
                middle = b;
                last = a;
            }
        }

        if (i < t) {
            cout << "Case " << i << ": " << last << " " << middle << " " << first << endl;
        } else {
            cout << "Case " << i << ": " << last << " " << middle << " " << first;
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