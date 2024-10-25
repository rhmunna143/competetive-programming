/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. declare n as a positive integer
 * 3. read input from user for n
 * 4. first loop for n times for the number of rows
 * 5. loop for print spaces increment by 2 for each row
 * 6. third loop for print * for the first row and increment the number of * by 2 for each row
 * 7. reverse step 4 to 6 for the second half of the W shape
 * 8. end
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Upper part of the diamond
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            printf(" "); // Print spaces
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" "); // Print spaces
        }
        for (int k = 0; k < 2 * (N - i - 1) + 1; k++)
        {
            printf("*"); // Print stars
        }
        printf("\n");
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