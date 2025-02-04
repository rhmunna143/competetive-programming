/***
 * Objective: learning vector in C++ STL
 *
 * Context: You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 0 <= A[i] <= 10^9
 *
 * Note:
 * 1. using vector in C++ STL to store the array elements.
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
 * 7. sort the vector A
 * 8. for i = 0 to N-2
 * 9.     if A[i] == A[i+1]
 * 10.        print "YES"
 * 11.        break
 * 12. end for loop
 * 13. if i == N-1
 * 14.     print "NO"
 * 15. end if condition and end of the program
 * 16. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    bool is_duplicate = false;
    
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] == A[i + 1]) // is the current element equal to the next element
        {
            cout << "YES" << endl;
            is_duplicate = true;
            break;
        }
    }

    if (!is_duplicate)
    {
        cout << "NO" << endl;
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