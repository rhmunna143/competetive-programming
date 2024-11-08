/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given a number N. Print all numbers from N to 1 separated by a single space.
 *
 * 1. start
 * 2. input Only one line containing a number N
 * 3. Print from N to 1 separated by a single space
 * 4. End
 *
 * Note:
 * 1. Solve this problem using recursion
 * 2. Make sure don't print any leading or trailing spaces
 *
 * Constrains:
 * 1. 1<= N <= 10 pow(3)
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    print(n - 1);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    print(N);

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