/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You are given an integer N. Your task is to find the sum of all even numbers from 1 to N (inclusive).
 *
 * 1. start
 * 2. input A single integer N.
 * 3. output Print a single integer representing the sum of all even numbers from 1 to N.
 * 4. end
 *
 * Note:
 *
 * Constrains: 1 <= N <= 1000
 *
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

    int sum = 0;

    for (int i = 2; i <= N; i += 2)
    {
        sum += i;
    }

    printf("%d\n", sum);

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