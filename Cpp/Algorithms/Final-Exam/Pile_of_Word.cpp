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
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (a.length() != b.length())
        {
            cout << "NO" << endl;
            continue;
        }

        int freq[26] = {0};

        for (char c : a)
        {
            freq[c - 'a']++;
        }

        for (char c : b)
        {
            freq[c - 'a']--;
        }

        bool isAnagram = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                isAnagram = false;
                break;
            }
        }

        cout << (isAnagram ? "YES" : "NO") << endl;
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