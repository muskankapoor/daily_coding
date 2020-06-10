#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


// Given an unsorted integer array, find the smallest missing positive integer.

// algorhtmns:

// 1. on2 search for 1 to n
// 2. onlogn sorting
// 3. hashing on time but on space

// below is on time

int SmallestMisingPositive(vector<int> arr){

  int n = arr.size();
  bool present[n + 1] = {false};
  for (int i = 0; i < n; i++){
    if (arr[i] > 0 && arr[i] <= n){
      present[arr[i]] = true;
      
    }
  }

  for (int i = 1; i <= n; i++){
    if (!present[i]){
      return i; 
    }
  }
  return n + 1;
}



int main(){


  vector<int> arr = {7,8,9,11,12};
  cout << SmallestMisingPositive(arr);



}
