#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Zeros and Ones variable declaration
    int SIZE, zeroCounter = 0, oneCounter = 0;
    scanf("%d", &SIZE);
    int numbers[SIZE];

    // Zeros and Ones input
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Zeros and Ones condition
    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == 0)
        {
            zeroCounter++;
        }
        else
        {
            oneCounter++;
        }
    }

    // Zeros and Ones output
    printf("%d %d", zeroCounter, oneCounter);

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