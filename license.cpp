#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>
#include <string>
#include <locale>
using namespace std;
    
bool AlphaNumerical(string s){

  for (int i = 0; i < s.length(); i++){

    int variable = int(s[i]);

    if ( !(variable > 47 && variable < 58) && !(variable > 64 && variable < 91) && !(variable > 96 && variable < 123) && !(variable == 45 || variable == 47)){
      return false;
    }
    return true;
  }

}


string solution(string &s, int k) {

  if (s.length() < 1){
    return "invalid";
  }

  if (!(AlphaNumerical(s))) {
    return "";
  }

  for (int i = 0; i < s.length(); i++){
    if (s[i] == '-'){
      s.erase(s.begin() + i);
    }
  }


  int key = 0;
  string strObj = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '-') {
      strObj[key] = toupper(s[i]);
      key++;
    }
  }
  
  string newStr = "";
  int counter = key - 1;

  for (int i = 0; i < k; i++){ 
    newStr += strObj[k];
    if (counter != 0 && counter % k == 0) {
      newStr += "-";
    }
    counter--;
  }
  
  return newStr;
}



int main(){
    
  string str = "2-4A0r7-4k";

  cout <<  solution(str, 4);
 
    
}
