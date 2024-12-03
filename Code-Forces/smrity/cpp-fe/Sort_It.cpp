#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
    int total = math + eng;
};
bool cmp(Student l, Student r)
{
    if (l.total > r.total)
    {
        return true;
    }
    else if (l.total < r.total)
    {
        return false;
    }
    else
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math >> a[i].eng;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }
    // Write your code here

    return 0;
}