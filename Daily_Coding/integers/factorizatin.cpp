#include <iostream>
#include <cmath>
using namespace std;

// prime factorization 

// Starting from 2, keep dividing the number by the current divisor as long as it is divisible (so use mod). If the current divisor no longer gives an integer quotient, increment the divisor. The divisor value gets bigger, the number itself gets smaller because of repeated divisions.

void primeFactors(int n)  {  
  
  while (n % 2 == 0)  
    {  
      cout << 2 << " ";   //2
      n = n/2;  
    }  
  
  // n must be odd at this point. So we can skip  
  // one element (Note i = i +2)  
  for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  // i < 3 
      // While i divides n, print i and divide n  
      while (n % i == 0)  
        {  
	  cout << i << " ";   //3 3
	  n = n/i;  
        }  
    }  
  
  // This condition is to handle the case when n  
  // is a prime number greater than 2  
  if (n > 2)  
    cout << n << " ";  
}  


// 18

int main()  
{  
  int n = 18;  
  primeFactors(n);  
  return 0;  
}  
