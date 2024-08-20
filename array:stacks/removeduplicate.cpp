#include<iostream>
#include <vector>

using namespace std;

class Solution{

public:
  int removedduplocale(vector<int>& nums){
   int pos = 1;
   
  for(int i = 1; i<nums.size(); i++){
    if(nums[i] != nums[i-1]){
      nums[pos] = nums[i];
      pos++;
    }
    
  }
    return pos;
  }

};

int main(){
  Solution solution;
  int arr[] = {1,1,2};
  vector<int> nums(arr, arr+ sizeof(arr)/sizeof(arr[0])); 
  int newlenght = solution.removedduplocale(nums);

  for(int i =0;i<newlenght;i++){
    cout<<nums[i]<<endl;
  } 
  return 0;
}

