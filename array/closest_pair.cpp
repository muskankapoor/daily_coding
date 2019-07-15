/* Given two arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.*/

#include <iostream>
#include <cmath>
#include <climits> 
using namespace std;



void Closest(int arr1, int size1, int arr2, int size2, int x){
 
    int diff = INT_MAX; 
  

    int res_l, res_r; 
  
    int l = 0, r = size2-1; 
    while (l<size1 && r>=0) { 
	if (abs(arr1[l] + arr2[r] - x) < diff) { 
	    res_l = l; 
	    res_r = r; 
	    diff = abs(arr1[l] + arr2[r] - x); 
	  } 
  

	if (arr1[l] + arr2[r] > x) {
	  r--;
	}
	else { 
	  l++;
	}
      } 
  
    // Print the result 
    cout << "The closest pair is [" << arr1[res_l] << ", "
         << arr2[res_r] << "] \n"; 
  
}



int main(){

  int arr[] =  {10, 20, 30, 40);
  int arr1[] = {1, 4, 5, 7};

  //output 1 AND 30 
  Closest(arr, 4, arr1, 4, 32);
  
}
