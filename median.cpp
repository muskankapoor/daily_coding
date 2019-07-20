// Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int computemedian(int arr[], int left, int i, int size);

void median(int arr[], int size){
  int i = 0;
  int left = 0;
  
  
  while  (i != size - 1){
    cout <<  computemedian(arr, left, i, size);
    cout << "\n";
    left++;
      
  }
  
}

int computemedian(int arr[], int left, int i, int size){

  vector<int> a; 
  for (int j = left; j < i; j++){
    a.push_back(arr[j]);
  }

  sort(a.begin(), a.end());

  int index = (left + i)/2;

  return arr[index];
  
  
}

int main(){
  int arr[] = {2, 1, 5, 7, 2, 0, 5};
  int size = 7;

   median(arr, size);
  
}













