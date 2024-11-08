/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given a number N. Print log sub(2) of N.
 *
 * 1. start
 * 2. input only one line containing a number N.
 * 3. output print log sub(2) of N.
 * 4. end
 *
 * Note: Solve this problem using recursion.
 *
 * Constrains:
 * 1. 1 <= N <= 10^18
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long custom_log2(long long N)
{
    if (N == 1) // base case when N is 1
    {
        return 0; // return 0
    }

    return 1 + custom_log2(N / 2); // recursive case to calculate log sub(2) of N
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long N;
    scanf("%lld", &N); // input the number N

    printf("%lld", custom_log2(N)); // output print log sub(2) of N

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */