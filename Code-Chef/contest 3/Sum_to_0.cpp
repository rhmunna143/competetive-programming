/***
 * Objective:
 * Construct an array of size N where:
 * - All elements are non-zero
 * - The sum of elements is 0
 * - Absolute value of each element is 1, 2, or 3
 * 
 * Context:
 * For N=1: No solution exists
 * For N≥2: We need to balance positive and negative values
 * 
 * Constraints:
 * 1≤T≤50
 * 1≤N≤50
 * 
 * Algorithm:
 * 1. If N=1: Print -1 (impossible)
 * 2. If N is even: Use pairs of [1,-1]
 * 3. If N is odd (≥3): Use (N-3)/2 pairs of [1,-1] and add [1,1,-2]
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        
        if(N == 1) {
            cout << -1 << endl;
        }
        else if(N % 2 == 0) {
            // Even length
            cout << "3 -3";
            // Fill remaining pairs with 1,-1
            for(int i = 2; i < N; i += 2) {
                cout << " 1 -1";
            }
            cout << endl;
        }
        else {
            // Odd length
            cout << "1 2 -3";
            // Fill remaining pairs with 1,-1
            for(int i = 3; i < N; i += 2) {
                cout << " 1 -1";
            }
            cout << endl;
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