#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
    // Test 1: Standard Rotation (k = 3)

    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    rotateArray(nums1, 3);
    vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
    cout << "Test 1 (k = 3): " << (nums1 == expected1 ? "PASS" : "FAIL") << endl;

    // Test 2: Rotation k larger than array size (k = 8 on size 4)
    vector<int> nums2 = {1, 2, 3, 4};
    rotateArray(nums2, 8);
    vector<int> expected2 = {1, 2, 3, 4}; // 8 % 4 = 0 shift
    cout << "Test 2 (k = 8): " << (nums2 == expected2 ? "PASS" : "FAIL") << endl;

    
    // Test 3: Empty Array
    vector<int> nums3 = {};
    rotateArray(nums3, 2);
    cout << "Test 3 (Empty Array): " << (nums3.empty() ? "PASS" : "FAIL") << endl;

    return 0;
}