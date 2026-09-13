#include <iostream>
#include <vector>
using namespace std;


int isPossible(vector <int> &arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;            }
            pageSum = arr[i];
        }
    }
    return true;
}


int meantime(vector <int> &arr, int n, int m) {
    int sum = 0;
    int maxval = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }

    int start = maxval;
    int end = sum;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }


 
}

int main(){
    vector<int> arr = {2, 3, 4, 10, 40};
    int n = 4;
    int m = 2;
    cout << meantime(arr.data(), n, m) << endl;
}

