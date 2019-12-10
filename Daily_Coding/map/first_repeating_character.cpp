#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


// print first repeating elemtn in the stirng

char first_repeating_character(string str){

  unordered_map<char, int> m;
  int i;
  for (i = 0; i < str.length(); i++){
    if (m[str[i]] > 0){
      break;
    }
    else{
      m[str[i]]++;
    }
  }

  return str[i];

}


int main(){

  string str = "hello geeks";
  cout << first_repeating_character(str);

}
