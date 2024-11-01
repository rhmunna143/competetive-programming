/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given two numbers X and Y, Print their summation. Use Pointers  and Dereferencing.
 * 1. Start
 * 2. Declare two integer variables X and Y
 * 3. Input Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).
 * 4. Declare two integer pointers p1 and p2
 * 5. Assign the address of X to p1 and Y to p2
 * 6. Print the summation of X and Y using pointers and dereferencing
 * 7. End
 * Note: Solve this problem using function.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function to sum two numbers using pointers and dereferencing
void sum(int *p1, int *p2)
{
    printf("%d\n", *p1 + *p2);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // declaring the variables
    int X, Y;
    scanf("%d %d", &X, &Y);

    // declaring the pointers
    int *p1 = &X, *p2 = &Y;

    // call the function to sum two numbers using pointers and dereferencing
    sum(p1, p2);

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