#include <iostream>
using namespace std;

struct Stdnt {
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int test;
    cin >> test;
    Stdnt student[3];
    for (int i = 0; i < test; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> student[j].id >> student[j].name >> student[j].section >> student[j].marks;
        }
        int max_mark = 0;
        int max_id = 0;
        for (int j = 0; j < 3; j++) {
            if (student[j].marks > max_mark) {
                max_mark = student[j].marks;
                max_id = j;
            } else if (student[j].marks == max_mark) {
                if (student[j].id < student[max_id].id) {
                    max_id = j;
                }
            }
        }
        cout << student[max_id].id << " " << student[max_id].name << " " << student[max_id].section << " " << student[max_id].marks << endl;
    }

    return 0;
}