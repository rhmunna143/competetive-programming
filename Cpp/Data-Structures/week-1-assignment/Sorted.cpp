/***
 * Objective: to learn about the sorted array. vector in C++ STL. basic data structure.
 *
 * Context: You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 0 <= A[i] <= 1000; Where 0 <= i < N
 * 3. 1 <= T <= 1000
 *
 * Note:
 *  1. using vector in C++ STL to store the array elements.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input T (number of test cases) first line
 * 3. for t = 1 to T
 * 4.     take input N (size of the array) first line in each test case
 * 5.     create a vector A of size N
 * 6. input the array elements in the second line of each test case
 * 7. for i = 0 to N-1
 * 8.     take input A[i]
 * 9. end for loop
 * 10. create a vector sorted_A of size N
 * 11. copy the array A to sorted_A
 * 12. sort the vector sorted_A
 * 13. for i = 0 to N-1
 * 14.     if A[i] != sorted_A[i]
 * 15.         print "NO"
 * 16.         break
 * 17. end for loop
 * 18. if i == N
 * 19.     print "YES"
 * 20. end if condition
 * 21. end for loop
 * 22. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;

    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;

        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        vector<int> sorted_A(A);

        sort(sorted_A.begin(), sorted_A.end());

        bool is_sorted = true;

        for (int i = 0; i < N; i++)
        {
            if (A[i] != sorted_A[i])
            {
                cout << "NO" << endl;
                is_sorted = false;
                break;
            }
        }

        if (is_sorted)
        {
            cout << "YES" << endl;
        }
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