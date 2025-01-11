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
class MyStack{
    public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }

};
class MyQueue{
    public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    MyStack s;
    MyQueue q;
    if(n != m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        s.push(value);
    }
    for(int i=0; i<m; i++)
    {
        int value;
        cin>>value;
        q.push(value);
    }   
    while(!s.empty() && !q.empty())
    {
        if(s.top() == q.front())
        {
            s.pop();
            q.pop();
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
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