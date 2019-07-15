/*Given a sorted array A of size N and a number X, you need to find the number of occurrences of X in A.*/

#include <iostream>
using namespace std;


int NumberOccurrence(int arr[], int size, int X){

  int count = 0;

  for (int i = 0; i < size; i++){

    if (arr[i] == X){
      count++;
    }
  }
  return count; 

}

int main(){

  int size = 7;
  int arr[] = {1, 1, 2, 2, 2, 2, 3};
  cout << NumberOccurrence(arr, size, 2);
  cout << endl << NumberOccurrence(arr, size, 7);

}
