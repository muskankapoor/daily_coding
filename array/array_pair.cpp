#include <iostream>
#include <algorithm>
#include <vector>

// Given an integer array, output all pairs that sum up to a specific value k.
using namespace std;

void ArrSum(vector<int> v, int k){

  sort(v.begin(), v.end());


  int i = 0, j = v.size() - 1;


  while (i < j){

    if (v[i] + v[j] == k){
      cout << v[i] << " " << v[j];
      // left_pointer++;
      i++;
      j--;
      // right_pointer--;
      
				    
    }

    else if (v[i] + v[j] < k){
      // left_pointer++;
      i++;
     
      
      
    }

    else if (v[i] + v[j] > k){
      j--;
      // right_pointer--;
      
    }
    
  }
  
  
}


int main(){


  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(2);
  v.push_back(4);
  // v.push_back(4);
  int k = 5;

  ArrSum(v, k);
  
  
}
