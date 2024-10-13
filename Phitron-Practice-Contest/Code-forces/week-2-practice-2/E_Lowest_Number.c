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

    /**
     * print the lowest number in the array
     * and the index of the lowest number
     * if there are multiple lowest numbers
     * print the index of the first occurrence
     */

    // Declare a variable to store the minimum number
    int min = array[0];
    int index = 1;

    // Find the minimum number and its index
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            if (i == 0)
            {
                index = 1;
            }
            else
            {
                index = i + 1;
            }
        }
    }

    // Print the minimum number and its index
    printf("%d %d\n", min, index);

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