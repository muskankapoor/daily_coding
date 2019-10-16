/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

  You may assume that each input would have exactly one solution, and you may not use the same element twice.

  Example:

  Given nums = [2, 7, 11, 15], target = 9,

  Because nums[0] + nums[1] = 2 + 7 = 9,
  return [0, 1].r
*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <array>
using namespace std;




//target: 9
//look at one elemetn target - x =then the tw numbers
//otherwise increment that number


vector<int> twoSum(vector<int>& nums, int target) {

  unordered_map<int, int> sum;

  for (int i = 0; i < nums.size(); i++){
    sum[nums[i]] = i; // {2, 7, 11, 15}; sum[2] == 0
  } 

  for (int i = 0; i < nums.size(); i++){
    int value = target - nums[i]; //9 - 2 = 7
    if (sum.count(value) && sum[value]!=i){ //7 and i != 0
      return {i, sum[value]};  //0, 1
    }
  }
  return {};
}
      

int main(){

  int size = 4; 
  int nums[4] = {2, 7, 11, 15};
  int target = 9;

  twoSum(nums, target, 4);

}
       
       
  
