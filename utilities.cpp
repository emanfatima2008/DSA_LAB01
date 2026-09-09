#include "utilities.h"
using namespace std;

// Task 4 Implementation
int naivePatternSearch(const string& text, const string& pattern) {
    if (pattern.empty()) return -1;
    
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // Pattern found at index i
    }
    return -1; // Pattern not found
}