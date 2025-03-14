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
    int n;

    scanf("%d", &n);

    // print all prime numbers from 2 to n
    for (int i = 2; i <= n; i++)
    {
        int is_prime = 1;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", i);
        }
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