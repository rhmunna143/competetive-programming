/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.
 * 1. Start
 * 2. Input First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
 * 3. Input Then the 2D matrix will be given.
 * 3. Input Then X lines will contain X integer Numbers.
 * 4. For each of the x integers print a single line with how many times that number have appeared.
 * 5. End
 * 
 * Constrains: 
    1. 2 <= N,M,X <= 100
    2. 0 <= Element <= 1000
    3. 0 <= Number <=1000
 * Note: 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);
    int matrix[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int num;
    int count = 0;

    for (int i = 0; i < X; i++)
    {
        scanf("%d", &num);
        count = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (matrix[j][k] == num)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
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