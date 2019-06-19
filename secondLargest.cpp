#include <iostream>
using namespace std;

/*
find Second largest element 
1) Initialize two variables first and second to INT_MIN as,
   first = second = INT_MIN
2) Start traversing the array,
   a) If the current element in array say arr[i] is greater
      than first. Then update first and second as,
      second = first
      first = arr[i]
   b) If the current element is in between first and second,
      then update second to store the value of current variable as
      second = arr[i]
3) Return the value stored in second.
*/

int SecondLargest(int arr[], int N){
  int first, second, i; 
  first = second = INT_MIN;

  for (i = 0; i < N; i++) {
    if (arr[i] > first){
      second = first;
      first = arr[i];
    }

    else if ((arr[i] < first) && (arr[i] > second)){

      second = arr[i];
    }
    
  }

  return second; 

}


 int main(int argc, char *argv[])
{
 
    int arr[] = {12, 35, 1, 10, 34, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << SecondLargest(arr, n); 
    return 0; 
} 
  

  
