#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Salami variable declaration
    int SIZE, MAX = 0;

    // SIZE input
    scanf("%d", &SIZE);

    int salamis[SIZE];

    // Read the array of salamis
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &salamis[i]);
    }

    // Find the maximum salami
    for (int i = 0; i < SIZE; i++)
    {
        if (salamis[i] > MAX)
        {
            MAX = salamis[i];
        }
    }

    // Subtract the maximum salami from all the salamis array elements
    for (int i = 0; i < SIZE; i++)
    {
        salamis[i] = MAX - salamis[i];
    }

    // Salami output the array of new salamis array elements after subtracting the maximum salami
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", salamis[i]);
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