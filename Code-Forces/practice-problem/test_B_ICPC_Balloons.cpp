#include <iostream>
#include <unordered_set>
#include <string>
#include <cassert>

using namespace std;

int calculate_balloons(const string& s) {
    unordered_set<char> unique_balloons;
    int total_balloons = 0;

    for (char c : s) {
        if (unique_balloons.find(c) == unique_balloons.end()) {
            unique_balloons.insert(c);
            total_balloons += 2; // 2 for the unique balloon
        } else {
            total_balloons += 1; // 1 for the problem
        }
    }

    return total_balloons;
}

void test_calculate_balloons() {
    assert(calculate_balloons("ABA") == 5);
    assert(calculate_balloons("A") == 2);
    assert(calculate_balloons("ORZ") == 6);
    assert(calculate_balloons("BAAAA") == 7);
    assert(calculate_balloons("BKPT") == 8);
    assert(calculate_balloons("CODEFORCES") == 17);
    assert(calculate_balloons("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 52);
    assert(calculate_balloons("AAABBBCCC") == 15);
    assert(calculate_balloons("ZZZZZZZZZZ") == 11);
    assert(calculate_balloons("ABABABABAB") == 15);
    cout << "All test cases passed!" << endl;
}

int main() {
    test_calculate_balloons();
    return 0;
}