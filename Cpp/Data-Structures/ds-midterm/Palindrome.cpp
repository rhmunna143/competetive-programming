/***
 * Objective: TO TEST STL LIST SKILLS
 *
 * Context: You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.
 *
 *
 * Constrains:
 * 1. 1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
 * 2. 0 <= V <= 1000; Here V is the value of each node.
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
 * 4. create a list and insert the values in reverse order
 * 5. compare the two lists
 * 6. if the two lists are same then print "YES" else print "NO"
 * 7. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    list<int> l1, l2;

    int n;

    while (cin >> n && n != -1)
    {
        l1.push_back(n);
        l2.push_front(n);
    }

    if (l1 == l2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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