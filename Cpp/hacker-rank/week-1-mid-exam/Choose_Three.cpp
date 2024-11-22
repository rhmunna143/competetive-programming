/***
 * Context: You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.
 *
 * Constrains:
 * 1. 1 <= T <= 100
 * 2. 1 <= N <= 100
 * 3. 1 <= S <= 1000
 * 4. 1 <= A[i] <= 1000 Where 0 <= i < N
 *
 * Note: using class and object to solve this problem.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain T, the number of test cases.
 * 3. input First line of each test case will contain N and S.
 * 4. input Second line of each test case will contain the array A.
 * 5. Output print "YES" if it is possible, otherwise output "NO".
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int n;
    int s;
    int *a;

    Array(int n, int s)
    {
        this->n = n;
        this->s = s;
        a = new int[n];
    }

    ~Array()
    {
        delete[] a;
    }

    void input()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    bool is_possible()
    {
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, S;
        cin >> N >> S;

        Array arr(N, S);
        arr.input();

        if (arr.is_possible())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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