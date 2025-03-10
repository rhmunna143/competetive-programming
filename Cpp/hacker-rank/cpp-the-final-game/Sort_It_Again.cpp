#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(const Student &a, const Student &b)
{
    // sorting by eng marks in descending order
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }

    // if eng marks are the same, sorting by math marks in descending order
    if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }

    // if both are the same, sorting by id in ascending order
    return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;

    Student students[1000];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // sorting students
    sort(students, students + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << " "
             << students[i].math_marks << " "
             << students[i].eng_marks << endl;
    }

    return 0;
}