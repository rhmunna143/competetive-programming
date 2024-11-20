/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.
 *
 * 1. start
 * 2. input First line will contain N, the row and M, the column of the matrix as space separated integers.
 * 3. input second line Then the N * M sized matrix will be given as input.
 * 4. output print "YES" if the matrix is Jadu Matrix, otherwise output print "NO" without the quotation marks.
 * 5. end
 *
 * Note:
 * 1. A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.
 * 2. A square matrix is a matrix where the number of rows and columns are equal.
 * 3. The primary diagonal is the diagonal that starts from the top left corner and ends at the bottom right corner.
 * 4. The secondary diagonal is the diagonal that starts from the top right corner and ends at the bottom left corner.
 * 5. solve this problem using 2D array and recursion.
 *
 * Constrains:
 * 1. 1 <= N, M <= 100
 * 2. 0 <= VALUES <= 100
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to input the matrix
void inputMatrix(int matrix[100][100], int n, int m, int i, int j)
{
    if (i == n)
    {
        return;
    }

    if (j == m)
    {
        inputMatrix(matrix, n, m, i + 1, 0);
        return;
    }

    scanf("%d", &matrix[i][j]);
    inputMatrix(matrix, n, m, i, j + 1);
}

// Function to check if the matrix is Jadu Matrix or not
int isJaduMatrix(int matrix[100][100], int n, int m, int i, int j)
{
    if (i == n)
    {
        return 1;
    }

    if (j == m)
    {
        return isJaduMatrix(matrix, n, m, i + 1, 0);
    }

    if (i == j && matrix[i][j] != 1)
    {
        return 0;
    }

    if (i + j == n - 1 && matrix[i][j] != 1)
    {
        return 0;
    }

    if (i != j && i + j != n - 1 && matrix[i][j] != 0)
    {
        return 0;
    }

    return isJaduMatrix(matrix, n, m, i, j + 1);
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[100][100];
    inputMatrix(matrix, N, M, 0, 0);

    if (N != M)
    {
        printf("NO\n");
    }
    else
    {
        if (isJaduMatrix(matrix, N, M, 0, 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
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