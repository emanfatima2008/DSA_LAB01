#include "utilities.h"
#include<vector>
using namespace std;

// Task 5 Implementation
vector<vector<int>> generatePascalsTriangle(int numRows) {
  vector<vector<int>> triangle;
    if (numRows <= 0)
     return triangle;


    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }

    return triangle;
}