/*
   Given an array of N size. The task is to rotate array by d elements where d is less than or equal to N.*/
#include <iostream>
#include <vector>
using namespace std;

  void printOut(vector<int> vec);
  void rotate(vector<int> arr, int d){
  vector<int> temp;
  vector<int> vec;
  for (int i = 0; i < d; i++){
  temp.push_back(arr[i]);
  
  }
  for (int i = d; i < arr.size(); i++){
  vec.push_back(arr[i]);
  }
  for (int i = 0; i < temp.size(); i++){
  vec.push_back(temp[i]);
  }
  printOut(vec);
  }
  void printOut(vector<int> vec){
  for (int i = 0; i < vec.size(); i++){
  cout << vec[i] << " ";
  }
  }

int main(){



  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);

  int d = 2;

  /* for (int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
    }*/
   rotate(vec, d);

}
