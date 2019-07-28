#include <iostream>
#include <set>
#include <vector> 

using namespace std;

// Given an integer array, output all pairs that sum up to a specific value k.


void ArrPAIR(vector<int> v, int k){


  set<int> s;
  set<int> output; 

  for (int i = 0; i < v.size(); i++){
    int target = k - v[i];


    auto finder = s.find(target); 
    if (finder){
      output.insert(target);
      output.insert(v[i]);
    }

    else{
      s.insert(target);
    }
  }
  for (auto it= output.begin(); it != output.end(); ++it) {
        cout << ' ' << *it;
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

  ArrPAIR(v, k);

  
}
