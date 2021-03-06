// ONLOGN 

#include <iostream>
#include <vector>
#include <algorithm> 
#include <unordered_map>
using namespace std;

// Given a non-empty array of integers, return the k most frequent elements.

void FrequentElements(int arr[], int size, int k);
bool compare(pair<int, int> p1, pair<int, int> p2); 

// two pairs of beggining to end of pair 
bool compare(pair<int, int> p1, pair<int, int> p2) { 

  // if frequencies of two elements are same 
  // then the larger number should come first 
  if (p1.second == p2.second) {
    return p1.first > p2.first;
  }
          
  // sort on the basis of decreasing order 
  // of frequencies     
  return p1.second > p2.second;     
}

void FrequentElements(int arr[], int size, int k){
  
  unordered_map<int, int> mp;
  for (int i = 0; i < size; i++){
    mp[arr[i]]++;  //stores the ocount
  }
  
  // traversal using interators
  /* unordered_map<int, int>:: iterator itr;  
  // for (itr = mp.begin(); itr != mp.end(); itr++) { 
  cout << itr->first << "  " << itr->second << endl; 
  } */

  vector<pair<int, int>> freq_arr(mp.begin(), mp.end()); //pair of the begin and end 
  sort(freq_arr.begin(), freq_arr.end(), compare);

  vector<int> v;
  
  for (int i = 0; i<k; i++) {
    cout <<freq_arr[i].first << "\n";
  }
       

}


int main(){

  int arr[] = {1,1,1,2,2,3};
  int size = 6;
  int k = 2;

  FrequentElements(arr, size, k);

}
