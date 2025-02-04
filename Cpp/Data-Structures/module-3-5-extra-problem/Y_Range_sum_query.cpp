/***
 * Objective: learning about data structure
 *
 * Context: Given 2 numbers N and Q, an array A of N number and Q number of pairs L , R. For each query Q print a single line that contains the summation of all numbers from index L to index R.
 *
 * Constrains:
 * 1. 1 <= N, Q <= 10^5
 * 2. 1 <= A[i] <= 10^9; Where 0 <= i < N
 * 3. 1 <= L, R <= N
 *
 * Note:
 * 1. use prefix sum technique to solve the problem in O(1) time complexity.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input N and Q first line
 * 3. create a vector A of size N
 * 4. input the array elements in the second line
 * 5. next Q lines will contain two integers L and R
 * 6. output the sum of all numbers from index L to index R
 * 7. end
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;

    cin >> N >> Q;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Create a prefix sum array
    vector<long long> prefix_sum(N + 1, 0);
    
    for (int i = 1; i <= N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + A[i - 1];
    }

    // Process each query
    for (int i = 0; i < Q; i++)
    {
        int L, R;

        cin >> L >> R;

        // Calculate the sum from L to R using the prefix sum array
        long long sum = prefix_sum[R] - prefix_sum[L - 1];
        cout << sum << endl;
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