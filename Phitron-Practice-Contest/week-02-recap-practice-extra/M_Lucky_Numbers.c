/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. declare a, b
 * 3. read a, b
 * 4. numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.
 * 5. Print all lucky numbers between A and B inclusive separated by a space. If there is no lucky number print -1 (minus one)
 * 6. end
 * NOTE: Only one line containing two numbers A and B (1 <= A <= B <= 10 to the power 5) separated by a space.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to check if a number is lucky
int is_lucky(int num)
{
    while (num != 0)
    {
        int digit = num % 10;
        
        if (digit != 4 && digit != 7)
        {
            return 0; // Not a lucky number
        }
        num /= 10;
    }

    return 1; // Lucky number
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int found_lucky = 0;

    for (int i = a; i <= b; i++)
    {
        if (is_lucky(i))
        {
            printf("%d ", i);
            found_lucky = 1;
        }
    }

    if (!found_lucky)
    {
        printf("-1");
    }

    printf("\n");

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