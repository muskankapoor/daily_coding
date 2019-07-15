// Given an array A[] of size N and an integer K. Your task is to complete the function countDistinct() which prints the count of distinct numbers in all windows of size k in the array A[].

#include <iostream>
#include <vector>
using namespace std;

// {1, 2, 1, 3, 4, 2, 3}

int countWindowDistinct(int arr[], int k) { 
  int dist_count = 0; 

  // i = 0, i < 4
  for (int i=0; i<k; i++) {
    // 0  1  2
    int j;  //0  1  2
    for (j=0; j<i; j++) {
 
      if (arr[i] == arr[j]) { // 1 == 1
	break;

      }	      
    }
    if (j==i){
      
      dist_count++; //1 2 
    }
  } 
  return dist_count; 
} 
  

void countDistinct(int arr[], int n, int k) { 
    
  for (int i=0; i<=n-k; i++) {
    cout << countWindowDistinct(arr+i, k) << " " ;
  }
} 
  

int main() { 
  int arr[] = {1, 2, 1, 3, 4, 2, 3},  k = 4; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  countDistinct(arr, n, k); 
  return 0; 
} 
