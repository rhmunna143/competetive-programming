/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given an array A of size N. Print the minimum and the maximum number in the array.
 *
 * 1. start
 * 2. input first line contains an integer N, that is the size of the array A.
 * 2. input second line contains N space-separated integers, that are the elements of the array A.
 * 3. output Print the minimum and the maximum number separated by a space.
 * 4. end
 *
 * Note:
 * 1. Solve this problem using function.
 * 2. Send the array to a function to find max and min.
 * 3. Use functions to find max and min of two values
 *
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. 0 <= A[i] <= 10^5
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void maxMin(int N, int A[])
{
    int i, max = A[0], min = A[0];

    for (i = 1; i < N; i++) // finding the maximum and minimum number in the array
    {
        if (A[i] > max) // finding the maximum number in the array
        {
            max = A[i]; // storing the maximum number in the array
        }

        if (A[i] < min) // finding the minimum number in the array
        {
            min = A[i]; // storing the minimum number in the array
        }
    }

    printf("%d %d", min, max);
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

    maxMin(N, A); // sending the array to a function to find max and min

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