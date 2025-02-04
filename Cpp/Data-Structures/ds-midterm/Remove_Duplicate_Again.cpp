/***
 * Objective: to test stl list skills
 * 
 * Context: You will be given a linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list in ascending order.
 *
 * 
 * Constrains:
 * 1. 
 * 
 * Note: must use list stl. use functions like sort, unique, remove_if, etc. also use custom function
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input the first line as values of the linked list and ends with -1
 * 3. create a list and insert the values
 * 4. sort the list
 * 5. remove the duplicate values
 * 6. print the list
 * 7. end
 *
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    list<int> l;
    int n;
    
    while(cin >> n && n != -1)
    {
        l.push_back(n);
    }

    l.sort();

    l.unique();

    for(auto i : l)
    {
        cout << i << " ";
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