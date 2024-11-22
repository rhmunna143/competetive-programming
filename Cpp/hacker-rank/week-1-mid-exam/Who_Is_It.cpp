/***
 * Context: A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.
 *
 * Constrains:
 * 1. 1 <= T <= 1000
 * 2. 1 <= ID <= 3
 * 3. 1 <= |Name| <= 100
 * 4. 'A' <= Section <= 'Z'
 * 5. 0 <= Total Marks <= 100
 *
 * Note:
 * 1. solving this problem using class and object.
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain T, the number of test cases.
 * 3. input For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
 * 4. Output print the information as asked in the question.
 * 5. end
 */

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    Student students[3];

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> students[j].id >> students[j].name >> students[j].section >> students[j].total_marks;
        }

        int max_marks = 0;
        int max_id = 0;

        for (int j = 0; j < 3; j++)
        {
            if (students[j].total_marks > max_marks)
            {
                max_marks = students[j].total_marks;
                max_id = j;
            }
            else if (students[j].total_marks == max_marks)
            {
                if (students[j].id < students[max_id].id)
                {
                    max_id = j;
                }
            }
        }

        cout << students[max_id].id << " " << students[max_id].name << " " << students[max_id].section << " " << students[max_id].total_marks << endl;
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