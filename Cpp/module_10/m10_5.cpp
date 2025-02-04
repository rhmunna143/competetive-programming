/***
 * Objective:
 * 
 * Context:
 *
 * 
 * Constrains:
 *
 * 
 * Note:
 *
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /*list<int>l={10,20,30};
    l.remove(20);
    for(int value:l)
    {
        cout<<value<<endl;
    }*/

   /*list<int>l={10,20,30,49,23,34,50};
  // l.sort();//ascending order
   l.sort(greater<int>());//descending order
    for(int value:l)
    {
        cout<<value<<endl;
    }*/
   
   
   list<int>l={10,20,30,49,30,30,50};
    l.sort();
    l.unique();//pashapasi valu check kore tai sort fun use kore nite hbe,
    for(int value:l)
    {
        cout<<value<<endl;
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