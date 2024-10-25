#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size, position = -1;
    long long searchingElement;

    // Read the number of elements
    scanf("%d", &size);
    long long array[size];

    // Read the elements of the array
    for (int i = 0; i < size; i++)
    {
        scanf("%lld", &array[i]);
    }

    // Read the element to search for
    scanf("%lld", &searchingElement);

    // Search the element in the array
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchingElement)
        {
            position = i;
            break;
        }
    }

    // Print the position of the element
    printf("%d\n", position);

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