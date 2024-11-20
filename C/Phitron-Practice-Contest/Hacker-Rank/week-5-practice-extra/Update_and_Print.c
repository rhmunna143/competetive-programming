/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
 *
 * 1. start
 * 2. input First line will contain N, the size of the array.
 * 3. input Second line will contain the array A.
 * 4. input Third line will contain X and V.
 * 5. Change the value of X'th index to V.
 * 6. Print the array in reverse way.
 * 7. End
 *
 * Note: use dynamic array to store the elements. use the function as explained above. use frequency array to count the number of elements. use frequency array to count the number of elements. Index starts from 0.
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 1 <= A[i] <= 100 ; where A[i] are the values of array A.
 * 3. 0 <= X < N
 * 4. 1 <= V <= 100
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function to change the value of X'th index to V
void change_value(int *A, int X, int V)
{
    A[X] = V;
}

// function to reverse the array and print it
void reverse_and_print_array(int *A, int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

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

    int X, V;
    scanf("%d %d", &X, &V);

    change_value(A, X, V);

    reverse_and_print_array(A, N);

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