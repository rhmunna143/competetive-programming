/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be 32 bit integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.
 *
 * 1. start
 * 2. input First line will contain N, the size of the array.
 * 3. input Second line will contain the array A.
 * 4. Call the function count_before_one() and pass the array and size of the array.
 * 5. Print the return value of the function.
 * 6. End
 *
 * Note: use dynamic array to store the elements. use the function as explained above. use frequency array to count the number of elements.
 *
 * Constrains:
 * 1. 1 <= N <= 1000
 * 2. 0 <= A[i] <= 1000; Here 0 <= i < N
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int *A, int N)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            break;
        }
        count++;
    }

    return count;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    int *A = (int *)malloc(N * sizeof(int));

    // input the array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // count the number of elements before 1
    int count = count_before_one(A, N);

    printf("%d\n", count);

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