/***
 * Objective: Find and remove minimum elements efficiently
 * 
 * Context:
 * - Two types of queries:
 *   1. Add element X to the array
 *   2. Find minimum value, print it, and remove all occurrences
 * 
 * Approach:
 * - Add elements without maintaining sorted order O(1)
 * - Sort only when needed for minimum finding
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    vector<int> a;
    a.reserve(q);
    bool need_sort = false;

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int x;
            cin >> x;
            
            // Simply append to end (O(1)) instead of sorted insertion (O(n))
            a.push_back(x);
            need_sort = true;
        }
        else if (t == 2)
        {
            if (a.empty())
            {
                cout << "empty\n";
            }
            else
            {
                // Sort only when needed
                if (need_sort)
                {
                    sort(a.begin(), a.end());
                    need_sort = false;
                }
                
                // Min value is at the front of sorted array
                int min_val = a[0];
                cout << min_val << "\n";
                
                // Remove all occurrences of minimum
                auto end_min = upper_bound(a.begin(), a.end(), min_val);
                a.erase(a.begin(), end_min);
            }
        }
    }

    return 0;
}