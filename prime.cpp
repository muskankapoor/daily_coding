#include <iostream>
using namespace std;

/*A prime number is Super Prime if it is a sum of two primes. Find all the Super Primes upto N*/


// 1. generate all prime numbers less than n

bool FindPrime(int n, bool prime[]){

  prime[] = true;
  
    


bool IsPrime(int n){
  /*
  1. The number to be checked is entered.
2. If it is divisible by any natural number from 2, then is it is not a prime number.
3. Else it is a prime number.
4. The result is printed.
5. Exit.*/

  for (int i = 2; i < n; i++){
    if (n % i == 0){
      return false;
    }

  }

  return true;
}


int main(){

  cout << SuperPrime(5);
  //cout << IsPrime(5) << endl << IsPrime(10);
}
