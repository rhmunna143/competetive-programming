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

    // find minimum of the array and the number of times it appears in the array
    int min = numbers[0], count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] < min) // find minimum number
        {
            min = numbers[i]; // store minimum number
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == min) // find minimum number
        {
            count++; // count the number of times the minimum number appears in the array
        }
    }

    // check the count even or odd if odd print "Lucky" otherwise print "Unlucky"
    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
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