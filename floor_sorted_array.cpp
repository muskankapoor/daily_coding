#include <iostream>
using namespace std;


/*
Given a sorted array arr[] of size N without duplicates, and given a value x. Find the floor of x in given array. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x


  Output the index of floor of x if exists, else print -1. */


int FloorNumber(int arr[], int size, int x){

  int i;
  for (i = size - 1; i >= 0; i--){
    if (arr[i] < x || arr[i] == x ){
      return i;
    }
  }


return -1;
}



int main(){

  int arr[] = {1, 2, 8, 10, 11, 12, 19};
  cout << FloorNumber(arr, 7, 0) << "\n";
  cout << FloorNumber(arr, 7, 5) << "\n";
  cout << FloorNumber(arr, 7, 10) << "\n";
  
  // Output:
  // -1
  // 1
  // 3

}
