/***
 * Objective: calculating the sum and product of the four smallest elements in the array
 *
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // declare integer vector of size n for n numbers
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // sort the vector
        sort(v.begin(), v.end());

        // declaring magical 4 numbers
        long long max_product, min_product, max_sum, min_sum;

        // let the first two numbers to initialize the max and min product and sum
        max_product = (long long)v[0] * v[1]; // (long long) - type casting to long long to avoid overflow
        min_product = (long long)v[0] * v[0];
        max_sum = (long long)v[0] + v[0];
        min_sum = (long long)v[0] + v[0];

        // brute force to find the magical 4 numbers
        // two pointers technique
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                long long product = (long long)v[i] * v[j];
                long long sum = (long long)v[i] + v[j];

                if (product > max_product)
                {
                    max_product = product;
                }

                if (product < min_product)
                {
                    min_product = product;
                }

                if (sum > max_sum)
                {
                    max_sum = sum;
                }

                if (sum < min_sum)
                {
                    min_sum = sum;
                }
            }
        }

        cout << max_product << " " << min_product << " " << max_sum << " " << min_sum << endl;
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