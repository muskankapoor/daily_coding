#include <iostream>
#include <string>
using namespace std;

/*Given a string s, remove all consonants and prints the string s that contains vowels only.*/

string RemoveConsonants(string str){

  for (int i = 0; i < str.size(); i++){

    if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u'){
        str.erase(std::remove(str.begin(), str.end(), str[i]), str.end());
    }
  }

  return str;
}


int main(){

  string str = "geeks";

  string str1 = "what are you doing";

  cout << RemoveConsonants(str1);
}
