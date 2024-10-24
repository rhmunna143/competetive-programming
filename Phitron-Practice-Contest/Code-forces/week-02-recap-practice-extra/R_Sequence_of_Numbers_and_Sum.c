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
    int n, m;

    // read multiple lines of input for n and m
    while (scanf("%d %d", &n, &m) != EOF)
    {
        // terminate if one of the input is negative or zero
        if (n <= 0 || m <= 0)
        {
            break;
        }

        // if n is greater than m, swap n and m
        if (n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }

        // calculate the sum of n to m
        int sum = 0;

        for (int i = n; i <= m; i++)
        {
            printf("%d ", i);
            sum += i;
        }

        // print the sum
        printf("sum =%d\n", sum);
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