/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given a number N and an array A of N numbers. Print the absolute summation of these numbers. absolute value : means to remove any negative sign in front of a number. EX : |-5| = 5 , |7| = 7
 * 1. Start
 * 2. Input First line contains a number N (1 ≤ N ≤ 10 pow(5)) number of elements.
 * 3. Input Second line contains N numbers (-10 pow(9)  ≤  Ai  ≤  10 pow(9)).
 * 4. Print the absolute summation of these numbers.
 * 5. End
 * Note: 1. Use a dynamic array (use library function to manage memory such as: alloc, malloc, free etc. where need) 2. Iterate through the array using pointer
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declare variables
    int n, i;
    long long int sum = 0;

    // input number of elements
    scanf("%d", &n);

    // declare dynamic array
    int *arr = (int *)malloc(n * sizeof(int));

    // input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calculate sum of elements
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // print absolute value of the sum
    printf("%lld\n", llabs(sum));

    // free memory
    free(arr);

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