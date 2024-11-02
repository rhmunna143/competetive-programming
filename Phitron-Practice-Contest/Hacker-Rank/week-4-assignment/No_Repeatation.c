/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You will be given an Array of N integers, print the count of numbers that have appeared only once.
 * 
 * 1. Start
 * 2. Input The first line will contain an integer N.
 * 3. Input The next line will contain N integers.
 * 4. Output Print a single integer,the count of numbers that have appeared only once in the array.
 * 5. End
 * 
 * Note: Using Frequency Array will be a good approach to solve this problem.
 * 
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 1 <= A[i] <= 10^5
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

    int *arr = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[100001] = {0};

    for (int i = 0; i < N; i++)
    {
        freq[arr[i]]++;
    }

    int count = 0;

    for (int i = 0; i < 100001; i++)
    {
        if (freq[i] == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);

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