// 1 2 1 3 2 1 4 2
// In the first test case for query 
// 1 2    the stack will be {2}
// 1 3    the stack will be {2 3}
// 2       poped element will be 3 the stack will be {2}
// 1 4    the stack will be {2 4}
// 2       poped element will be 4
// output: 3 4


#include <iostream>
#include <stack>
using namespace std;

void StackAr(int arr[], int size){
  stack<int> s;

  if (arr[0] == 2){
      s.push(-1);
    }
  for (int i = 1; i < size; i++){

    if (arr[i] == 1){
      s.push(arr[i+1]);
    }

    if (arr[i] == 2){
      if (arr[i-1] != 1){
	//s.pop();
	cout << s.top();// << " ";
	s.pop();
	//cout<< " ";
      }
    }

  }
  //cout << "\n";
}


int main(){

  /*int size = 8;-
  int arr[] = {1, 2, 1, 3, 2, 1, 4, 2};
  StackAr(arr, size);
  cout << "\n";*/
  
  int arr1[]={2, 1, 4, 1, 5, 2};
int size1 = 6; 
 StackAr(arr1, 6);
}
	

    
