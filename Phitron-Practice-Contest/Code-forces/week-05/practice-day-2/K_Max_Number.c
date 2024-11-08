/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given a number N and an array A of N numbers. Print the maximum value in this array.
 *
 * 1. start
 * 2. input first line contains an integer N, that is the size of the array A.
 * 3. input second line contains N space-separated integers, that are the elements of the array A.
 * 4. output the maximum value in this array.
 * 5. end
 *
 * Note: Solve this problem using recursion.
 *
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. -10^9 <= A[i] <= 10^9
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int N, int A[], int i)
{
    if (i == N - 1) // base case when the last element of the array is reached
    {
        return A[i]; // return the last element of the array
    }

    int maxElement = max(N, A, i + 1); // recursive case

    // return the maximum of the current element and the maximum element of the rest of the array
    if (A[i] > maxElement)
    {
        return A[i];
    }
    else
    {
        return maxElement;
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

    printf("%d", max(N, A, 0)); // output the maximum value in this array

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