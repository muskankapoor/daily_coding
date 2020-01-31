#include <iostream>
// vlaidate a palidrome
using namespace std;


bool ValidatePalidrome(string str){

  int n = str.length();
  int low = 0;
  int high = n - 1;

  while (high > low){
    if (str[low] != str[high]){
      return false;
      break;
    }
    low++;
    high--;
  }
  return true; 
}


int main() 
{ 
  cout << isPalindrome("abba"); 
  cout << isPalindrome("geeks"); 
    return 0; 
}
