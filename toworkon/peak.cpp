/* Given an array A of N integers. The task is to find a peak element in it.
An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour. */


// use binary search 
int Peak(int arr[], int low, int high, int size){ 


  // 1. find the mid

  int mid = (low + high) /2;

  if (arr[mid] >

  int count = 0;

  // 1  2  4
  for (int i = size - 1; i >= size; i--){

    if (arr[i - 1] < arr[i]){
      count++
    }
    
  }

}
