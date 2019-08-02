#include <iostream>
#include <sstream>
using namespace std;

int myAtoi(string str) {
        
  // edge case
  if (str.empty()){
    return 0;
  }
        
  int myNum;
        
  int sign = 1;
        
  while ((!str.empty()) && (str[0] == 32)){
    str.erase(0, 1);
  }
  if (str.empty()){
    return 0;
  }
        
  if ((str[0] == 45) || (str[0] ==43)){
    if (str[0] = 45){
      sign = -1;
      str.erase(0, 1);
    }
    else if (str[0] == 43){
      sighn = 1; 
      str.erase(0, 1);
    }
    if (str.empty() == 0){
      return 0;
    }
  }
        
  stringstream toConvert(str);
  toConvert >> myNum;

	

}
int main(){

  string s = "4193 with words";

  cout << myAtoi(s);

}
