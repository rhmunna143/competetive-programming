/***
 * Objective: Decode encoded strings
 *
 * Context: Strings are encoded as "a2b3c1" which decodes to "aabbbc"
 *          Each letter is followed by a digit indicating repetition count
 *
 * Constrains: Input may have multiple test cases
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string decoded = "";

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z'))
            {
                if (i + 1 < s.size() && (s[i + 1] >= '0' && s[i + 1] <= '9'))
                {
                    int count = s[i + 1] - '0';

                    for (int j = 0; j < count; j++)
                    {
                        decoded += s[i];
                    }

                    i++;
                }
                else
                {
                    decoded += s[i];
                }
            }
        }

        cout << decoded << endl;
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