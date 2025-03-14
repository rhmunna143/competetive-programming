/***
 * Objective: Divide coins between two people to minimize the difference in total value
 * 
 * Context:
 * - N coins with different values
 * - Each person should get approximately N/2 coins
 * - For even N: each gets exactly N/2 coins
 * - For odd N: one person gets (N/2)+1 coins, the other gets N/2
 * - Goal: Minimize the difference between the sums
 * 
 * Constrains:
 * - Small input size (likely N <= 20)
 * 
 * Algorithm:
 * - Use bitmask to try all possible ways to divide coins
 * - Check only valid divisions (correct number of coins per person)
 * - Calculate the minimum difference in sums
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> coins(n);
        
        int total_sum = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> coins[i];

            total_sum += coins[i];
        }
        
        int minimum_difference = INT_MAX;
        
        for(int musk = 0; musk < (1 << n); musk++) {
            int count = __builtin_popcount(musk);
            
            if((n % 2 == 0 && count == n/2) || 
               (n % 2 == 1 && (count == n/2 || count == n/2 + 1))) {
                
                int sum1 = 0;

                for(int i = 0; i < n; i++) {
                    if(musk & (1 << i)) {
                        sum1 += coins[i];
                    }
                }
                
                int sum2 = total_sum - sum1;
                
                minimum_difference = min(minimum_difference, abs(sum1 - sum2));
            }
        }
        
        cout << minimum_difference << endl;
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