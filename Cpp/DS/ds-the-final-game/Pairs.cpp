/***
 * Objective:
 *
 * Context: You will be given a list A of type pairs. Each pair will contain one string S and one unique integer I. The string will contain only English lowercase alphabets and no spaces.

You need to sort the pairs according to the string values in ascending order. If there are multiple pairs with the same string, you need to sort them according to the integer value in descending order.
 *
 * Constrains:
 * 1. 1 <= N <= 10^5
 * 2. 1 <= |S| <= 10^5
 * 3. -10^9 <= I <= 10^9
 *
 * Note: using stringstream, map, priority queue and custom comparator class to solve this problem.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. take input first line contain N size of list A
 * 3. input next N lines contain pair of string S and integer I
 * 4. output the final sorted list A (string and integer new line separated pair)
 * 5. end
 */

#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    string str;
    int num;

    Pair(string s, int n) : str(s), num(n) {}
};

class cmp
{
public:
    bool operator()(const Pair &a, const Pair &b) const
    {
        if (a.str == b.str)
        {
            return a.num > b.num; // descending if strings are same num
        }
        return a.str < b.str; // Ascending order for strings if not same num
    }
};

int main()
{
    int N;
    cin >> N;

    vector<Pair> dataList;

    for (int i = 0; i < N; i++)
    {
        string S;
        int I;
        cin >> S >> I;
        dataList.push_back(Pair(S, I));
    }

    // Sort the dataList using the custom comparator
    sort(dataList.begin(), dataList.end(), cmp());

    for (const auto &data : dataList)
    {
        cout << data.str << " " << data.num << endl;
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