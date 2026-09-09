#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

void runTest(const string& testName, const vector<int>& result, const vector<int>& expected) {
    cout << testName << ": " << (result == expected ? "PASS" : "FAIL") << endl;
}

int main() {
    // Test Case 1: Multiple occurrences
    vector<int> arr1 = {10, 20, 30, 20, 40, 20};
    runTest("Multiple Occurrences", findAllIndices(arr1, 20), {1, 3, 5});

    // Test Case 2: Key not present
    vector<int> arr2 = {1, 2, 3, 4};
    runTest("Key Not Present", findAllIndices(arr2, 99), {});

    // Test Case 3: Empty array
    vector<int> arr3 = {};
    runTest("Empty Array", findAllIndices(arr3, 5), {});

    return 0;
}