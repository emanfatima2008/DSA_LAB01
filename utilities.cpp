#include "utilities.h"

int add(int a, int b) { 
    return a + b; 
}

std::vector<int> findAllIndices(const std::vector<int>& arr, int key) {
    std::vector<int> indices;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int naivePatternSearch(const std::string& text, const std::string& pattern) {
    if (pattern.empty()) return -1;
    
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // Found match at index i
    }
    return -1; // Not found
}