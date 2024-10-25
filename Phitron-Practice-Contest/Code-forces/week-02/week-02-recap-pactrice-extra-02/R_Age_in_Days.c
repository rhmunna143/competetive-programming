/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ageInDays, daysInYear = 365, daysInMonth = 30;

    scanf("%d", &ageInDays);

    // print the age in years, months, and days separated by new line
    printf("%d years\n", ageInDays / daysInYear);
    printf("%d months\n", (ageInDays % daysInYear) / daysInMonth);
    printf("%d days\n", (ageInDays % daysInYear) % daysInMonth);

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