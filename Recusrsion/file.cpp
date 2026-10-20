#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(const vector<int> &nums, size_t n) {
  if (n <= 1) {
    return true;
  }
  return nums[n - 1] >= nums[n - 2] && is_sorted(nums, n - 1);
}

int main() {

  vector<int> nums = {1, 11, 20, 390, 40, 50};
  cout << is_sorted(nums, nums.size()) << endl;
  return 0;
}