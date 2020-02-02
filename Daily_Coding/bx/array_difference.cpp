// find unique elemtns in array2 that are not in array1
// O(N) time and andspace 
#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <sstream>
using namespace std;



vector<int> uniqueElements(vector<int> array1, vector<int> array2){

  unordered_set<int> s; // no duplicates
  int size1 = array1.size();
  int size2 = array2.size();
  vector<int> result;
  for (int i = 0; i < size1; i++){
    s.insert(arr1[i]);
  }

  // Print all elements of  
  // first array that are not 
  // present in hash table 
  for (int i = 0; i < size2; i++) {
    if (s.find(arr2[i]) == s.end()) {
      result.push_back(arr2[i]); 
    }
  }
  return reuslt;
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

// naive solutin
void uniqueElements(int arr1[], int arr2[], int size1, int size2){
    
    for (int i = 0; i < size2; i++){
        int j = 0; 
        for (j = 0; j < size1; j++){
            if (arr2[i] == arr1[j]){
	      break;
            }
            
        }
        if (j == size1){
            cout << arr2[i] << " ";
        }
    }
}
