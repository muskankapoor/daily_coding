// ex: 3^8

// use standard recurssion process ex 3 * 3^7

#include <iostream>
using namespace std;

int exponent(int base, int power){

  if (power == 0){
    return 1; 
  }

  return base * exponent(base, power - 1);

 
}


// half the problem.
// ex: 3^8 should be 3^4 + 3^4 
int exponentDC(int base, int power){

  if (power == 0){
    return 1; 
  }
  else{
    int halfpow = exponent(baase, power/2);
    int fullpower = halfpow + halfpow;
    if (power % 2 == 1){
      fullpower = fullpower * base; 
    }
  }
  return fullpower;
}

 

int main(){

  cout << exponent(3, 8);

}
