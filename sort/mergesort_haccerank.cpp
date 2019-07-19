#include <iostream>
using namespace std;

void MergeSort(int arr[], int size){

  MergeSort(arr, int arr1[], 0, size - 1);
}

void MergeSort(int arr[], int left, int right){

  if (left >= right){
    return; 
  }
  int middle = (left + right)/2;
  MergeSort(arr, left, middle);
  MergeSort(arr, middle + 1, right);
  MergeHalves(arr, temp, left, right);
}

void MergeHalves(int arr[], int left, int right){
  int leftend = (right + left)/2;
  int rightstart = leftend + 1;
  int size = right - left + 1;

  int left1 = left;
  int right1 = rightstart;
  int index = left;

  while (left1 <= leftend && right1 <=right ){
    if (arr[left1] <= array[right1]){
      temp[index] = arr[left1];
      index++;
      left1++;
    }
    else{
      temp[index] = arr[right1];
      right1++;
    }
    index++;
  }

  array
}
