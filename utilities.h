#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <string>

int add(int a, int b);
std::vector<int> findAllIndices(const std::vector<int>& arr, int key);
int naivePatternSearch(const std::string& text, const std::string& pattern);

// Task 5: Matrix Multiplication
std::vector<std::vector<int>> matrixMultiply(
    const std::vector<std::vector<int>>& A, 
    const std::vector<std::vector<int>>& B
);

#endif