/* Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum. */


#include <iostream>
using namespace std;

// min = center

void Pendulum(int arr[], int size){

  // 1 3 2 5 4
  //   5 3 1 2 4
    
  sort(arr, arr + size);

  int position = 5/2 + 1;
  arr[position] = arr[0];

  int i;
  for (int i = position; i < size; i+=2){

    arr[i]
    
  }
   

}


int main(){


  int arr[] = {1, 3, 2, 5, 4};
  int size = 5;
  Pendulum(arr, size);
  
  


}
