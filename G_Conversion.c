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
    char STRING[100005];
    scanf("%s", STRING);

    // replace "," with " " and "a" with "A", and "z" with "Z" "A" with "a", and "Z" with "z"
    for (int i = 0; i < strlen(STRING); i++)
    {
        if (STRING[i] == ',')
        {
            STRING[i] = ' ';
        }
        else if (STRING[i] >= 'a' && STRING[i] <= 'z')
        {
            STRING[i] = STRING[i] - 32;
        }
        else if (STRING[i] >= 'A' && STRING[i] <= 'Z')
        {
            STRING[i] = STRING[i] + 32;
        }
    }

    printf("%s", STRING);

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

// char = 1 byte = 8 bits