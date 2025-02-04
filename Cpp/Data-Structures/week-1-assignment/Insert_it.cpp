/***
 * Objective: to learn about the insert operation in an array. basic data structure.
 *
 * Context: You will given an integer array A of size N and another array B of size M. Also you will be given an index X. You need to insert the whole array B to the index X of array A.
 *
 *
 * Constrains:
 * 1. 1 <= N, M <= 10^3
 * 2. 1 <= A[i], B[j] <= 10^3; Where 0 <= i < N and 0 <= j < M
 * 3. 0 <= X <= N
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input N first line
 * 3. create a vector A of size N
 * 4. input the array elements in the second line
 * 5. take input M third line third line
 * 6. create a vector B of size M
 * 7. input the array elements in the fourth line
 * 8. take input X fifth (last) line
 * 9. create a vector C of size N+M
 * 10. for i = 0 to X-1
 * 11.    C[i] = A[i]
 * 12. end for loop
 * 13. for i = 0 to M-1
 * 14.    C[X+i] = B[i]
 * 15. end for loop
 * 16. for i = X to N-1
 * 17.    C[M+i] = A[i]
 * 18. end for loop
 * 19. for i = 0 to N+M-1
 * 20.    print C[i]
 * 21. end for loop
 * 22. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;

    cin >> M;

    vector<int> B(M);

    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int X;

    cin >> X;

    vector<int> C(N + M);

    for (int i = 0; i < X; i++)
    {
        C[i] = A[i]; // insert A[i] to C[i]
    }

    for (int i = 0; i < M; i++)
    {
        C[X + i] = B[i]; // insert B[i] to C[X+i]
    }

    for (int i = X; i < N; i++)
    {
        C[M + i] = A[i]; // insert A[i] to C[M+i]
    }

    for (int i = 0; i < N + M; i++)
    {
        cout << C[i] << " ";
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