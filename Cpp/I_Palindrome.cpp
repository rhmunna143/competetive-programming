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

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    // n is a palindrome if it reads the same forwards and backwards
    // Convert n to a string to check if it is a palindrome
    string s = to_string(n);

    // Initialize the answer to "NO" by default
    string answer = "NO";

    // Check if the string is a palindrome
    // If it is, update the answer to "YES"
    if (s == string(s.rbegin(), s.rend())) {
        answer = "YES";
    }

    // Output the answer
    // Skip printing if the number starts with 0
    if (s[0] != '0') {
        cout << string(s.rbegin(), s.rend()) << endl;
    }
    cout << answer << endl;

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