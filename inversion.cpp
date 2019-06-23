#include <Iostream>
using namespace std;


// Given an array of positive integers. The task is to find inversion count of array.
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

int InversionCount(int arr[], int size){

  int count = 0;
  
  for (int i = 0; i < size; i++){
    for (int j = 1; j < size; j++){
      if ((arr[i] > arr[j]) && (i < j)){
	count++;
      }
    }
  }

  return count;
  

}



int main(){

  int arr[] = {2, 4, 1, 3, 5};
  
  cout << InversionCount(arr, 5);
  

}
