/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.
 * 1. Start
 * 2. Input First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.
 * 3. Input Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105) for the 2D array elements.
 * 4. Input Last line contains a number X (0 ≤ X ≤ 10 to the power 5) described above.
 * 5. Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".
 * 6. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the size of the 2D array and the Query element
    int N, M, X;

    // input the size of the 2D array and the Query element
    scanf("%d %d", &N, &M);

    // declaring the 2D array
    int A[N][M];

    // input the 2D array elements
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // input the Query element
    scanf("%d", &X);

    // search the Query element in the 2D array
    int found = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == X)
            {
                found = 1;
                break;
            }
        }
    }

    // print the result
    if (found)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    
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