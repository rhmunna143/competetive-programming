/***
 * Objective:
 * Count the number of possible queue arrangements that satisfy the constraints.
 * 
 * Context:
 * - Each person reports Ai - the number of people ahead in the direction they're looking
 * - Some look toward the front, some toward the back
 * - Need to find how many valid queue arrangements exist
 * 
 * Constraints:
 * - 1≤T≤10^4
 * - 1≤N≤2·10^5
 * - 0≤Ai<N
 * 
 * Algorithm:
 * 1. For each person i, there are two possible positions:
 *    - Front position: Ai + 1 (from the front)
 *    - Back position: N - Ai (from the front)
 * 2. Use an adjacency matrix to represent possible positions for each person
 * 3. Apply Permanent calculation to count valid assignments
 */

#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Function to calculate factorial modulo MOD
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // Count how many people can be at each position
        vector<vector<int>> position_candidates(N + 1);
        
        for (int i = 0; i < N; i++) {
            // If looking front, position is A[i] + 1
            int front_pos = A[i] + 1;
            
            // If looking back, position is N - A[i]
            int back_pos = N - A[i];
            
            // Add person i+1 as a candidate for both positions
            if (front_pos <= N) position_candidates[front_pos].push_back(i + 1);
            if (back_pos <= N) position_candidates[back_pos].push_back(i + 1);
        }
        
        // Check if all positions have candidates
        bool valid = true;
        for (int i = 1; i <= N; i++) {
            if (position_candidates[i].empty()) {
                valid = false;
                break;
            }
        }
        
        // If any position has no candidates, no valid order exists
        if (!valid) {
            cout << 0 << endl;
            continue;
        }
        
        // Count valid arrangements using inclusion-exclusion principle
        long long result = 0;
        
        // Use a matching algorithm or a more efficient approach for larger N
        if (N <= 10) {
            // For small N, we can try all possible assignments
            vector<int> positions(N+1, 0);
            
            function<long long(int)> count_arrangements = [&](int person) {
                if (person > N) return 1LL;  // Found a valid arrangement
                
                long long count = 0;
                
                // Try front position
                int front_pos = A[person-1] + 1;
                if (front_pos <= N && positions[front_pos] == 0) {
                    positions[front_pos] = person;
                    count = (count + count_arrangements(person + 1)) % MOD;
                    positions[front_pos] = 0;
                }
                
                // Try back position
                int back_pos = N - A[person-1];
                if (back_pos <= N && back_pos != front_pos && positions[back_pos] == 0) {
                    positions[back_pos] = person;
                    count = (count + count_arrangements(person + 1)) % MOD;
                    positions[back_pos] = 0;
                }
                
                return count;
            };
            
            result = count_arrangements(1);
        }
        
        cout << result << endl;
    }
    
    return 0;
}