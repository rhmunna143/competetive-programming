/***
 * Objective: learning vector in C++ STL.
 *
 * Context:Given a number N and an array A of N numbers. Print the array after doing the following operations: Replace every positive number by 1. Replace every negative number by 2.
 *
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. -10^5 <= A[i] <= 10^5
 *
 * Note:
 * 1. Solve this problem using recursive function.
 * 2. Solve this problem using vector.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. declare a function named replacement with a vector a as argument
 * 3. declare a variable n
 * 4. take input n in first line
 * 5. declare a vector a
 * 6. take input n elements in a in second line
 * 7. call replacement function with a as argument
 * 8. print the new array a separated by space (into the recursive function)
 * 9. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

void replacement(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            a[i] = 0;
        }
        else if (a[i] > 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 2;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    a.clear();
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    replacement(a);

    a.clear();

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