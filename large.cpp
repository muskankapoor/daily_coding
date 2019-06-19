#include <iostream>
using namespace std;




int Largest(int arr[], int N){
  int first,  i; 
  first =  INT_MIN;

  for (i = 0; i < N; i++) {
    if (arr[i] > first){
 
      first = arr[i];
    }
    
  }

  return first; 

}

int main(){

  int arr[] = {1, 2, 3};
  cout << Largest(arr, 3);

}
