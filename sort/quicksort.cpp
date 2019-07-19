#include <iostream>
using namespace std;


void quicksort(int arr[], int size){
  quicksort(arr, 0, size - 1);
}

void quicksort(int arr[], int left, int right){

  // balance check 
  if (left >= right){
    return; 
  }

  // center
  int pivot =  arr[(left + right)/2];
  int index = partition(arr, left, right, pivot); // return that dividing point 

  quicksort(arr left, index - 1);
  quicksort(arr, index, right);
  
  
}

int partition(int arr[], int left, int right, int pivot){
    while (index <= right){
      while (arr[left] < pivot){
	left++;
      }
      while (arr[right] > pivot){
	right--;
      }

      if (left <= right){
	swap(arr, left, right);
	left++;
	right--;
      }
    }
    // return partition point
    return left;

}
