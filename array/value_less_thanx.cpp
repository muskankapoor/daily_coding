#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CountNumberX(int arr[], int n, int x){

  int l = 0;
  int r = n - 1;
  int result = 0;

  while (l < r){
    if (arr[l] + arr[r] < x){
      result = result + (r - 1);
    }
    else{
      r--;
    }

  }

  return result;


}

int main(){

  int arr[] = {2, 4, 6, 8, 9};

  int n = 5;
  int x = 14; 
  cout << CountNumberX(arr, n, x);
}



// // Given a sorted integer array and number x, the task is to count pairs in array whose sum is less than x.
// // take initial and last value of index in l and r variable.

// 1) Initialize two variables l and r to find the candidate 
//    elements in the sorted array.
//        (a) l = 0
//        (b) r = n - 1
// 2) Initialize : result = 0
// 2) Loop while l < r.

//     // If current left and current
//     // right have sum smaller than x,
//     // the all elements from l+1 to r
//     // form a pair with current
//     (a) If (arr[l] + arr[r] < x)  
//           result = result + (r - l)      
   
//     (b) Else
//             r--;
       
// 3) Return result


