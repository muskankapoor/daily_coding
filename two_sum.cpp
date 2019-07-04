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

vector<int> twoSum(int arr[], int target, int size){
  unordered_map<int, int> sum;
  vector<int> vect;

  for (int i = 0; i < size; i++){
    sum.insert(std::make_pair(arr[i], i));
  }

  for (int i = 0; i < size; i++){
    int value = target - arr[i];
    if (sum.find(value)==sum.end() && sum.at(value)!=i){
      vect.push_back(arr[value]);
      vect.push_back(arr[i]);
    }
  }

  return vect;
}



int main(){

  int size = 4; 
  int nums[4] = {2, 7, 11, 15};
  int target = 9;

  twoSum(nums, target, 4);

}
       
       
  
