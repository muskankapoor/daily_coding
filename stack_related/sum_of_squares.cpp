// Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

void sortedSquares(vector<int>& A) {
  stack<int> s; 
  vector<int> a; 
  for (int i = 0; i < A.size(); i++){
    int x = pow(A[i], 2);
    if (x < s.top()){
      s.push(x);
    }
    else if (x > s.top()){
      a.push_back(s.top());
      s.pop();
      a.push_back(x);
    }
  }
  while (!s.empty()){
    a.push_back(s.top());
    s.pop();
  }
  
  for (int i = 0; i < A.size(); i++){
    cout << A[i] << " ";
  }
  
}



int main(){

  vector<int> A;
  A.push_back(-4);
  A.push_back(-2);
  A.push_back(0);
  A.push_back(1);
  A.push_back(3);

  sortedSquares(A);


  
}
