#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


// print occurance of elemtns in strin g

void occurances(string str){

  unordered_map<char, int> m;
  int i;
  for (i = 0; i < str.length(); i++){
    m[str[i]]++;
  }
  
  for (auto i : m){
      cout << i.first << " " << i.second << endl;
  }

}


int main(){

  string str = "hellogeeks";
  occurances(str);

}
