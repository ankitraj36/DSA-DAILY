#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binary_search(int start,int end,vector<int> &nums,int target){
    if (start>end) {
        return -1;
    }
    int mid = start+(end-start)/2;
    if (nums[mid]==target) {
        return mid;
    }
    if (nums[mid]<target) {
        return binary_search(mid+1,end,nums,target);
    }
    return binary_search(start,mid-1,nums,target);

}
    


int main() {


  return 0;
}