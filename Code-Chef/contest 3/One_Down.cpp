/***
 * Objective:
 * Determine if it's possible to convert binary string S into binary string T
 * using operations that flip two 1s to 0s.
 * 
 * Context:
 * The only allowed operation is to select two positions where S[i]=S[j]=1 and 
 * change both to 0.
 * 
 * Constraints:
 * 1≤T≤10^4
 * 2≤N≤5
 * S and T are binary strings of length N
 * 
 * Algorithm:
 * 1. Count the number of 1s in both S and T
 * 2. It's only possible if:
 *    a) S has at least as many 1s as T (can't create new 1s)
 *    b) The difference (S_ones - T_ones) is even (we flip 1s in pairs)
 *    c) Every position where T has a 1, S also has a 1
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
        
        string S, T;
        cin >> S >> T;
        
        int countS = 0, countT = 0;
        bool possible = true;
        
        // Count 1s and check if T has 1s where S has 0s
        for(int i = 0; i < N; i++) {
            if(S[i] == '1') countS++;
            if(T[i] == '1') countT++;
            
            // If T has 1 but S has 0, impossible
            if(T[i] == '1' && S[i] == '0') {
                possible = false;
                break;
            }
        }
        
        // Check if S has enough 1s and if difference is even
        if(countS < countT || (countS - countT) % 2 != 0) {
            possible = false;
        }
        
        cout << (possible ? "Yes" : "No") << endl;
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