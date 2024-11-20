/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You will be given N integer Numbers. You will initially declare an array with length 1. After taking input of each numbers you will insert the number in the end and increase the array length by one. Finally, print all N numbers in the array in a single line, separated by spaces.
 * 
 * 1. Start
 * 2. Input The first line will contain an integer N, the number of elements.
 * 3. Input The second line will contain N integers.
 * 4. Output Print the array of N integers in a single line, with all the elements separated by spaces.
 * 5. End
 * 
 * Note: The solution must be implemented with dynamic array.
 * 
 * Constrains:
 * 1. 1 <= N <= 1000
 * 2. 1 <= Each integers <= 10^9
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int));

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = num;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    
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