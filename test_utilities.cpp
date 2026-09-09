#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
    // Test Case 1: Multiple occurrences
    vector<int> arr1 = {10, 20, 30, 20, 40, 20};
    vector<int> res1 = findAllIndices(arr1, 20);
    cout << "Test 1 (Multiple Occurrences): " << (res1 == vector<int>{1, 3, 5} ? "PASS" : "FAIL") << endl;

    // Test Case 2: Key not present
    vector<int> arr2 = {1, 2, 3, 4};
    vector<int> res2 = findAllIndices(arr2, 99);
    cout << "Test 2 (Key Not Present): " << (res2.empty() ? "PASS" : "FAIL") << endl;

    // Test Case 3: Empty array
    vector<int> arr3 = {};
    vector<int> res3 = findAllIndices(arr3, 5);
    cout << "Test 3 (Empty Array): " << (res3.empty() ? "PASS" : "FAIL") << endl;

    return 0;
}