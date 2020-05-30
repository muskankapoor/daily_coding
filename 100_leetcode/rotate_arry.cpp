#include <iostream>
#include <vector>
#include<algorithm> 
using namespace std;


// First reverse the whole array.
// Second reverse the array from 0 to k-1 elements.
// Third reverse the array from k to end of array elements.
// Time complexity: O(n)
// Space Complexity: O(1)

void rotate(vector<int>& nums, int k) {        
  k %= nums.size(); // rotating an array of 2 by 3 times is equal to rotating 1 time
  reverse(nums.begin(), nums.end());
  reverse(nums.begin()+k, nums.end());
  reverse(nums.begin(), nums.begin()+k);
}

/*
// reverse_arr
void reverse_arr(vector<int> nums, int start, int end){
  while(start < end){
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
    start++;
    end--;
  }
}


// Given an array, rotate the array to the right by k steps, where k is non-negative.
// this does one by one 
void rotate_arr(int arr[], int n) {
  
  int x = arr[n - 1], i; 
  for (i = n - 1; i > 0; i--) 
    arr[i] = arr[i - 1];  
  arr[0] = x; 
} 

*/
int main()  {
  
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5); 
  int i;
  
  cout << "Given array is \n"; 
  for (i = 0; i < arr.size(); i++) 
    cout << arr[i]; 

  int k = 3; 
  rotate(arr, k); 
  
  cout << "\nRotated array is\n"; 
  for (i = 0; i < arr.size(); i++) 
    cout << arr[i]; 
  
  return 0; 
} 
