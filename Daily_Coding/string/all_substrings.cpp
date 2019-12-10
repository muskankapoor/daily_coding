#include <iostream>
#include <string>
using namespace std;

// print all substring of string


void subtring(string str){


  for (int i = 0; i < str.length(); i++){
    for (int j = 1; j < str.length() - 1; j++){
      cout << str.substr(i, j) << endl;
    }
  }

}

int main(){

  string abcd = "abcd";
  cout << substring(abcd);

}
