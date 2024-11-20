/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.
 *
 * 1. start
 * 2. Input will contain N.
 * 3. Loop from 1 to N.
 * 4. Check if the current number is divisible by 3 and 7.
 * 5. If true then print the number.
 * 6. End
 *
 * Note:
 *
 * Constrains:
 * 1. 21 <= N <= 10000
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

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