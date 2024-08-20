#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
  vector<int> concatinate(vector<int> &nums) {
    vector<int> resultarr;
    for(int i = 0; i<2; i++){
    resultarr.insert(resultarr.end(), nums.begin(), nums.end());
    }
    return resultarr;
  }
};

int main() {
  Solution solution;
  int arr[] = {1, 2, 1};
  vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
  vector<int> result = solution.concatinate(nums);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
}
