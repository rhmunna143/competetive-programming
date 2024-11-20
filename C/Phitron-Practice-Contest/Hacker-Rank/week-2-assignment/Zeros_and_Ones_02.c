#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Zeros and Ones 02's variable declaration
    int SIZE, POSITION;

    // Zeros and Ones 02's SIZE input
    scanf("%d", &SIZE);

    int numbers[SIZE];

    // Read the array of numbers
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Zeros and Ones 02's POSITION input
    scanf("%d", &POSITION);

    // Toggling the POSITION_th element of the array if 0 then 1, if 1 then 0
    for (int i = 0; i < SIZE; i++)
    {
        if (i + 1 == POSITION)
        {
            if (numbers[i] == 0)
            {
                numbers[i] = 1;
            }
            else
            {
                numbers[i] = 0;
            }
        }
    }

    // Zeros and Ones 02's output the array of new numbers
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