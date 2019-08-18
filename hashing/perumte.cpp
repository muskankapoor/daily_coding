// S and T are strings composed of lowercase letters. In S, no letter occurs more than once.

// S was sorted in some custom order previously. We want to permute the characters of T so that they match the order that S was sorted. More specifically, if x occurs before y in S, then x should occur before y in the returned string.

// Return any permutation of T (as a string) that satisfies this property.

// Example :
// Input: 
// S = "cba"
// T = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in S, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in S, it can be at any position in T. "dcba", "cdba", "cbda" are also valid outputs.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


string customSortString(string S, string T) {
  unordered_map<char, int> m; 
  string result = "";
  for (int i = 0; i < T.length(); i++){
    m[T[i]]++;
  }
  for (int i = 0; i < S.length(); i++){
    while(m[S[i]]){
      result = result + S[i];
      m[S[i]]--;
    }
  }
  for (auto i: m){
    while (i.second){
      result = result + i.first; 
      i.second--;
    }
  }
  return result; 
        
}
