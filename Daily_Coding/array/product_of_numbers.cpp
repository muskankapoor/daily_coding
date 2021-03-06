// Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

#include <iostream>
#include <vector>
using namespace std; 

// using divison
// find ht eprudct of the array then divide it by arr[i]
vector<int> product_number(vector<int> a){

  int product;
  vector<int> v;
  for (int i = 0; i < a.size(); i++){
    product *= a[i];
  }
  
  for (int i = 0; i < a.size(); i++){
    v.push_back(product/a[i]);
  }

  return v; 
  
}


// another solution whtout divison and O(n)time

void productArray(vector<int> a){

  int n = a.size();

  //   onstruct a temporary array left[] such that left[i] contains product of all elements on left of arr[i] excluding arr[i].
  // 2) Construct another temporary array right[] such that right[i] contains product of all elements on on right of arr[i] excluding arr[i].
  // 3) To get prod[], multiply left[] and right[].
  int* left = new int[sizeof(int) *n];
  int* right = new int[sizeof(int) *n];
  int* product = new int[sizeof(int) *n];


  left[0] = 1;
  right[n - 1] = 1;

  for (int i = 1; i < n; i++){
    left[i] = arr[i - 1] * left[i - 1];
  }

 /* Construct the right array */
    for (j = n - 2; j >= 0; j--) {
      right[j] = arr[j + 1] * right[j + 1]; 
    }
  /* Construct the product array using  
     left[] and right[] */
  for (i = 0; i < n; i++) {
    prod[i] = left[i] * right[i]; 
  }
  /* print the constructed prod array */
  for (i = 0; i < n; i++) {
    cout << prod[i] << " ";
  }
}


int main(){


  vector<int> v;
  v.push_back(10);
  v.push_back(3);
  v.push_back(5);
  v.push_back(6);
  v.push_back(2);
 
  productArray(v); 


}
