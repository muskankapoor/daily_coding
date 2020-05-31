#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


// How to sort characters based upon frequency?
// Given a string, sort it in decreasing order based on the frequency of characters.

bool sortbysecdesc(const pair<char,int> &a,  const pair<char,int> &b) { 
       return a.second>b.second; 
}

void frequencySort(string s) {
        
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++){
    mp[s[i]]++;
  }
             
  // vector that copies map into it so it can sort it 
  vector<pair<char, int> > vec;
       
  map<char, int> :: iterator it2;
  for (it2=mp.begin(); it2!=mp.end(); it2++) {
    vec.push_back(make_pair(it2->first, it2->second));
  }

  // sort the vector by decreasingg order of its pair's second value
  sort(vec.begin(), vec.end(),  sortbysecdesc); 


  // print the vector
  cout << "The map, sorted by value is: " << endl;
  for (int i = 0; i < vec.size(); i++){
     
    cout << vec[i].first << ": " << vec[i].second << endl;
  } 
        
}


int main(){
  string s = "aabbbc";
  frequencySort(s);
}
