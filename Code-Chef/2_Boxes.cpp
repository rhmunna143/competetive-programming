/***
 * Objective: Find minimum moves to make absolute difference between two boxes equal to K
 * 
 * Context: We have two boxes with X and Y stones. Each second, we can move 1 stone
 * from one box to another. We want the absolute difference to be exactly K.
 * 
 * Constrains: 
 * 1 ≤ T ≤ 10^3
 * 1 ≤ X, Y ≤ 10 
 * 0 ≤ K ≤ X+Y
 * 
 * TODO:
 * 1. Calculate current difference between boxes
 * 2. If current difference equals K, we need 0 moves
 * 3. If current difference > K, move (diff-K)/2 stones from larger to smaller box
 * 4. If current difference < K, move (K-diff)/2 stones from smaller to larger box
 * 5. Check if solution is possible (difference must be of same parity as K)
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        int x, y, k;
        cin >> x >> y >> k;
        
        int current_diff = abs(x - y);
        
        if(current_diff == k) {
            // Already at desired difference
            cout << 0 << endl;
        } 
        else if(current_diff > k) {
            // Need to reduce difference
            if((current_diff - k) % 2 == 0) {
                cout << (current_diff - k) / 2 << endl;
            } else {
                cout << -1 << endl;
            }
        } 
        else { // current_diff < k
            // Need to increase difference
            if((k - current_diff) % 2 == 0) {
                cout << (k - current_diff) / 2 << endl;
            } else {
                cout << -1 << endl;
            }
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