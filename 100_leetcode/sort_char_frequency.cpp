#include <iostream>
#include <map>
using namespace std;


// How to sort characters based upon frequency?
// Given a string, sort it in decreasing order based on the frequency of characters.


void frequencySort(string s) {
        
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++){
    mp[s[i]]++;
  }
            
  
  map<char, int>:: iterator itr;
  string result;
  for (itr = mp.begin(); itr != mp.end(); itr++) {
    
  } 
        
}


int main(){
  string s = "aabbbc";
  frequencySort(s);
}
