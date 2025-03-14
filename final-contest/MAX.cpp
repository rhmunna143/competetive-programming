/***
 * Objective: Implement a specialized array with specific operations
 * 
 * Context:
 * - Initially empty array with two types of queries:
 *   1 X: Add X to the array
 *   2: Print element with maximum occurrence (or largest if tied)
 *     and remove floor(occurrence/2) instances of that element
 * 
 * Constrains:
 * - 1 ≤ q ≤ 10^6
 * - Large input - requires fast I/O
 * 
 * Time Complexity: O(q log n), where n is number of distinct elements
 * Space Complexity: O(n), where n is number of distinct elements
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    // Map to track occurrences of each element
    map<int, int> occurrences;
    
    // Map to track elements by their occurrence count (value->count)
    map<int, set<int, greater<int>>> count_to_elements;
    
    while(q--) {
        int type;
        cin >> type;
        
        if(type == 1) {
            // Query type 1: Add X to the array
            int x;
            cin >> x;
            
            // If element already exists, remove from current occurrence count
            if(occurrences[x] > 0) {
                count_to_elements[occurrences[x]].erase(x);
                if(count_to_elements[occurrences[x]].empty()) {
                    count_to_elements.erase(occurrences[x]);
                }
            }
            
            // Increment occurrence
            occurrences[x]++;
            
            // Add to new occurrence count
            count_to_elements[occurrences[x]].insert(x);
        } else {
            // Query type 2: Print max occurrence element and remove some instances
            if(occurrences.empty() || count_to_elements.empty()) {
                cout << "empty\n";
                continue;
            }
            
            // Get the maximum occurrence count
            int max_count = count_to_elements.rbegin()->first;
            
            // Get the largest element with that count
            int max_element = *count_to_elements[max_count].begin();
            
            cout << max_element << "\n";
            
            // Calculate how many instances to remove
            int remove_count = occurrences[max_element] / 2;
            
            // Remove from current count
            count_to_elements[max_count].erase(max_element);
            if(count_to_elements[max_count].empty()) {
                count_to_elements.erase(max_count);
            }
            
            // Update occurrence count
            occurrences[max_element] -= remove_count;
            
            // If occurrences remain, add to appropriate count
            if(occurrences[max_element] > 0) {
                count_to_elements[occurrences[max_element]].insert(max_element);
            } else {
                occurrences.erase(max_element);
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