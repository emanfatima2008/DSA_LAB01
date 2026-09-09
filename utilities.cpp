#include "utilities.h"
#include <algorithm>
using namespace std;

// Task 7 Implementation
void rotateArray(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n; // Handle k larger than array length
    if (k < 0) k += n; // Handle negative rotation

    // Reverse the whole array, then reverse the two split parts
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}