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
    string S;
    getline(cin, S);

    // is a palindrome
    stack<char> s;
    queue<char> q;

    for (int i = 0; i < S.length(); i++)
    {
        s.push(S[i]);
        q.push(S[i]);
    }

    bool isPalindrome = true;

    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            isPalindrome = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (isPalindrome)
    {
        cout << "The word, " << S << ", is a palindrome." << endl;
    }
    else
    {
        cout << "The word, " << S << ", is not a palindrome." << endl;
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