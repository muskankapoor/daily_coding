#include <iostream>
#include <vector>
using namespace std;



// ologn time
// o1 space
int sqrtx(int x){


  // 8
  // left = 1
  // right = 8
  // mid = 4
  // 

  int left = 1;
  int right = x;

  while (left < right){
    int mid = (left + right)/2;

    if (mid * mid == x){
      cout << mid << " found it\n";
      return mid; 
    }
    else if (mid * mid > x){
      right = mid; //right = 4 mid = 2
      cout << mid << " mid is greater\n";

    }
    else{
      left = mid + 1; //3
       cout << mid << " mid is less\n";
    }

  }
  cout << left;
  return left - 1;
}


int main(){

  int x = 8;
  cout << sqrtx(8);


}
