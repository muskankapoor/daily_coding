/* Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order. */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintGroup(vector<int> vect);

void SortGroup(int arr[], int size){

  vector<int> even;
  vector<int> odd;

  for (int i = 0; i < size; i++){
    if (arr[i] % 2 == 0){
      even.push_back(arr[i]);
    }
    else{

      odd.push_back(arr[i]);
    }
  }
  
  sort(even.begin(), even.end());
   sort(odd.begin(), odd.end(), greater<int>()); 
   for (int i = 0; i < even.size(); i++){
     odd.push_back(even[i]);
   }
  PrintGroup(odd);
}

void PrintGroup(vector<int> vect){
  for (int i = 0; i < vect.size(); i++){
    cout << vect[i] << " ";
  }
}

int main(){
  // output : 7 5 3 1 0 2 4
  int arr[] = {0,4, 5, 3, 7, 2, 1};

  SortGroup(arr, 7);
  
}
