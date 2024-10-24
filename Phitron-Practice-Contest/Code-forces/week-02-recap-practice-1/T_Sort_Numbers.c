/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Start
 * 2. declare a, b, c
 * 3. read a, b, c
 * 4. sort a, b, c in ascending order
 * 5. print a, b, c in ascending order separated by newline
 * 6. print a blank line
 * 7. print a, b, c in the order they were read separated by newline
 * 8. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && b <= c)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", a, b, c, a, b, c);
    }
    else if (a <= c && c <= b)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", a, c, b, a, b, c);
    }
    else if (b <= a && a <= c)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", b, a, c, a, b, c);
    }
    else if (b <= c && c <= a)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", b, c, a, a, b, c);
    }
    else if (c <= a && a <= b)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", c, a, b, a, b, c);
    }
    else if (c <= b && b <= a)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d", c, b, a, a, b, c);
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