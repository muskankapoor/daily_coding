#include <iostream>
using namespace std;

/* Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.*/


void FirstAndLast(int arr[], int size, int element){

  int i, j;
  for (i = 0; i < size; i++){
    if (arr[i] == element){
      cout << i << endl;
      break;
    }
  }

  for (j = size - 1; j>=0; j--){
    if (arr[j] == element){
      cout << j << endl;;
      break;
    }
  }

  // can do a condtion if i doesn't equal j then print it out 

}


int main(){

  int arr[]= {1, 3, 5, 5, 5, 5, 67, 123, 125,};

  FirstAndLast(arr, 9, 5);

  int arr1[] = {1, 3, 5, 5, 5, 5, 7, 123, 125};

  FirstAndLast(arr1, 9, 7);

}

