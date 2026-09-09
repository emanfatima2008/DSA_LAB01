#include "utilities.h"
#include<vector>
using namespace std;
#include <unordered_map>

// Task 6 Implementation
int findMode(const vector<int>& nums) {
    if (nums.empty()) return -1; // Return -1 for empty array

    std::unordered_map<int, int> frequencyMap;
    int maxFreq = 0;
    int mode = nums[0];

    for (int num : nums) {
        frequencyMap[num]++;
        if (frequencyMap[num] > maxFreq) {
            maxFreq = frequencyMap[num];
            mode = num;
      
        }
    }

    
    return mode;
}