#include <iostream>
#include <string>
using namespace std;


char* findNumber(int arr_count, int* arr, int k) {
  int mid = arr_count/2;
  if (mid == k){
    return "YES";
  }
  int left = 0;
  int right = arr_count - 1; 
  while (left < right){
    if (k < mid){
      right = mid - 1;
    }
    else if (k > mid){
      left = mid + 1; 
    }
    else{
      return "YES";
    }
  }
  return "NO";

}


int main(){

  int arr[] = {1, 2, 3, 4, 5};
  int k = 1;

  cout << findNumber(5, arr, k);
  
}
