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
    int SIZE, lowerRange, upperRange, count = 0;
    scanf("%d %d %d", &SIZE, &lowerRange, &upperRange);

    int prices[SIZE];

    // take input of prices
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &prices[i]);
    }

    // count the prices within the range
    for (int i = 0; i < SIZE; i++)
    {
        if (prices[i] >= lowerRange && prices[i] <= upperRange)
        {
            count++;
        }
    }

    printf("%d", count);

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