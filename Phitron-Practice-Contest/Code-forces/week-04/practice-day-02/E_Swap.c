/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Context: Given two numbers X and Y. Print X and Y after swapping them. Solve this problem using function.
 * 1. Start
 * 2. Declare two integer variables X and Y
 * 3. Input Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 10 pow(5)).
 * 4. Print X and Y separated by a space after swapping.
 * 5. End
 * Note: Use Pointers  and Dereferencing
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function to swap two numbers using pointers and dereferencing
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the variables
    int X, Y;

    // input the numbers
    scanf("%d %d", &X, &Y);

    // declaring the pointers
    int *p1 = &X, *p2 = &Y;

    // call the function to swap two numbers using pointers and dereferencing
    swap(p1, p2);

    // print the swapped numbers
    printf("%d %d\n", X, Y);

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