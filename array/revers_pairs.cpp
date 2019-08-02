#include <iostream>
#include <string>
using namespace std;


int reversePairs(vector<int>& nums) {
  int count_pairs = 0;
  for (auto i = 0; i < nums.size(); i++){
    for (auto j = 0; j < nums.size(); j++){
      if ((i > j) && (nums[i] > 2 * nums[j])){
	count_pairs++;
      }
    }
  }
  return count_pairs; 
}


