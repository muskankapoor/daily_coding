#include <iostream>
#include <vector>
using namespace std;

/*Given an array of positive integers.
  Your task is to find the leaders in the array.
  Note: An element of array is leader if it is greater 
  than or equal to all the elements to its right side.
  Also, the rightmost element is always a leader. */



// scan from right and keep track of max
void leader(int arr[], int size) {
  //{16, 17, 4, 3, 5, 2}; i = 1 j = 2


  int max = arr[size-1]; //last element
  cout << max << " ";
  for (int i  = size - 2; i>=0; i--){
    if (max < arr[i]){
      max = arr[i];
      cout << max << " ";
    }
  }
}
      
      
int main(){
  int arr[]={16, 17, 4, 3, 5, 2};
  //int size = 5;

  //17 5 2 
  leader(arr, 6);

}
