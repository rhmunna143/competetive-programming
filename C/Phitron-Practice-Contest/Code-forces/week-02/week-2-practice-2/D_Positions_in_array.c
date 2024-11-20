#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d", &size);
    int array[size];

    // Read the number of elements
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // print array index of the element and the value of the element as A[i] = value if the value is less than or equal to 10
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= 10)
        {
            printf("A[%d] = %d\n", i, array[i]);
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