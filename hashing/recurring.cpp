#include<iostream>
#include <set>
#include <map>
using namespace std;

char RepeatCharacter(string str){
  map<char, int> m;
    for (int i = 0; i < str.length(); i++){
    if (m.count(str[i])){
        return str[i];
        break;   
    }
    m[str[i]]++;
  }
  return 'n';
}
int main(){

  string str = "ABCA";
  string str1 = "ABBA";
  cout << RepeatCharacter(str);
  cout << "\n" << RepeatCharacter(str1);

}




