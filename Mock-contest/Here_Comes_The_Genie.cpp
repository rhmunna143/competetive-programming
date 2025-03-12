/***
 * Objective: Find the maximum number of balls we can collect
 *
 * Context: We have n bags, each with A[i] balls of color i.
 * We can take any number of balls from each bag (0 to A[i]).
 * The constraint is that the number of balls we take from each color must be distinct.
 *
 * Constrains:
 * 1 ≤ n ≤ 100
 * 1 ≤ A[i] ≤ 100
 *
 * Algorithm:
 * 1. Sort the bags in descending order by ball count
 * 2. Greedily assign distinct counts (starting from largest possible)
 * 3. Sum up the total balls collected
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> balls(n);

    for (int i = 0; i < n; i++)
    {
        cin >> balls[i];
    }

    sort(balls.begin(), balls.end(), greater<int>());

    const int MAX_SIZE = 105; 
    
    vector<bool> used_counts(MAX_SIZE, false);

    long long total_balls = 0;

    for (int i = 0; i < n; i++)
    {
        int count = min(balls[i], MAX_SIZE-1);

        while (count > 0 && used_counts[count])
        {
            count--;
        }

        if (count >= 0 && (count > 0 || !used_counts[0]))
        {
            total_balls += count;
            used_counts[count] = true;
        }
    }

    cout << total_balls << endl;

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