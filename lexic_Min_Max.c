/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. input three strings
 * 3. compare the strings and print the lexicographically smallest and largest strings
 * 4. print the smallest and largest strings in separate lines
 * 5. end
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s1[1000], s2[1000], s3[1000];
    scanf("%s %s %s", s1, s2, s3);

    // comparing the strings and finding the lexicographically smallest and largest strings and printing in new lines

    // For the smallest string
    if (strcmp(s1, s2) <= 0 && strcmp(s1, s3) <= 0)
    {
        printf("%s\n", s1);
    }
    else if (strcmp(s2, s1) <= 0 && strcmp(s2, s3) <= 0)
    {
        printf("%s\n", s2);
    }
    else
    {
        printf("%s\n", s3);
    }

    // For the largest string
    if (strcmp(s1, s2) >= 0 && strcmp(s1, s3) >= 0)
    {
        printf("%s\n", s1);
    }
    else if (strcmp(s2, s1) >= 0 && strcmp(s2, s3) >= 0)
    {
        printf("%s\n", s2);
    }
    else
    {
        printf("%s\n", s3);
    }

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