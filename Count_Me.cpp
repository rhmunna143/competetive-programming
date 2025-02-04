/***
 * Objective:
 *
 * Context: You will be given a sentence S that contains words with lowercase and uppercase English alphabets separated by spaces. You need to determine which word occurs the most times and also provide the count of that word.
 *
 * Constrains:
 * 1. 1 <= |S| <= 10^4 here |S| is the length of the sentence
 * 2. 1 <= T <= 1000
 *
 * Note: If there are multiple words that occur the most, print the first word that reaches the maximum count before others.
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input T first line contain test cases
 * 3. input the first line of every test case contain sentence S
 * 4. Output the word and the count that occurs the most.
 * 5. end
 *
 */

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     cin.ignore(); // To consume the newline after T

//     while (T--)
//     {
//         string S;
//         getline(cin, S); // Read the entire line of the sentence

//         map<string, int> wordCount;
//         stringstream ss(S);
//         string word;

//         // Count the frequency of each word
//         while (ss >> word)
//         {
//             wordCount[word]++;
//         }

//         int maxCount = 0;
//         string maxWord;

//         // Find the word with the highest frequency
//         for (const auto &entry : wordCount)
//         {
//             if (entry.second > maxCount)
//             {
//                 maxCount = entry.second;
//                 maxWord = entry.first;
//             }
//         }

//         // Print the word with its count
//         cout << maxWord << " " << maxCount << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    cin.ignore(); // To consume the newline after T

    while (T--) {
        string S;
        getline(cin, S); // Read the entire sentence

        map<string, int> wordCount;
        stringstream ss(S);
        string word;

        // Count occurrences of each word
        while (ss >> word) {
            wordCount[word]++;
        }

        int maxCount = 0;
        string maxWord;

        // Determine the word with the maximum count
        for (const auto& entry : wordCount) {
            if (entry.second > maxCount) {
                maxCount = entry.second;
                maxWord = entry.first;
            }
        }

        // Output the result for the current test case
        cout << maxWord << " " << maxCount << endl;
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