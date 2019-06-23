#include <iostream>
using namespace std;


// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
// kandane's algo


int MaxSubArray(int arr[], int size){

  int max_so_far = 0;
  int max_ending_here = 0;

  for (int i = 0; i < size; i++){
    max_ending_here = max_ending_here + arr[i]; // up to that index
    if (max_ending_here < 0){
      max_ending_here = 0;
    }
    if(max_so_far < max_ending_here){
      max_so_far = max_ending_here;
    }
  }

  return max_so_far;

}


int main(){

  int arr[] = {1, 2, 3, -2, 5};
  int arr1[] = {-1, -2, -3, -4};

  cout << MaxSubArray(arr, 5);
  cout << MaxSubArray(arr1, 4);
  
  

}
