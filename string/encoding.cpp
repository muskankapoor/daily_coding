#include <iostream>
#include <string>
using namespace std;

/*create a count array to store the frequency of each character in the 
given string str. Traverse the string str again and check whether the 
frequency of that character is 0 or not. If not 0, then print the character 
along with its frequency and update its frequency to 0 in the hash table. 
This is done so that the same character is not printed again.*/



  
void Encode(string str) {
  
    int n = str.length(); 
    for (int i = 0; i < n; i++) { 
   
        int count = 1; 
        while (i < n - 1 && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        } 
  
        // Print character and its count 
        cout << str[i] << count; 
    } 
} 
    

int main(){

  string str = "AAAABBBCCDAA";
  Encode(str);


  
}
