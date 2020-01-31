// Take a string and turn it to an int.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){


  string s = "134";

  stringstream convert(s);

  int x = 0;

  convert >> x;

  cout << "value of x is " << x;

 
    string str2 = "314159"; 
     
    int myint2 = stoi(str2);

    cout << "value of myint2 " << myint2;

}


