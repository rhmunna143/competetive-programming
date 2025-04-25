/***
 * Objective:
 * Count the number of 1s on the board created by Dr. TC.
 * 
 * Context:
 * Dr. TC creates a binary string s of length n.
 * Then he creates n binary strings where each string is s with the ith position flipped.
 * These strings form a grid and we need to count the total 1s in the grid.
 * 
 * Algorithm:
 * 1. Count original ones in string s
 * 2. For each position in s:
 *    - If s[i] = 0, there will be 1 string (ai) with a 1 at position i
 *    - If s[i] = 1, there will be n-1 strings with 1 at position i (all except ai)
 * 3. Sum up all 1s across the grid
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        // Count the number of 1s in the original string
        int original_ones = 0;
        for(char c : s)
        {
            if(c == '1') original_ones++;
        }
        
        // Calculate total 1s using the formula:
        // For each '0' in s, we get 1 one (in the flipped string)
        // For each '1' in s, we get (n-1) ones (in all strings except the flipped one)
        int total_ones = (n - original_ones) + (original_ones * (n-1));
        
        // This simplifies to: n + original_ones * (n-2)
        
        cout << total_ones << endl;
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