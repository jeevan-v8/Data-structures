#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int pos = 0;
    for (int i = 0; i < nums.size(); i++) {
      cout << "i: " << i << endl;
      if (nums[i] != val) {
        nums[pos] = nums[i];
        pos++;
      }
    }

    return pos;
  }
};

int main() {
  Solution solution;
  int arr[] = {3, 2, 2, 3};
  vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
  int result = solution.removeElement(nums, 2);

  for (int i : nums) {
    cout << "arr: " << i << endl;
  }
  for (int i = 0; i < result; i++) {
    cout << nums[i] << endl;
  }
}
