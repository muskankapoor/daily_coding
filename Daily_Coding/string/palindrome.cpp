// recursive and back and forth 
#include <iostream>
#include <string>
using namespace std;

// time o(n)

bool palindrome(string str){

  int low = 0;
  int high = str.length() - 1;
  while (high > low){
    if (str[low++] != str[high--]){
      return false;
      cout << "false";
    }
  }
  return true;
  cout << "true";

}


// recursvie solution

bool helper(string str, int s, int e){

  if (s == e){
    return true; 
  }

  if (str[s] != str[e]){
    return false;
  }
  
  if (s < e + 1) {
    return isPalRec(str, s + 1, e - 1); 
  }
    return true; 

}

bool is_recursive_palimdrome(string str){

  if (str.length() == 0){
    return true;
  }

  return helper(str, 0, str.length() - 1);
  

}

// reverse method 
reverse(str.begin(), str.end()); 
