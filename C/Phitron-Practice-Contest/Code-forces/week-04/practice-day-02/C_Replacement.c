/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given a number N and an array A of N numbers. Print the array after doing the following operations:
    1. Replace every positive number by 1.
    2. Replace every negative number by 2.
 * 1. Start
 * 2. Input First line contains a number N (2 ≤ N ≤ 1000) number of elements.
 * 3. Input Second line contains N numbers (-10 pow(5)  ≤  Ai  ≤  10 pow (5)).
 * 4. Print the array after the replacement and it's values separated by space.
 * 5. End
 * Note:
 * 1. Declare a Dynamic Array
 * 2. Iterate through the array using pointer
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

    // input number of elements
    scanf("%d", &n);

    // declare dynamic array
    int *arr = (int *)malloc(n * sizeof(int));

    // input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // replace positive and negative numbers
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 2;
        }
    }

    // print array after replacement
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

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