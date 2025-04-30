/***
 * Objective:
 * Track the original and final handles of users after multiple handle changes
 * 
 * Context:
 * Users can change their handles multiple times, and we need to map original
 * handles to their final handles after all changes.
 * 
 * Constrains:
 * - 1 ≤ q ≤ 1000 (number of handle change requests)
 * - Handles are strings of Latin letters and digits, up to 20 characters
 * 
 * Algorithm:
 * 1. Use two maps to track handle changes:
 *    - originalToCurrent: maps original handle to current handle
 *    - currentToOriginal: maps current handle to original handle
 * 2. For each request (old, new):
 *    a. If old handle is someone's current handle, update to new handle
 *    b. Otherwise, old is a new original handle and new is its current handle
 * 3. Output the original handle and final handle for each user
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    
    // Map original handles to current handles
    map<string, string> originalToCurrent;
    
    // Map current handles to original handles
    map<string, string> currentToOriginal;
    
    for (int i = 0; i < q; i++) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        
        // Check if old handle is already a current handle
        if (currentToOriginal.find(old_handle) != currentToOriginal.end()) {
            // Get the original handle for this user
            string original = currentToOriginal[old_handle];
            
            // Update the current handle
            originalToCurrent[original] = new_handle;
            
            // Remove old mapping and add new one
            currentToOriginal.erase(old_handle);
            currentToOriginal[new_handle] = original;
        } else {
            // This is a new original handle
            originalToCurrent[old_handle] = new_handle;
            currentToOriginal[new_handle] = old_handle;
        }
    }
    
    // Output results
    cout << originalToCurrent.size() << endl;
    for (const auto& pair : originalToCurrent) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}