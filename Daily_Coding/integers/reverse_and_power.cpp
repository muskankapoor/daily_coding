#include <iostream>
using namespace std;

//reverse number
int reverse(int num){


  int rev_num = 0;
  while(num > 0) { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 


// power of anumber
int power(int base, int exponent){

  int i = 0, result;
  while (i != exponent){
    result *= base;
  }
  return result;
  
  
}



int main(){

  // int number = 1234;
  // cout << reverse(number);

  int base = 21;
  int exponent = 2;
  cout << power(base, exponent);
  
}
