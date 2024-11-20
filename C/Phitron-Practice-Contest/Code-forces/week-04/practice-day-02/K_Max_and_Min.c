/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
 * 1. Start
 * 2. Input Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 10 pow(5))
 * 3. Print the minimum number followed by a single space then print the maximum number.
 * 4. End
 * Note: Use Pointers  and Dereferencing
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the variables
    int A, B, C;

    // input the numbers
    scanf("%d %d %d", &A, &B, &C);

    // declaring the pointers
    int *p1 = &A, *p2 = &B, *p3 = &C;

    // find the minimum number
    int min = *p1;

    if (*p2 < min)
    {
        min = *p2;
    }
    if (*p3 < min)
    {
        min = *p3;
    }

    // find the maximum number
    int max = *p1;

    if (*p2 > max)
    {
        max = *p2;
    }
    if (*p3 > max)
    {
        max = *p3;
    }

    // print the minimum and maximum numbers
    printf("%d %d\n", min, max);

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