// Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.

// For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:
// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> nums, int k) {
  int size = nums.size();
  vector<int> ans(size - k + 1, 0);
  if(size == 0)
    return vector<int>{};
  int nxt[size];
  int i, j;
  nxt[size - 1] = size - 1;
  i = size - 2;
  while(i >= 0){
    j = i + 1;
    while(nums[i] > nums[j] && j != nxt[j]){
      j = nxt[j];
    }
    if(nums[i] > nums[j]) nxt[i] = i;
    else nxt[i] = j;
    i--;
  }
  for(i = 0; i < ans.size(); i++){
    j = i;
    while(nxt[j] < i + k && j != nxt[j]){
      j = nxt[j];
    }
    ans[i] = nums[j];
  }
  return ans;
}


int main()
{
  vector<int> v;
  
  v.push_back(10);
  v.push_back(5);
  v.push_back(2);
  v.push_back(7);
  v.push_back(8);
  v.push_back(7);


  int k = 3;
  cout << maxSlidingWindow(v, k);
  
}
