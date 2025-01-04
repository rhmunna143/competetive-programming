/***
 * Objective:test stl list skills
 * 
 * Context: You are given a doubly linked list of unique string values. These strings refer to web adses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.
 *
 * 
 * Constrains:
 * 1. 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
 * 2. 1 <= Q <= 1000; Here Q is the number of queries.
 * 3. 1 <= |address| <= 100; Here |address| is the length of the address.
 * 
 * Note: must use list stl. use functions like sort, unique, remove_if, etc. also use custom function
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. First line will contain the values of the doubly linked list, and will terminate with the string "end".
 * 3. second line will contain the number of queries Q.
 * 4. Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
 * 5. If the address is available in the list then print the address. Otherwise print "Not Available".
 * 6. If the address is not available then don't move from your current position.
 * 7. If the address is available then move to that address.
 * 8. If the address is available then print the address.
 * 9. If the address is not available then print "Not Available".
 * 10. If the address is available then move to that address.
 * 11. If the address is available then print the address.
 * 12. If the address is not available then print "Not Available".
 * 13. end
 *
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    list<string> l;
    string s;
    while(cin >> s && s != "end")
    {
        l.push_back(s);
    }
    int queue;
    cin >> queue;
    auto it = l.begin();
    while(queue--)
    {
        string Q;
        cin >> Q;
        if(Q == "visit")
        {
            string ads;
            cin >> ads;
            auto it1 = find(l.begin(), l.end(), ads);
            if(it1 != l.end())
            {
                it = it1;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(Q == "next")
        {
            if(next(it) != l.end())
            {
                it++;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(Q == "prev")
        {
            if(it != l.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
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