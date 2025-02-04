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

class Student
{
public:
    string name;
    int roll;
    Student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
class cmp
{
    public:
   bool operator()(const Student &l,const Student &r) const
   {
       if(l.name == r.name)
       {
           return l.roll < r.roll;
       }
       else
       {
        return l.name > r.name;
       }
   }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        Student obj(name,roll);
        pq.push(obj);
    }
   
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
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