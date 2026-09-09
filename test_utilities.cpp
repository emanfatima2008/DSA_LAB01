#include <iostream>
#include <string>
#include "utilities.h"
using namespace std;

int main() {
    string text = "hello world";

    // Test 1: Pattern at te beginning
    cout << "Test 1 (Beginning): " << (naivePatternSearch(text, "hello") == 0 ? "PASS" : "FAIL") << endl;

    // Test 2: Pattern at ending.
    cout << "Test 2 (End): " << (naivePatternSearch(text, "world") == 6 ? "PASS" : "FAIL") << endl;

    // Test 3: Pattern not present
    cout << "Test 3 (Not Present): " << (naivePatternSearch(text, "cpp") == -1 ? "PASS" : "FAIL") << endl;

    // Test 4: Empty pattern
    cout << "Test 4 (Empty Pattern): " << (naivePatternSearch(text, "") == -1 ? "PASS" : "FAIL") << endl;

    return 0;
}