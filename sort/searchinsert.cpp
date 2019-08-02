// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Example 1:

// Input: [1,3,5,6], 5
// Output: 2
// Example 2:

// Input: [1,3,5,6], 2
// Output: 1
// Example 3:

// Input: [1,3,5,6], 7
// Output: 4
// Example 4:

// Input: [1,3,5,6], 0
// Output: 0




#include <iostream>
#include <vector>
using namespace std;



int searchfunct(vector<int>& nums, int target) {

  // 1 3 5 6 taret = 7
  // if located at end 
  if(target > nums[nums.size()-1]){
    return nums.size();
  }
 
  int l=0;
  int r=nums.size()-1; // r = 3 
 
  while(l<r){ // 0 < 3
    int m = l+(r-l)/2; // m = 1
    if(target>nums[m]){
      l=m+1;
    }else{
      r=m; // r = 1
    }
  }
 
  return l;

}

int main(){

  //vector<int> v;
  vector<int> vect;
  vect.push_back(1);
  vect.push_back(3);
  vect.push_back(5);
  vect.push_back(6);

  int target = 2;
  //Output: 2

  //vector<int> v1 {1, 3, 5, 6};
  //int target1 = 7;

  // Output: 4

  cout <<  searchfunct(vect, target);
  //cout <<  searchfunct(v1, target1);

  
}
