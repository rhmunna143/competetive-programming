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
   /* constructor with n element value v,,,,
    list<int>l(10,3);
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<""<<endl;
    }*/


    /*copy list use range based for loop
    list<int>l={1,2,3,4,5,6,7,8,9,10};
    list<int>l2(l);
    for(int value:l2)
    {
        cout<<value<<endl;
    }*/

    /*copy list use iterator
   /*list<int>l={1,2,3,4,5,6,7,8,9,10};
   int a[]={20,30,40};
   list<int>l2(a,a+3);
   for(int value:l2)
   {
         cout<<value<<endl;
   }  */

    //copy list use vector
  vector<int>v={10,20,30} ;
  list<int>l(v.begin(),v.end());
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