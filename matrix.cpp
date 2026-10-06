#include <iostream>
#include <vector>
using namespace std;

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