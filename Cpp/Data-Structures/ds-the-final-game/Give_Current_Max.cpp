/***
 * Objective:
 *
 * Context: You will be given a list A of size N. The list will contain data of some students where each student have Name, Roll and Marks. Then you will be givenQ queries, for each query there will be some commands. Commands are given below -
1.0 X -> Insert X into the list where X is the data of a student which contain Name, Roll and Marks. Then print the current student's data who has the maximum Marks from the list.
2. 1 -> Print the current student's data who has the maximum Marks from the list.
3. 2 -> Delete the student who has the maximum Marks from the list and print the current student who has the maximum Marks from the list.

 *
 *
 * Constrains:
 * 1. 1 <= N + Q <= 10^5
 * 2. 1 <= |Name| <= 10^3  will contain only English lowercase letters and will not contain any spaces.
 * 3. 1 <= Roll <= 10^5
 * 4. 0 <= Marks <= 100
 *
 * Note: If there are multiple students with same Marks then we will select whose Roll is smaller. If the list is empty and you can't print anything then you should print "Empty".
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string n, int r, int m) : name(n), roll(r), marks(m) {}
};

class cmp
{
public:
    bool operator()(const Student &a, const Student &b) const
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll; // descending if marks are same roll
        }
        return a.marks < b.marks; // Ascending order for marks if not same roll
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < N; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    cin >> Q;

    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
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