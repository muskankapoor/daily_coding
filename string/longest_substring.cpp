// Given an integer k and a string s, find the length of the longest substring that contains at most k distinct characters.

// For example, given s = "abcba" and k = 2, the longest substring with k distinct characters is "bcb".


#include <iostream>
#include <string>
using namespace std;


string LongestSubstr(string str, int k){

  // 1. examples - badeff k = 3 longest is deff
  // while it doesnt reach end
  // if disntict character ++ if >3) index ++
  // push into into temp
  int last_index = str.length - 1;
  int first = 0;
  while (first < last_index){
    if (
  }
}
