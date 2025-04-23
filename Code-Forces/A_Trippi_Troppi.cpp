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
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t - MOVED OUTSIDE THE LOOP

    while(t--)
    {
        string full_sentence;
        getline(cin, full_sentence); // Read the entire line including spaces

        string abbreviation_by_first_letter = ""; // Initialize the abbreviation string

        stringstream ss(full_sentence); // Create a stringstream object to parse the sentence
        string word;

        while(ss >> word) // Extract words from the sentence
        {
            abbreviation_by_first_letter += word[0]; // Append the first letter of each word to the abbreviation string
        }

        cout << abbreviation_by_first_letter << endl; // Output the abbreviation    
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