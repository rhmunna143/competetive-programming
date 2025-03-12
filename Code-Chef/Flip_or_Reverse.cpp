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
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector<vector<int>> operations;

        // Find each group of consecutive mismatches and handle them
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                int j = i;
                // Find the end of this mismatch segment
                while (j < n && a[j] != b[j])
                {
                    j++;
                }

                // Flip the entire segment
                vector<int> op = {1, i + 1, j};
                operations.push_back(op);

                // Update string a
                for (int k = i; k < j; k++)
                {
                    a[k] = (a[k] == '0') ? '1' : '0';
                }

                // Continue from the end of this segment
                i = j - 1;
            }
        }

        // Output the operations
        cout << operations.size() << endl;
        for (auto op : operations)
        {
            cout << op[0] << " " << op[1] << " " << op[2] << endl;
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