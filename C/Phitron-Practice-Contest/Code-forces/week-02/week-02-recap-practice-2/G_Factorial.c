/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. declare variables t for test cases
 * 3. read input from user for t as test cases
 * 4. loop for t times
 * 5. declare variables n and factorial
 * 6. read input from user for n
 * 7. calculate the factorial of n
 * 8. print the factorial of n in a new line
 * 9. end
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
        int n;
        long long int factorial = 1;

        scanf("%d", &n);

        for (int j = 1; j <= n; j++)
        {
            factorial *= j;
        }

        printf("%lld\n", factorial);
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