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

#include<bits/stdc++.h>
using namespace std;

void find_max_water(const vector<int>& heights, int n) {
    int left = 0, right = n - 1;
    int max_area = 0;
    int left_index = 0, right_index = 0;

    while (left < right) {
        int height = min(heights[left], heights[right]);
        int width = right - left;
        int area = height * width;

        if (area > max_area) {
            max_area = area;
            left_index = left;
            right_index = right;
        }

        if (heights[left] < heights[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << left_index << " " << right_index << endl;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n; 
        vector<int> heights(n);
        
        for (int i = 0; i < n; i++) {
            cin >> heights[i]; 
        }
        
        find_max_water(heights, n); 
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