/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. declare variables t, x, y, and sum
 * 2. read input from user for t as test cases
 * 3. loop for t times
 * 4. read input from user for x and y
 * 5. calculate the sum of the consecutive odd numbers between x and y (exclusive)
 * 6. print the sum of the consecutive odd numbers between x and y (exclusive) for each test case in a new line
 * 7. end
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x, y, sum = 0;

        scanf("%d %d", &x, &y);

        // swap x and y if x is greater than y
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);
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