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

// 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;
    cin.ignore();  // To handle the newline after the number of queries
    while (query--)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;

        // Count the frequency of each word
        while (ss >> word)
        {
            mp[word]++;
             if (mp[word] == 1) {
                mp.insert({word, 1});
            }
        }

        int max_count = 0;
        string max_word;

        // Use a new stringstream to maintain the order of appearance
        stringstream ss1(s);
        while (ss1 >> word)
        {
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                max_word = word;
            }
        }

        cout << max_word << " " << max_count << endl;
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