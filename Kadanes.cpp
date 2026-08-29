#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        // If currentSum becomes negative, reset it to 0
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
