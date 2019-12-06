#include <iostream>
#include <string>
#include <map>
#include <unordered_map> 
using namespace std;


// Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

// Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. You can assume the string to be decoded is valid.

void  encoide(string str){

  if (str.length() == 0){
    return;
  }


  map<char, int> m;
  for (int i = 0; i < str.length(); i++) {
    m[str[i] - 'a']++; 
  }
  cout << "Element  Frequency" << endl; 
  for (auto i : m) {
    cout << i.first << "   " << i.second  
	 << endl; 
  }

  
    
}


void encode(string str) {
  int count = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == str[i+1]) {
      count += 1;
    }
    else {
      str[i];
    }
    cout << str[i] << " " << count << endl;
  }

}

int main(){


  string str = "AAAABBBCCDAA";
  encoide(str);
  // encode(str);

}
