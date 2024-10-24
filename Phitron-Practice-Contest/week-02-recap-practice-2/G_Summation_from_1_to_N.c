/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. declare variables n and sum
 * 3. read input from user for n
 * 4. calculate the sum of the numbers from 1 to n (inclusive) by using the formula n * (n + 1) / 2
 * 5. print the sum of the numbers from 1 to n (inclusive)
 * 6. end
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n;
    long long int sum = 0;

    scanf("%lld", &n);

    sum = n * (n + 1) / 2;

    printf("%lld", sum);

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