/***
 * Objective:
 *
 * Context: You will be given a list A of size N. You need to sort those values in ascending order and also you need to remove any duplicate values from the list and print the final outcome.
 *
 * Constrains:
 * 1. 1 <= N <= 10^4
 * 2. 1 <= T <= 100
 * 3. -10 pow(9) <= A[i] <= 10^9 here i <= 0 <= N
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input T first line contain test cases
 * 3. input the first line of every test case contain N
 * 4. input the second line A of size N
 * 5. sort the list A in ascending order
 * 6. remove the duplicate values from the list A
 * 7. print the final outcome
 * 8. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N;
    list<int> A;

    cin >> T;

    while (T--)
    {
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }

        A.sort();
        A.unique();

        for (auto i : A)
        {
            cout << i << " ";
        }

        cout << endl;
        A.clear();
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