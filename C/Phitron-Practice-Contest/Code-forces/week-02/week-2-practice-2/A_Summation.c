#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    long long sum = 0; // Use long long to handle large sums

    // Read the number of elements
    scanf("%d", &size);
    int array[size];

    // Read the elements of the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Compute the sum of the elements
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    // Print the absolute value of the sum
    printf("%lld\n", llabs(sum));

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