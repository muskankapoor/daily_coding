// Write a program to print all permutations of a given string
#include <iostream>
#include <string>
using namespace std;

void permute(string s, int l, int r){

  if (l == r){
    cout << s << endl;
  }
  else{

    for (int i = 1; i <= r; i++){
      swap(a[1], a[i]);
      permute(a, l+1, r);
      swap(a[l], a[i]);  
    }  
  }  
}  
  
// Driver Code  
int main()  {
  
  string str = "ABC";  
  int n = str.size();  
  permute(str, 0, n-1);  
  return 0;  
}  
  
