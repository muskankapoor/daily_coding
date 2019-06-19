// Given an array A of size N, print the reverse of it.


#include <iostream>
#include <vector>
using namespace std;

void reverse(int arr[], int size){

  vector<int> reversed;

  for (int i = size - 1; i >=0; i--){
    reversed.push_back(arr[i]);
    cout << arr[i] << " ";
  }
}

int main(){

  int arr[]= {1, 2, 3, 4};

  int size = 4;

  reverse(arr, size);
}
