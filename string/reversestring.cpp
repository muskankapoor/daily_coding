#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


// on time and on space
string reverse(string str){


  string reverse_str = "";
  
  for (int i = str.length() - 1; i >= 0; i--){

    reverse_str.push_back(str[i]);
    

  }
  return reverse_str;

}


// no extra space
//logn 
string reverseStr(string str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);

    return str;
} 

int main(){

  string str = "bold";
  cout << reverseStr(str);
  
  
}
