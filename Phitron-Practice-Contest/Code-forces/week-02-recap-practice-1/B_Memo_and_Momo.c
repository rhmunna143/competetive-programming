/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Start
 * 2. Declare variables n, m, and k for the number of Memo's and Momo's and the number of days
 * 3. Read input from user for n, m, and k. m and n is positive integers and k is a non-negative integer
 * 4. Calculate the result based on the given formula
 * 5. Print the result
 * 6. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int m, n, k;
    scanf("%lld %lld %lld", &m, &n, &k);

    if (n % k == 0 && m % k == 0)
    {
        printf("Both");
    }
    else if (m % k == 0 && n % k != 0)
    {
        printf("Memo");
    }
    else if (n % k == 0 && m % k != 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
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