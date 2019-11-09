#include <iostream>
#include <iomanip> 
using namespace std;


// Approximate the square root of a number using binary search


double squareRoot(int number){

  int start = 0;
  int end = number;
  int mid;
  int ans; 
  while (start < end){

    mid = (start + end)/2;

    if (mid * mid == number){
      ans = mid;
      break;
    }

    if (mid * mid < number) { 
      start = mid + 1;
      ans = mid; 
      
    }
    else{
      end = mid - 1;

    }

  }

   float increment = 0.1;
    for (int i = 0; i < 5 ; i++) { 
        while (ans * ans <= number) { 
            ans += increment; 
        } 
  
        // loop terminates when ans * ans > number 
        ans = ans - increment; 
        increment = increment / 10; 
    } 
  
  return ans;
  


}


int main(){


  int number = 50;
  cout << squareRoot(number);

}
