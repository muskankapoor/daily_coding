#include <iostream>
#include <set>
using namespace std;


// Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

// For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

// You can modify the input array in-place

int lowest_positive(int arr[], int size){

  set<int> m;

  for (int i = 0; i < size; i++){

    m.insert(arr[i]);
    

  }

  int i  = 0;
  int number;
  while (i != size){
      number = arr[i]++;
    if (m.find(number) != m.end()){
      i++;
    }
    else{
      break;
    }
    
  }
  cout << number;
  return number; 
}
