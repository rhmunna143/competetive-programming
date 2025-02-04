/***
 * Objective: to learn about the prefix sum array. the prefix sum array is an array of the same size as the original array, where the ith element of the prefix sum array is the sum of the first i elements of the original array.
 *
 * Context: You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 1 <= A[i] <= 10^9; Where 0 <= i < N
 *
 * Note:
 * 1. using vector in C++ STL to store the array elements.
 * 2. using vector in C++ STL to store the prefix sum array.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input N
 * 3. create a vector A of size N
 * 4. for i = 0 to N-1
 * 5.     take input A[i]
 * 6. end for loop
 * 7. create a vector prefix_sum of size N
 * 8. prefix_sum[0] = A[0]
 * 9. for i = 1 to N-1
 * 10.    prefix_sum[i] = prefix_sum[i-1] + A[i]
 * 11. end for loop
 * 12. for i = N-1 to 0
 * 13.    print prefix_sum[i]
 * 14. end for loop
 * 15. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int N;

    cin >> N;

    vector<long long int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<long long int> prefix_sum(N);

    prefix_sum[0] = A[0];

    for (int i = 1; i < N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
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