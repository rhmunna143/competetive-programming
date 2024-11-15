/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

 For Example:
 If the input is
    6
    10 20 30 40 50 60

    You need to print 60 40 20 as their indexes are 5 3 1 respectively.
 *
 * 1. start
 * 2. Take input N
 * 3. Take input N elements in an array A
 * 4. Loop through the array A from N-1 to 0 with decrement of 2 (the odd indexes)
 * 5. Print the value of A[i]
 * 6. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 1 <= A[i] <= 1000 ; where A[i] are the values of array A.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int *A = (int *)malloc(N * sizeof(int));

    // input the array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // print the values at odd indexes in reverse order
    for (int i = N - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", A[i]);
        }
    }

    printf("\n");

    // free the dynamic array
    free(A);

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