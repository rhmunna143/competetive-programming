/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given a number N Print "I love Recursion" N times.
 *
 * 1. start
 * 2. Input Only one line containing a number N
 * 3. output Print "I love Recursion" N times.
 * 4. End
 *
 * Note:  Solve this problem using recursion.
 *
 * Constrains:
 * 1. 1 <= N <= 100
 .
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("I love Recursion\n");

    recursion(n - 1);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    recursion(N);

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