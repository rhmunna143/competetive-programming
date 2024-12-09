#include <bits/stdc++.h>
using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(vector<int> elements)
    {
        this->elements = elements;
    }

    void computeDifference()
    {
        int max = *max_element(elements.begin(), elements.end());
        int min = *min_element(elements.begin(), elements.end());
        maximumDifference = max - min;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}