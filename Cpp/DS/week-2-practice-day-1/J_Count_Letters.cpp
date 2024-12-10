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
    // Input string
    string s;
    cin >> s;

    int len = s.length();

    vector<int> occurrence_count(26, 0);

    // Loop through the string and increment the frequency array element by 1
    for (int i = 0; i < len; i++)
    {
        occurrence_count[s[i] - 'a']++;
    }

    // Print the frequency of all letters in the string `s`
    for (int i = 0; i < 26; i++)
    {
        if (occurrence_count[i] > 0)
        {
            cout << char(i + 'a') << " : " << occurrence_count[i] << endl;
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