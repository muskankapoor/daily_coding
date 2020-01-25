// Given a string s, find the longest palindromic substring in s.
#include <iostream>
#include <string>
using namespace std;

// Function to print a substring str[low..high] 
void printSubStr( string str, int low, int high ) 
{ 
    for( int i = low; i <= high; ++i ) 
        cout << str[i]; 
} 

int longestPalString(string sr){

  int n = str.size();
  bool table[n][n];

  memset(table, 0, sizeof(table)); // all is false

  int maxlength = 1; // all substrings are length 1
  
  for (int i = 0; i < n; i++){
    table[i][i] = true;
  }

  // substr 2 
  int start = 0;
  for (int i = 0; i < n - 1; i++){
    if (str[i] == str[i+1]){
      table[i][i+1] = true;
      start = i;
      maxlength = 2; 
    }
    
  }

  for (int k = 3; k < n - k + 1; i++){
    int j = i + k - 1;

    // checking for sub-string from ith index to 
    // jth index iff str[i+1] to str[j-1] is a 
    // palindrome 
    if (table[i+1][j-1] && str[i] == str[j]) {
      
	table[i][j] = true; 
  
	if (k > maxLength) 
	  { 
	    start = i; 
	    maxLength = k; 
	  } 
    } 
    cout << "Longest palindrome substring is: "; 
    printSubStr( str, start, start + maxLength - 1 ); } 
} 
  

  
