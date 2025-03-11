/***
 * Objective:
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
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> x(n), r(n);

        // Read the center x-coordinates
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        // Read the radii
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }

        // Use a set to avoid counting points multiple times
        set<pair<long long, long long>> points;

        // For each circle
        for (int i = 0; i < n; i++)
        {
            // Iterate over potential x values
            for (long long dx = -r[i]; dx <= r[i]; dx++)
            {
                long long px = x[i] + dx;

                // Calculate the maximum possible y value for this x
                long long max_dy_squared = r[i] * r[i] - dx * dx;
                if (max_dy_squared >= 0)
                {
                    long long max_dy = sqrt(max_dy_squared);

                    // Add all integer points within the range
                    for (long long dy = -max_dy; dy <= max_dy; dy++)
                    {
                        points.insert({px, dy});
                    }
                }
            }
        }

        // Output the total number of unique points
        cout << points.size() << endl;
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