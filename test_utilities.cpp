#include <iostream>
#include <vector>
#include <string>
#include "utilities.h"
using namespace std;

int main() {
    // Task 4: Naive Pattern Search Tests
    string text = "hello world";

    // 1. Pattern at the beginning
    cout << "Pattern at beginning: " 
         << (naivePatternSearch(text, "hello") == 0 ? "PASS" : "FAIL") << endl;

    // 2. Pattern at the end
    cout << "Pattern at end: " 
         << (naivePatternSearch(text, "world") == 6 ? "PASS" : "FAIL") << endl;

    // 3. Pattern not present
    cout << "Pattern not present: " 
         << (naivePatternSearch(text, "cpp") == -1 ? "PASS" : "FAIL") << endl;

    // 4. Empty pattern
    cout << "Empty pattern: " 
         << (naivePatternSearch(text, "") == -1 ? "PASS" : "FAIL") << endl;

    return 0;
}