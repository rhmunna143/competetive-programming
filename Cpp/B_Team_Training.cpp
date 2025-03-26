/***
 * Objective:
 * Maximize the number of "strong" teams where each team's strength is at least x
 * 
 * Context:
 * - Each student has a skill level a_i
 * - Team strength = (number of members) × (minimum skill)
 * - A team is strong if its strength is at least x
 * - Every student must be in exactly one team
 * 
 * Constrains:
 * 1 ≤ t ≤ 10^4
 * 1 ≤ n ≤ 2⋅10^5
 * 1 ≤ x ≤ 10^9
 * 1 ≤ a_i ≤ 10^9
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps:
 *
 * 1. Sort students by skill in ascending order
 * 2. Greedily form teams starting with the lowest-skilled student
 * 3. For each team, use the minimum number of students needed to achieve strength ≥ x
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> skills(n);
        for (int i = 0; i < n; i++) {
            cin >> skills[i];
        }
        
        // Sort skills in ascending order
        sort(skills.begin(), skills.end());
        
        int count = 0; // Number of strong teams
        int i = 0;     // Student index
        
        while (i < n) {
            int minSkill = skills[i];
            int teamSize = ceil((double)x / minSkill); // Minimum team size needed
            
            if (i + teamSize > n) {
                // Not enough students remain to form a strong team
                break;
            }
            
            // Form a team with teamSize students
            count++;
            i += teamSize;
        }
        
        cout << count << endl;
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