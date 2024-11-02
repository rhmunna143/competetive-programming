/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: 
 * 
 * 1. Start
 * 2. Input Input will contain two integers A and B.
 * 3. Output Print a single integer representing the absolute difference between A and B.
 * 4. End
 * 
 * Note: Use pointers to solve this Problem.
 * 
 * Constrains:
 * 1. 0 <= A <= 100
 * 2. 0 <= B <= 100
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B;

    scanf("%d %d", &A, &B);

    int *ptrA = &A;

    int *ptrB = &B;

    printf("%d\n", abs(*ptrA - *ptrB));

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