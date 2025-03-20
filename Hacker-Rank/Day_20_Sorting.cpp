/***
 * Objective: Implement Bubble Sort and find the number of swaps required
 * 
 * Context:
 * - Implement Bubble Sort to sort an array in ascending order
 * - Count and output the number of swaps required
 * - Print the first and last elements of the sorted array
 * 
 * Constrains:
 * - 1 ≤ n ≤ 600
 * - 1 ≤ a[i] ≤ 2 × 10^6
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Bubble Sort Implementation
    int numSwaps = 0;
    for(int i = 0; i < n; i++) {
        // Track number of elements swapped during this iteration
        int swaps = 0;
        
        for(int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
                numSwaps++;
            }
        }
        
        // If no elements were swapped, array is sorted
        if(swaps == 0) {
            break;
        }
    }
    
    // Output the results
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    
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