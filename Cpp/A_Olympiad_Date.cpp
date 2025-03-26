/***
 * Objective:
 * Find the earliest step at which the drawn digits can form "01032025"
 * 
 * Context:
 * The intern draws digits one by one, and we need to check when we have enough
 * digits to form the Olympiad date (01.03.2025 without dots)
 * 
 * Constrains:
 * 1 ≤ t ≤ 10^4
 * 1 ≤ n ≤ 20
 * 0 ≤ ai ≤ 9
 * 
 * Note:
 * We need 3 '0's, 1 '1', 2 '2's, 1 '3', and 1 '5' to form the date
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps:
 *
 * 1. Create frequency arrays for required and available digits
 * 2. Iterate through drawn digits and update available counts
 * 3. Check if we have enough of each required digit after each draw
 * 4. Return the minimum step when all requirements are met, or 0 if impossible
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Initialize required digit counts for "01032025"
        vector<int> needed(10, 0);
        needed[0] = 3;  // Need 3 zeros
        needed[1] = 1;  // Need 1 one
        needed[2] = 2;  // Need 2 twos
        needed[3] = 1;  // Need 1 three
        needed[5] = 1;  // Need 1 five
        
        vector<int> have(10, 0);  // Count of each digit we currently have
        
        int answer = 0;
        for (int i = 0; i < n; i++) {
            have[a[i]]++;  // Increment count for drawn digit
            
            // Check if we have enough of each required digit
            bool enough = true;
            for (int j = 0; j < 10; j++) {
                if (have[j] < needed[j]) {
                    enough = false;
                    break;
                }
            }
            
            if (enough) {
                answer = i + 1;  // We've found our answer (+1 because i is 0-indexed)
                break;
            }
        }
        
        cout << answer << endl;
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