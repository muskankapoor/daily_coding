#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// remove duplicate chaaracters in a stirng
string remove_duplicates(string str){

  sort(str.begin(), str.end());
  for (int i = 0; i < str.length(); i++){
    if (str[i] = str[i++]){
      str.erase(str[i+1]);
    }
  }
  return str; 
}

int main(){

  cout << remove_duplicates("dadcbcd");
}
