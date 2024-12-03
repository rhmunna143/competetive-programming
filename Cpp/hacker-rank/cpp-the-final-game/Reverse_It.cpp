#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student students[100];

    // initializing each student's data
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    // reversing the section of each student by swapping
    for (int i = 0; i < N / 2; i++)
    {
        swap(students[i].section, students[N - i - 1].section);
    }

    // printing the reversed students' data
    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << endl;
    }

    return 0;
}
