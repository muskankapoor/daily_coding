// https://leetcode.com/problems/jewels-and-stones/description/

// optimized solution
int numJewelsInStones(string J, string S) {
  unordered_map<char, char> hash = {};
  for(char i:J)
    {
      hash[i]=i;
    }
  int num_jewels = 0;
  for(char c:S)
    {
      if(hash[c]==c)
	num_jewels++;
    }
  return num_jewels;
}

// this is my bad solution
#include <iostream>
#include <string>
using namespace std;

int numJewelsInStones(string J, string S) {
  int count = 0;
  for(int i = 0 ; i<J.length() ; i++){
    for(int j = 0 ; j<S.length() ; j++){
      if(J[i] == S[j]){
	count++;
      }
    }
  }
  return count;
}



int main(){
  /*
  string J =  "z", S = "ZZ";

  cout << numJewelsInStones(J, S) <<;*/


  string J1 = "aA", S1 = "aAAbbbb";

  cout << numJewelsInStones(J1, S1) << endl;
  
}
