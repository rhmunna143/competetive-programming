/***
 * Context: Given a number N and an array A of N numbers. Print the numbers after sorting them.
 *
 * Constrains:
 * 1. 0 <= N <= 10 pow(3)
 * 2. -100 <= Ai <= 100
 *
 * Note:
 * 1. do not use builtin function
 * 2. trying to use bubble sort or selection sort
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input N
 * 3. take input N numbers
 * 4. for i = 0 to N-1 do the following steps
 * 5. for j = 0 to N-i-1 do the following steps
 * 6. if A[j] > A[j+1] then swap A[j] and A[j+1]
 * 7. end if
 * 8. end for
 * 9. end for
 * 10. print the sorted array
 * 11. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
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