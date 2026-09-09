#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

int main() {
    // Test Case: Valid 2x2 Matrix Multiplication
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    vector<vector<int>> expected = {{19, 22}, {43, 50}};

    vector<vector<int>> C = matrixMultiply(A, B);

    cout << "Matrix Multiplication (2x2): " 
         << (C == expected ? "PASS" : "FAIL") << endl;

    // Test Case: Incompatible dimensions
    vector<vector<int>> BadB = {{1, 2, 3}};
    vector<vector<int>> BadC = matrixMultiply(A, BadB);
    cout << "Incompatible Dimensions: " 
         << (BadC.empty() ? "PASS" : "FAIL") << endl;

    return 0;
}