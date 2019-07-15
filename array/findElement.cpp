#include <iostream>
using namespace std;

/* Given an integer array Arr[] and an element x. The task is to find if the given element is present in array or not. return the index of the array*/

int FindElement(int arr[], int size, int element){

  for (int i = 0; i < size; i++){
    if (arr[i]==element){
      return i;
    }
  }
  return -1;
}

int main(){

  int arr[] = {1, 2, 3, 4};
  cout << FindElement(arr, 4, 4) << endl;

  int arr1[] = {2, 4, 7, 8};
  cout << FindElement(arr, 4, 1);
}
