// find unique elemtns in array2
// so lets put eleemnts of array1 in table
#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <sstream>
using namespace std;

// Given 2 arrays, find the unique elements in array 2.

void uniqueElements(int arr1[], int arr2[], int size1, int size2){

  unordered_set<int> s; // no duplicates
  for (int i = 0; i < size1; i++){
    s.insert(arr1[i]);
  }

  // Print all elements of  
  // first array that are not 
  // present in hash table 
  for (int i = 0; i < size2; i++) {
    if (s.find(arr2[i]) == s.end()) {
      cout << arr2[i] << " ";
    }
  }
}


int main(){
    
    // find elements that are in array 2 but not in array 1

    int a[] = { 1, 2, 3}; 
    int b[] = { 2, 4, 3, 1, 0 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[1]); 
    uniqueElements(a, b, n, m); 
    return 0; 
    

 
}



