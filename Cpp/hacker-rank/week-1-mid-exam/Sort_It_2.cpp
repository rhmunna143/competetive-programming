/***
 * Context: You will be given an array A and the size of that array N. You need to create a function named sort_it(). After taking the input for the size in main function, call that function by giving the size as parameter and take the array input inside that function. After that, you need to sort the array in descending order. Then, return that array from the function and receive it in the main function. Finally, print the sorted array in the main function.
 *
 * 
 * Constrains: 
 * 1. 1 <= N <= 10^5
 * 2. -10^9 <= A[i] <= 10^9 Where 0 <= i < N
 * 
 * Note:
 * 1. need to create a function named sort_it() that will take the size of the array as parameter and return the sorted array.
 * 2. need to dynamically allocate memory for the array.
 * 3. need to sort the array in descending order.
 * 4. need to delete the dynamically allocated memory after printing the array.
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain N.
 * 3. input Second line will contain the array A.
 * 4. output print the array in descending order.
 * 5. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n, greater<int>());

    return array;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    int *sorted_array = sort_it(N);

    for (int i = 0; i < N; i++)
    {
        cout << sorted_array[i] << " ";
    }

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */