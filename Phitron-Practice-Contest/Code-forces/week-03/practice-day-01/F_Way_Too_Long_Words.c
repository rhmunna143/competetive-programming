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
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char word[101];
        scanf("%s", word);

        int length = strlen(word);

        if (length > 10) // too long word
        {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
            // 1st char, length - 2, last char
        }
        else
        {
            printf("%s\n", word);
        }
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