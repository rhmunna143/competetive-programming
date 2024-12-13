/***
 * Objective:
 * 
 * Context: Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a single line that contains the summation of all numbers from index L to index R.
 * 
 * Constrains:
 * 1. 1 <= N, Q <= 10^5
 * 2. 1 <= A[i] <= 10^9; Where 0 <= i < N
 * 3. 1 <= X <= 10^9
 * 
 * Note:
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input first line N
 * 3. create a vector A of size N
 * 4. input the array elements in the second line
 * 5. next Q lines contains X
 * 6. For each query print a single line that contains "found" if the number X exists in array A otherwise, print "not found".
 * 7. end
 */

/***
 * Problem Statement:
 * 
 * Given 2 numbers N and Q, array A of N numbers and Q queries each one contains a number X.
 *
 * For each query print a single line that contains "found" if the number X exists in array A otherwise, print "not found".
 *
 * Input Format:
 * 
 * First line contains two numbers N, Q (1≤N,Q≤10^5).
 *
 * Second line contains N numbers (1≤A[i]≤10^9).
 *
 * Next Q lines contains X (1≤X≤10^9).
 *
 * Output Format:
 * 
 * Print the answer for each query in a single line.
 */

#include<bits/stdc++.h>
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

    sort(A.begin(), A.end());

    for (int q = 1; q <= Q; q++)
    {
        int X;
        cin >> X;

        if (binary_search(A.begin(), A.end(), X))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
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