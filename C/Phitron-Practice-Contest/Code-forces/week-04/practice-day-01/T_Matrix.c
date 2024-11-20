/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).
 * 1. Start
 * 2. Input First line contains a number N (1 ≤ N ≤ 100) described above.
 * 3. Input Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).
 * 4. Print the absolute difference between the summation of the matrix main diagonals.
 * 5. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the size of the 2D array
    int N;

    // input the size of the 2D array
    scanf("%d", &N);

    // declaring the 2D array
    int A[N][N];

    // input the 2D array elements
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // calculate the absolute difference between the summation of the matrix main diagonals
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < N; i++)
    {
        sum1 += A[i][i];
        sum2 += A[i][N - i - 1];
    }

    printf("%d\n", abs(sum1 - sum2));

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. Engr. in Computer Science, CSE
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */