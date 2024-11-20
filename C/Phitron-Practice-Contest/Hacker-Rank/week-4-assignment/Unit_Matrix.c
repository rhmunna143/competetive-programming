/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.
 * 
 * 1. Start
 * 2. Input First line will contain N, the row and column of the square matrix.
 * 3. Then the N * N sized matrix will be given where the values are integer only.
 * 4. Ouput Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.
 * 5. End
 * 
 * Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.
 * 
 * Constrains:
 * 1. 1 <= N <= 100
 * 2. 0 <= Values <= 100
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isUnitMatrix = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                isUnitMatrix = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                isUnitMatrix = 0;
                break;
            }
        }
    }

    if (isUnitMatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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