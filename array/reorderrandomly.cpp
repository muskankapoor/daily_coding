#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


void printarray(int arr[], int size);


void reorder(int arr[], int size){

  for (int i = size - 1; i >=1; i++){
    int pick = floor((i+1) * rand());
    int temp = arr[i];
    arr[i] = arr[pick];
    arr[pick] = temp;
  }

  printarray(arr, size);
}

void printarray(int arr[], int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }

}


int main(){

  int arr[] = {1, 0, 5, 2};
  int size = 4;
  reorder(arr, size);

}