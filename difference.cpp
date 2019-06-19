#include <iostream>
#include <algorithm> 
using namespace std;

/*Given two sorted arrays. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.*/

// fastest method to use and it is binary search 


int Difference(int arr1[], int size1, int arr2[], int size2){

  int max_number =  max(size1, size2);
  int index = max_number;
  int left = 0;
  int right = max_number - 1;

  while (left <= right){
    int mid = (left + right)/2;

    // if mid is the same then the extra element might be in the right side
    if (arr1[mid] == arr2[mid]){
      left = mid +1;
    }

    else{
      index = mid;
      right = mid - 1;
    }
  }
  return index;
}


int main(){

  int arr1[] = {2, 4, 6, 8, 9, 10, 12};
  int arr2[] = {2, 4, 6, 8, 10, 12};

  cout << Difference(arr1, 7, arr2, 6);

}
  
