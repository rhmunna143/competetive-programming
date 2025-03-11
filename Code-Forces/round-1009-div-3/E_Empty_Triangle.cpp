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

// Function to query if a triangle contains any point, returns point index or 0
int query(int i, int j, int k) {
    cout << "? " << i << " " << j << " " << k << endl;
    int result;
    cin >> result;
    if (result == -1)
        exit(0); // Exit if invalid query
    return result;
}

// Function to submit an answer
void answer(int i, int j, int k) {
    cout << "! " << i << " " << j << " " << k << endl;
    int result;
    cin >> result;
    if (result == -1)
        exit(0); // Exit if invalid answer
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If n=3, there's only one triangle and it must be empty
        if (n == 3) {
            answer(1, 2, 3);
            continue;
        }

        // Start with first three points
        int a = 1, b = 2, c = 3;
        int inside_point = query(a, b, c);

        // If triangle is empty, we found our solution
        if (inside_point == 0) {
            answer(a, b, c);
            continue;
        }

        // Try triangle a, b, inside_point
        int result1 = query(a, b, inside_point);
        if (result1 == 0) {
            answer(a, b, inside_point);
            continue;
        }

        // Try triangle a, inside_point, c
        int result2 = query(a, inside_point, c);
        if (result2 == 0) {
            answer(a, inside_point, c);
            continue;
        }

        // The triangle b, inside_point, c must be empty (by the pigeonhole principle)
        answer(b, inside_point, c);
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