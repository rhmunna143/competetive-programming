/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given two numbers X and Y, Print their summation.
 *
 * 1. Start
 * 2. Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 10 pow(5)).
 * 3. Print the sum of X and Y.
 * 4. End
 *
 * Note: Solve this problem using function.
 *
 * Constrains:
 * 1. X and Y (0 ≤ X, Y ≤ 10 pow(5))
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("%d\n", add(X, Y));

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