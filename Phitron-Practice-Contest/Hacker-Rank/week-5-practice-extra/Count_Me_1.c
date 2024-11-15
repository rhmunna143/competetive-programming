/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.
 *
 * 1. start
 * 2. input First line will contain N, the size of the array.
 * 3. input Second line will contain the array A.
 * 4. Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3 space separated.
 * 5. End
 *
 * Note:
 * 1. Use frequency array to count the number of elements.
 * 2. Use dynamic array to store the elements.
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 0 <= A[i] <= 10^9; here 0 <= i < N
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

    // count the number of elements that are divided by 2 and 3
    int count2 = 0, count3 = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            count2++;
        }
        else if (A[i] % 3 == 0)
        {
            count3++;
        }
    }

    printf("%d %d\n", count2, count3);

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