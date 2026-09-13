// g++ -std=c++11 demo.cpp -o demo && ./demo


#include <iostream>
using namespace std;


int binarysearch(vector<int> arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarysearch(arr, l, mid - 1, x);

        return binarysearch(arr, mid + 1, r, x);
    }

    return -1;
}


int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int n = arr.size();
    int x = 10;
    int result = binarysearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                     : cout << "Element is present at index " << result;    
    return 0;
}

