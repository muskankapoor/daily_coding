/* Given two arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.*/

#include <iostream>
#include <cmath>
using namespace std;


void Closest(int arr1, int size1, int arr2, int size2, int x){

  int current = abs((arr1[0] + arr2[0]) - sum), i, j;
  for (i = 0; i < size1; i++){
      for (j = 0; j < size2; j++){
	if (abs((arr1[i] + arr[j]) - sum)) < current){
	     current = (abs((arr1[i] + arr[j]) - sum));
	     
      	}
      
      }

  }
    cout << arr[i] << " " << arr[j];
}



int main(){

  int arr[] =  {10, 20, 30, 40);
  int arr1[] = {1, 4, 5, 7};

  Closest(arr, 4, arr1, 4);
  
}
