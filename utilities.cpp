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
        if (j == m) return i;
    }
    return -1;
}
// Task 5 Implementation
std::vector<std::vector<int>> matrixMultiply(
    const std::vector<std::vector<int>>& A, 
    const std::vector<std::vector<int>>& B
) {
    if (A.empty() || B.empty() || A[0].size() != B.size()) {
        return {}; // Incompatible dimensions
    }

    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();

    std::vector<std::vector<int>> C(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}