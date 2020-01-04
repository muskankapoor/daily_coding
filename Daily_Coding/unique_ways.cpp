
#include <iostream>
#include <vector>
#include <set>
using namespace std;


// There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.

// For example, if N is 4, then there are 5 unique ways:

// 1, 1, 1, 1
// 2, 1, 1
// 1, 2, 1
// 1, 1, 2
// 2, 2


int fib(int n) { 
  if (n <= 1) {
    return n;
  }
  return fib(n-1) + fib(n-2);
  cout << fib(n-1) + fib(n-2);
} 
  

int countWays(int n) { 
    return fib(n + 1); 
} 


int main(){

  

  cout << countWays(4);

  
}
