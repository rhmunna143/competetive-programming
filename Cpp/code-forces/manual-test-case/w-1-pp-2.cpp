/***
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // Allocate memory for array A
    int *A = new int[N];

    // Read array A
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;

    // Allocate memory for array B
    int *B = new int[M];

    // Copy elements from array A to array B
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    // Delete array A
    delete[] A;

    // Read the remaining elements of array B
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    // Print array B
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // Free memory for array B
    delete[] B;

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