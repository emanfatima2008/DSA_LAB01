#include "utilities.h"
#include<vector>
using namespace std;

// Task 3 Implementation
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
        
        indices.push_back(i);
        
    }
   
}
    return indices;
}