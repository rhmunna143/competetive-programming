/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given an array A of size N. Print the array elements after shifting all zeroes in array A to the right.
 *
 * 1. start
 * 2. input first line contains an integer N, that is the size of the array A.
 * 3. input second line contains N space-separated integers, that are the elements of the array A.
 * 4. output the array elements after shifting all zeroes in array A to the right.
 *
 * Note: Solve this problem using function.
 *
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. 0 <= A[i] <= 10^3
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void shiftZeros(int N, int A[])
{
    int i, j = 0;

    for (i = 0; i < N; i++)
    {
        if (A[i] != 0) // if the element is non-zero
        {
            A[j] = A[i]; // shifting non-zero elements to the left
            j++;
        }
    }

    while (j < N) // adding zeros to the right
    {
        A[j] = 0; // adding zeros to the right
        j++;
    }

    for (i = 0; i < N; i++) // printing the array elements after shifting all zeroes in array A to the right
    {
        printf("%d ", A[i]);
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i;
    scanf("%d", &N); // input the size of the array A

    int A[N]; // declaring an array A of size N

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]); // input the elements of the array A
    }

    shiftZeros(N, A); // calling the function to shift all zeros to the right

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