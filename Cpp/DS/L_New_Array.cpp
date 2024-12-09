/***
 * Objective:
 * 
 * Context: Given two arrays A and B of size N . Print a new array C that holds the concatenation of array B followed by array A.
 * 
 * Constrains:
 * 1. 1 <= N <= 10^3
 * 2. 1 <= A[i], B[i] <= 10^5
 * 
 * Note:
 * 1. Solve this problem using function.
 * 2. solving using vector.
 * 3. using recursion function to solve this problem whether need.
 * 
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. declare a function named new_array with two vectors a and b as arguments
 * 3. declare a variable n
 * 4. take input n in first line
 * 5. declare two vectors a and b
 * 6. take input n elements in a in second line
 * 7. take input n elements in b in third line
 * 8. call new_array function with a and b as arguments
 * 9. print the new array c separated by space (into the recursive function)
 * 10. end
 *
 */

#include<bits/stdc++.h>
using namespace std;

void new_array(vector<int> a, vector<int> b)
{
    vector<int> c;

    for(int i=0; i<b.size(); i++)
    {
        c.push_back(b[i]); // c.push_back(b.at(i));
    }

    for(int i=0; i<a.size(); i++)
    {
        c.push_back(a[i]); // c.push_back(a.at(i));
    }

    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i]<<" "; // cout<<c.at(i)<<" ";
    }

    a.clear();
    b.clear();
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i]; // cin>>a.at(i);
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i]; // cin>>b.at(i);
    }

    new_array(a, b);

    a.clear();
    b.clear();

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