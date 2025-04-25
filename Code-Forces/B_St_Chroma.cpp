/***
 * Objective:
 * Construct a permutation that maximizes the number of cells painted with color x.
 * 
 * Context:
 * - We have a strip of n cells
 * - The i-th cell is colored with MEX(p1,p2,...,pi)
 * - We want to maximize cells with color x
 *
 * Algorithm:
 * 1. For x = 0: Place 0 at the end and other numbers in any order
 * 2. For x = n: Place numbers in order [0,1,2,...,n-1]
 * 3. For 0 < x < n: Place numbers 0 to x-1 first, then x+1 to n-1, then x last
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        
        if (x == 0) {
            // For x = 0, place 0 at the end
            // This gives n-1 cells colored 0
            for (int i = 1; i < n; i++) {
                cout << i << " ";
            }
            cout << 0 << endl;
        }
        else if (x == n) {
            // For x = n, place numbers in order
            for (int i = 0; i < n; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            // For 0 < x < n
            // First place 0 to x-1
            for (int i = 0; i < x; i++) {
                cout << i << " ";
            }
            
            // Then place x+1 to n-1
            for (int i = x + 1; i < n; i++) {
                cout << i << " ";
            }
            
            // Finally place x
            cout << x << endl;
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