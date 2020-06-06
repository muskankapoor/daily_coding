// Find all the elements that appear twice in this array.

// Could you do it without extra space and in O(n) runtime?

#include <iostream>
#include <vector>
#include <iterator>
#include <unordered_map>
using namespace std;


// extra space

void Duplicates(vector<int> arr){

  unordered_map<int, int> mp;
  for (int i = 0; i < arr.size(); i++){
    mp[arr[i]]++;
  }

  std::unordered_map<int, int>::iterator it = mp.begin();
 
  while(it != mp.end()){
     
    if (it->second > 1){
      cout << it->first;
    }
    it++;

  }
}


int main(){

  vector<int> v ={4,3,2,7,8,2,3,1};
  Duplicates(v);


}
