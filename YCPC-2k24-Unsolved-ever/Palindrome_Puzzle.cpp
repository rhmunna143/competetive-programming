#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    int n = s.length();
    int mismatch_count = 0;

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            ++mismatch_count;
        }
    }

    if (mismatch_count == 1 || (mismatch_count == 0 && n % 2 == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}