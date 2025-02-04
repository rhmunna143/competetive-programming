/***
 * Objective:
 *
 * Context: You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.
 *
 * Constrains:
 * 1. 1 <= N <= 20
 *
 * Note:
 * 1. using nested loop and if else lader to print the pattern
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input N
 * 3. loop for rows
 * 4.     loop for columns
 * 5.         if i == j or i + j == N - 1
 * 6.             if i == j and i + j == N - 1
 * 7.                 print "X"
 * 8.             else
 * 9.                 print (i == j ? "\\" : "/")
 * 10.         else
 * 11.             print " "
 * 12.     end inner loop
 * 13.     print new line
 * 14. end outer loop
 * 15. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    cin >> N;

    // loop for rows
    for (int i = 0; i < N; i++)
    {

        // loop for columns
        for (int j = 0; j < N; j++)
        {   
            
            if (i == j || i + j == N - 1)
            {
                
                if (i == j && i + j == N - 1)
                {
                    cout << "X";
                }
                else
                {
                    cout << (i == j ? "\\" : "/");
                }
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
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