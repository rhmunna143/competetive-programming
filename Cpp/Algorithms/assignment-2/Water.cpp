/***
 * Objective:
 *
 * Context: You are given an array H representing the heights of N vertical lines positioned at equally spaced intervals along a two-dimensional plane. The -th line's height is represented by the integer H sub(i) where 0 <= i <= N and the height will be unique.

You need to find the two lines, such that together with the x-axis forms a container that can hold the most water in term of height.

Note: Print the left index first, then the right index.
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
 * 1. Start
 * 2. input the number of test cases T
 * 3. input the number of elements N for each test case
 * 4. Second line of each test case will contain the array H
 * 5. for each test case, find the two lines that can hold the most water
 * 6. print the left index first, then the right index
 * 7. End
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);

        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }

        int left = 0, right = N - 1;
        long long maxArea = 0;
        int maxLeft = 0, maxRight = 0;

        while (left < right) {
            // Calculate current area
            long long height = min(H[left], H[right]);
            long long width = right - left;
            long long currentArea = height * width;
            
            // Update maxArea and indices if we find a larger area
            if (currentArea > maxArea) {
                maxArea = currentArea;
                maxLeft = left;
                maxRight = right;
            }
            // If areas are equal, prefer smaller indices
            else if (currentArea == maxArea && right - left < maxRight - maxLeft) {
                maxLeft = left;
                maxRight = right;
            }

            // Move pointers based on height comparison
            if (H[left] < H[right]) {
                left++;
            } else {
                right--;
            }
        }

        cout << maxLeft << " " << maxRight << endl;
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