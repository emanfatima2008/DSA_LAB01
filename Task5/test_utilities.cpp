#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
    // Test n = 0
    auto t0 = generatePascalsTriangle(0);
    cout << "Test 1 (n=0): " << (t0.empty() ? "PASS" : "FAIL") << endl;

    // Test n = 1
    auto t1 = generatePascalsTriangle(1);
    cout << "Test 2 (n=1): " << (t1.size() == 1 && t1[0] == vector<int>{1} ? "PASS" : "FAIL") << endl;

    // Test n = 5
    auto t5 = generatePascalsTriangle(5);
    cout << "Test 3 (n=5 size): " << (t5.size() == 5 ? "PASS" : "FAIL") << endl;

    // Test Row 5 -> {1, 4, 6, 4, 1}
    vector<int> expectedRow5 = {1, 4, 6, 4, 1};
    bool row5Pass = (t5.size() >= 5 && t5[4] == expectedRow5);
    cout << "Test 4 (Verify Row 5 {1,4,6,4,1}): " << (row5Pass ? "PASS" : "FAIL") << endl;

    return 0;
}