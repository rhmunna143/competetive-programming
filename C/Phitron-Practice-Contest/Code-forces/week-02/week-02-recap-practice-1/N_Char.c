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
    // Variable Declaration
    char ch;

    // Input
    scanf("%c", &ch);

    // check the character is lowercase or uppercase
    if (ch >= 'a' && ch <= 'z')
    {
        // convert the character lowercase to uppercase
        printf("%c", ch - 32);

    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        // convert the character uppercase to lowercase
        printf("%c", ch + 32);
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