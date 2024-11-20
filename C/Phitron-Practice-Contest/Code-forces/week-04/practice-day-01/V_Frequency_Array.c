/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Start
 * 2. Input the size of the array N
 * 3. Input the upper limit element M to find the frequency (space separated input N M)
 * 4. Input the array elements (space separated input)
 * 5. Declare a frequency array of size 1000 and initialize all elements to 0
 * 6. Loop through the array elements and increment the frequency array element by 1
 * 7. Print the frequency of the Query element M
 * 8. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the size of the array and the Query element
    int N, M;

    // input the size of the array and the upper limit element
    scanf("%d %d", &N, &M);

    // declaring the array
    int A[N];

    // input the array elements
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // declaring the frequency array
    int F[M + 1];
    memset(F, 0, sizeof(F));

    // loop through the array elements and increment the frequency array element by 1
    for (int i = 0; i < N; i++)
    {
        F[A[i]]++;
    }

    // print the frequency (occurrence: each element appears how many times) of all elements in the array A where the upper limit element is M
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", F[i]);
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