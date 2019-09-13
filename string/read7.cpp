// Using a read7() method that returns 7 characters from a file, implement readN(n) which reads n characters.

// For example, given a file with the content ¡°Hello world¡±, three read7() returns ¡°Hello w¡±, ¡°orld¡± and then ¡°¡±.


#include <iostream>
#include <string>

using namespace std;


void readN(int n, string str){
  string str2 = str.substr(0,n);
  cout << str2 <<"\n";
  cout << str.substr(n, str.length() - 1);
  cout << "\n" << "";
}

int main(){

  string str = "hello world";
  readN(7, str);
  

}
