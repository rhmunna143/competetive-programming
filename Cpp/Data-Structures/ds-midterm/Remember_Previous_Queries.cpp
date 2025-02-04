/***
 * Objective:
 * 
 * Context: You have a doubly linked list which is empty initially. Then you will be given queue queueueries. In each queueuery you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is inis valid, then you shouldn't perform the deletion.
After each queueuery you need to print the linked list from both left to right and right to left.
 * 
 * Constrains: 
 * 1. 1 <= queue <= 1000;
 * 2. 0 <= X <= 2;
 * 3. 0 <= V <= 10^9
 * 
 * Note:
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain queue.
 * 3. input Next queue lines will contain X and V.
 * 4. insert the value V at the head of the linked list if X is 0.
 * 5. insert the value V at the tail of the linked list if X is 1.
 * 6. delete the value Vth index of the linked list if X is 2.
 * 7. print the linked list from left to right (L -> 10 20)
 * 8. print the linked list from right to left (R -> 20 10)
 * 9. if the index is invalid then print "Invalid"
 * 10. end
 *
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int queue;
    cin >> queue;
    list<int> l;
    while (queue--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            l.push_front(v);
        } else if (x == 1) {
            l.push_back(v);
        } else if (x == 2) {
            auto it = l.begin();
            bool is_true = true;
            for (int i = 0; i < v; i++) {
                if (it == l.end()) {
                    is_true = false;
                    break;
                }
                it++;
            }
            if (is_true && it != l.end()) {
                l.erase(it);
            }
        }
        cout << "L -> ";
        for (auto i : l) {
            cout << i << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto i = l.rbegin(); i != l.rend(); i++) {
            cout << *i << " ";
        }
        cout << endl;
    }
    return 0;
}

/***
 * Author:
 * Md Rabbi Haqueueue Munna
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