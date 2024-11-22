/***
 * Context: Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  <=  i < j  <=  N.
 * 
 * Constrains:
 * 1. 1 <= N <= 100
 * 2. -10 pow(6) <= Ai <= 10 pow(6)
 * 1 <= T <= 100
 * 
 * Note:
 * 1. using min() built-in function to find the minimum value.
 * 2. First Case :

All possibles (i,j) where (1  <=  i < j  <=  N) are :

i = 1 , j = 2 then result = a1 + a2 + j - i = 20 + 1 + 2-1 = 22.

i = 1 , j = 3 then result = a1 + a3 + j - i = 20 + 9 + 3-1 = 31.

i = 1 , j = 4 then result = a1 + a4 + j - i = 20 + 4 + 4-1 = 27.

i = 2 , j = 3 then result = a2 + a3 + j - i = 1 + 9 + 3-2 = 11.

i = 2 , j = 4 then result = a2 + a4 + j - i = 1 + 4 + 4-2 = 7.

i = 3 , j = 4 then result = a3 + a4 + j - i = 9 + 4 + 4-3 = 14.

So the smallest possible result is 7.



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
    int T;
    cin >> T;

    // for each test case
    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int min_sum = INT_MAX; // INT_MAX is a constant in C++ that defines the maximum value that an int can have.

        for (int i = 0; i < N; i++) 
        {
            for (int j = i + 1; j < N; j++) // i + 1 because i < j
            {
                min_sum = min(min_sum, A[i] + A[j] + j - i);
            }
        }

        cout << min_sum << endl;
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