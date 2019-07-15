#include <iostream>
using namespace std;



/* Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements. */

void printArr(int arr[], int N);

// we have to sort the left and the right 
void ReverseGroup(int arr[], int n, int k) 
{ 
  for (int i = 0; i < n; i += k) 
    { 
      int left = i; 
  
       
      int right = i + k - 1;
  
        
      while (left < right) {
	swap(arr[left++], arr[right--]);
      }
  
    } 
} 
  
// Driver code 
int main() 
{ 
  int arr[] = {10, 20, 30, 40, 50, 60};
  int k = 2; 
  
  int n = sizeof(arr) / sizeof(arr[0]); 
  
  ReverseGroup(arr, n, k); 
  
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

 
} 
