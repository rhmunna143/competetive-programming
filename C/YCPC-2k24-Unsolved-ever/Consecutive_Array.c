/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You have an array of n numbers.In one operation,you can change any element of the array.You have to find the minimum number of operation you need to make the elements of the array consecutive.
 * 
 * 1. Start
 * 2. Input First line of input contains an integer t, number of test cases.
 * 3. Input First line of each test case contains an integer n the number of elements in the array.
 * 4. Input Second line of each test case consists n space integers the elements of the array.
 * 5. Output For each test case Output an integer,the minimum number of operation you need to make the elements of the array consecutive.
 * 6. End
 * 
 * Note:  Consecutive means for all i from 1 to n, a[i+1] = a[i] + 1. For example:[2,3,4,5,6]]
 * 
 * Constrains:
 * 1. 1 <= t <= 1 * 10 pow(4)
 * 2. 1 <= n <= 2 * 10 pow(5)
 * 3. 1 <= a[i] <= 10 pow(6)
 * 4. Summation of n over all test cases doesn't exceed 2 * 10 pow(5)
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Declaring variables
    int t, n, i, j, count, max, min, a[200001];

    // Input
    scanf("%d", &t);

    // Loop for test cases
    while (t--)
    {
        // Input
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // Sorting the array
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        // Counting the minimum number of operation
        count = 0;
        max = a[0];
        min = a[0];
        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        count = max - min - n + 1;

        // Output
        printf("%d\n", count);
    }

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
