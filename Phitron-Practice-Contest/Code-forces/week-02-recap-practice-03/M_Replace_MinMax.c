/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int SIZE;
    scanf("%d", &SIZE);

    int numbers[SIZE];

    // Read input from user
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // find minimum and maximum number and swap them
    int min = numbers[0], max = numbers[0], minIndex = 0, maxIndex = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] < min) // find minimum number
        {
            min = numbers[i]; // store minimum number
            minIndex = i;     // store minimum number index
        }
        if (numbers[i] > max) // find maximum number
        {
            max = numbers[i]; // store maximum number
            maxIndex = i;     // store maximum number index
        }
    }

    // swap minimum and maximum number
    int temp = numbers[minIndex];
    numbers[minIndex] = numbers[maxIndex];
    numbers[maxIndex] = temp;

    // print the array after swapping
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
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