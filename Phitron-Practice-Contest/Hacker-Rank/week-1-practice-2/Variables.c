#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // Declare second integer, double, and String variables.
    int a;
    long long int b;
    float c;
    char d;

    // Read and save an integer, double, and String to your variables.
    scanf("%d %lld %f", &a, &b, &c);
    getchar();
    scanf("%c", &d);

    // Print these variables on new lines.
    printf("%d\n%lld\n%.2f\n%c\n", a, b, c, d);

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
 * Portfolio: https://munna-dev.web.app
 * Facebook: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */