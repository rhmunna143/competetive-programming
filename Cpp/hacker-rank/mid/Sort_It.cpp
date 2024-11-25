/***
 * Context: You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. -10^9 <= A[i] <= 10^9 Where 0 <= i < N
 *
 * Note:
 * 1.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain N.
 * 3. input Second line will contain N space-separated integers A[i].
 * 4. sort A in ascending order.
 * 5. print A.
 * 6. sort A in descending order.
 * 7. print A.
 * 8. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    // Dynamically allocating memory for the array
    int *A = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Sort the array in ascending order
    sort(A, A + N);

    // Print the array
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl; // New line

    // Sort the array in descending order
    sort(A, A + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    // Free the dynamically allocated memory
    delete[] A;

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