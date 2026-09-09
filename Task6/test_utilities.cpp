#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
    // Test 1: Single Mode
    vector<int> nums1 = {1, 3, 3, 3, 2, 1};
    cout << "Test 1 (Single Mode 3): " << (findMode(nums1) == 3 ? "PASS" : "FAIL") << endl;

    // Test 2: All Unique Elements 
    vector<int> nums2 = {10, 20, 30};
    cout << "Test 2 (All Unique): " << (findMode(nums2) == 10 ? "PASS" : "FAIL") << endl;

    // Test 3: Empty Array
    vector<int> nums3 = {};
    cout << "Test 3 (Empty Array): " << (findMode(nums3) == -1 ? "PASS" : "FAIL") << endl;

    return 0;
}