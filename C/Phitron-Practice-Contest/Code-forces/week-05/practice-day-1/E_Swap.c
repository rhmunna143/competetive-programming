/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given two numbers X and Y. Print X and Y after swapping them.
 *
 * 1. Start
 * 2. Input Only one line contains two numbers X and Y
 * 3. output swap X and Y and print them space separated.
 * 4. End
 *
 * Note:  Solve this problem using function.
 *
 * Constrains:
 * 1. X and Y (0 ≤ X, Y ≤ 10 pow(5))
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("%d %d\n", x, y);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int X, Y;
    scanf("%d %d", &X, &Y);

    swap(X, Y);

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