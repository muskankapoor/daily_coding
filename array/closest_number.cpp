// Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.



#include <iostream>
#include <climits>
#include <cmath>
using namespace std;


int ClosestValue(int arr[], int size, int x){

  int counter_diff =  INT_MAX;

  int i, index;
  
  for (i = size - 1; i >= 0; i--){

    int diff =  abs(x - arr[i]);

    if (diff < counter_diff){
      counter_diff = diff;
      index =  arr[i];
    }
    
  }

  return index;

}


int main(){

  int arr[] = {1, 3, 6, 7};
  int arr1[] = {1, 2, 4, 5, 6, 8, 9};

  cout << ClosestValue(arr, 4, 4) << "\n";
  cout << ClosestValue(arr1, 7, 4);


}
