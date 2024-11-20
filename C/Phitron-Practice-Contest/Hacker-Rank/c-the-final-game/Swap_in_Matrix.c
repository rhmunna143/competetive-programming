/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the matrix after doing the following operations. Firstly you will swap all the elements of the first column with the elements of the last column. After that you will swap the elements of the first row with elements of the last row.
 *
 * 1. start
 * 2. input first line N, M, the row and column of the matrix as space separated integers.
 * 3. input second line Then the N * M sized matrix will be given as input as 2d array.
 * 4. Firstly, swap all the elements of the first column with the elements of the last column.
 * 5. Secondly, swap the elements of the first row with elements of the last row.
 * 6. output print the matrix after doing the above operations.
 * 7. end
 *
 * Note: using 2D array and recursion.
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

// Function to swap the elements of the first column with the elements of the last column
void swapFirstAndLastColumn(int matrix[100][100], int n, int m, int i, int j)
{
    if (i == n)
    {
        return;
    }

    int temp = matrix[i][0];
    matrix[i][0] = matrix[i][m - 1];
    matrix[i][m - 1] = temp;

    swapFirstAndLastColumn(matrix, n, m, i + 1, 0);
}

// Function to swap the elements of the first row with the elements of the last row
void swapFirstAndLastRow(int matrix[100][100], int n, int m, int i, int j)
{
    if (j == m)
    {
        return;
    }

    int temp = matrix[0][j];
    matrix[0][j] = matrix[n - 1][j];
    matrix[n - 1][j] = temp;

    swapFirstAndLastRow(matrix, n, m, i, j + 1);
}

// Function to print the matrix
void printMatrix(int matrix[100][100], int n, int m, int i, int j)
{
    if (i == n)
    {
        return;
    }

    if (j == m)
    {
        printf("\n");
        printMatrix(matrix, n, m, i + 1, 0);
        return;
    }

    printf("%d ", matrix[i][j]);

    printMatrix(matrix, n, m, i, j + 1);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M;

    scanf("%d %d", &N, &M);

    int matrix[100][100];

    inputMatrix(matrix, N, M, 0, 0);

    swapFirstAndLastColumn(matrix, N, M, 0, 0);

    swapFirstAndLastRow(matrix, N, M, 0, 0);

    printMatrix(matrix, N, M, 0, 0);

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