#include <iostream>
#include <vector>
using namespace std;


int linearsearch(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == target) {
                return 1; // Found
            }
        }
    }
    return 0; // Not found
}

int getmaxsum(vector<vector<int>>& matrix) {
    int maxSum = INT_MIN;
    for (int i = 0; i < matrix.size(); i++) {
        int rowSum = 0;
        for (int j = 0; j < matrix[i].size(); j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }
    return maxSum;
}

int diagonalSum(vector<vector<int>>& matrix) {
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++) {
        sum += matrix[i][i]; // Primary diagonal
        if (i != matrix.size() - 1 - i) { // Avoid double counting the center element in odd-sized matrices
            sum += matrix[i][matrix.size() - 1 - i]; // Secondary diagonal
        }
    }
    return sum;
}

int main() {
    int row = 2, col = 3;
    vector<vector<int>> matrisx = {
        {1, 2, 3},
        {4, 5, 6}
    };

    


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrisx[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}