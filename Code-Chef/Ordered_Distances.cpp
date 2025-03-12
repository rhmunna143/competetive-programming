/***
 * Objective: Find the pivot index used to transform sequence X into Y, or report inconsistency
 * 
 * Context:
 * We have two sequences X and Y. X is transformed into Y by:
 * 1. Choosing a pivot index i, with pivot value P = X[i]
 * 2. Creating pairs (|X[j] - P|, X[j]) for each element
 * 3. Sorting these pairs in ascending order
 * 4. Taking the second elements (X[j]) from sorted pairs to form Y
 * 
 * Constrains:
 * 1 ≤ T ≤ 100
 * 2 ≤ N ≤ 100
 * 1 ≤ X[i], Y[i] ≤ 1000
 * 
 * TODO:
 * 1. Read sequences X and Y
 * 2. For each possible pivot index i:
 *    a. Calculate distances and create pairs
 *    b. Sort the pairs
 *    c. Extract second elements to get candidate Y'
 *    d. Check if Y' matches Y
 * 3. Return valid pivot index or -1 if none exists
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> x(n), y(n);
        
        // Read array X
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        // Read array Y
        for(int i = 0; i < n; i++) {
            cin >> y[i];
        }
        
        int ans = -1;
        
        // Try each index as pivot
        for(int i = 0; i < n; i++) {
            int pivot = x[i];
            
            // Create pairs (distance, value)
            vector<pair<int, int>> pairs;
            for(int j = 0; j < n; j++) {
                pairs.push_back({abs(x[j] - pivot), x[j]});
            }
            
            // Sort the pairs
            sort(pairs.begin(), pairs.end());
            
            // Extract second elements to get candidate Y'
            vector<int> y_candidate;
            for(auto &p : pairs) {
                y_candidate.push_back(p.second);
            }
            
            // Check if candidate matches Y
            bool matches = true;
            for(int j = 0; j < n; j++) {
                if(y_candidate[j] != y[j]) {
                    matches = false;
                    break;
                }
            }
            
            if(matches) {
                ans = i + 1;  // Convert to 1-indexed
                break;
            }
        }
        
        cout << ans << endl;
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