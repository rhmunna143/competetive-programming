/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the values of last row and then print the values of last column in the order they were given.
 *
 * 1. start
 * 2. Take input N and M
 * 3. Take input N * M elements in a 2D matrix A
 * 4. Loop through the range of M and print the values of the last row (First line will contain the values of last row.)
 * 5. Loop through the range of N and print the values of the last column (Second line will contain the values of last column.)
 * 6. End
 *
 * Note:
 *
 * Constrains:
 * 1. 2 <= N,M <= 100
 * 2. 0 <= Element <= 100
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];

    // input the 2D matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // print the values of the last row
    for (int i = 0; i < M; i++)
    {
        printf("%d ", A[N - 1][i]);
    }

    printf("\n");

    // print the values of the last column
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i][M - 1]);
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