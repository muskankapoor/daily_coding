#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 4 5  find 4 output 3

// array is sorted
// check if the x is in the middle
// then do the mid of the left and right side 
int bin_search(vector<int> A, int x){

  int not_found = -1;
  int size = sizeof(A)/sizeof(A[0]); 
  int left = 0;
  int right = size - 1;
  while (left <=right){
    int mid = (left + right)/2;
    if (x==A[mid]){
      return mid;
    }
    else if (x < A[mid]){ // decrease right by 1
      right = mid - 1;
    }
    else if (x > A[mid]){ 
      left = mid + 1; // increase left by 1 
    }
  }

  return not_found;


} 


int main(){

  vector<int> vect;
  vect.push_back(1);
  vect.push_back(2);
  vect.push_back(3);
  vect.push_back(4);
  vect.push_back(5);
  
  cout << bin_search(vect,  4);

  cout << endl << bin_search(vect, 6);
}
