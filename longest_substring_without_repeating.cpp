#include <iostream>
#include <map>
#include <string>



using namespace std;

// Given a string, print the longest substring without repeating characters. For example, the longest substrings without repeating characters for “ABDEFGABEF” are “BDEFGA” and “DEFGAB”, with length 6. For “BBBB” the longest substring is “B”, with length 1. The desired time complexity is O(n) where n is the length of the string.


string FindLongestSubstr(string str){

  int i;
  in n = str.length();

  //starting point of current substr
  int st = 0;

  int curlen;

  int maxlen = 0;

  // starting index of maximum length substring. 
  int start;

  
