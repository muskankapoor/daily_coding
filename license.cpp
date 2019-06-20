#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
    
    
string solution(string &s, int k) {
        
  //  string str = " ";
        
  // 5 4 3 2
  for (int i = 0; i < s.length(); i++){
    if (s[i] == '-'){
      s.erase(s.begin() + i);
    }
  }
         
  int n = s.length(); 
  int s_size = strlen(s); 
  int i; 
  int part_size; 
      
  // Check if string can be divided in 
  // n equal parts 
  if (s_size % n != 0) 
    { 
      cout<<"Invalid Input: String size"; 
      cout<<" is not divisible by n"; 
      return; 
    } 
      
  // Calculate the size of parts to 
  // find the division points 
  part_size = str_size / n; 
  for (i = 0; i< str_size; i++) 
    { 
      if (i % part_size == 0) 
	cout<<endl;  
      cout<< str[i]; 
    } 
}  

return s;
}
    
int main(){
    
  string str = "2-4A0r7-4k";
    
  cout << solution(str, 4);
    
    
}
