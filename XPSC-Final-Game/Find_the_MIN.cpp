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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    vector<int> a;

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        else if (t == 2) // find and remove min
        {
            if (a.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int min = a[0];

                for (int i = 1; i < a.size(); i++)
                {
                    if (a[i] < min)
                    {
                        min = a[i];
                    }
                }

                cout << min << "\n";

                // remove the min element from the vector
                vector<int> new_a;

                for (int i = 0; i < a.size(); i++)
                {
                    if (a[i] != min)
                    {
                        new_a.push_back(a[i]);
                    }
                }

                // update the vector
                a = new_a;
            }
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