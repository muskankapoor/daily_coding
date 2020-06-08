// Implement the following operations of a queue using stacks.


#include <iostream>
#include <stack>
using namespace std;


stack<int> input;
stack<int> output;


void push(int x ){

  input.push(x);

}


void pop(){

  if (!output.empty()){
    cout<< output.pop();
  }
  else{
    while (!input.empty()){
      int x = input.top();
      output.push(x);
      input.pop();
    }
    cout << output.pop();
  }

}


int peak(){

  if (!output.empty()){
    return output.top();
  }
  else{
    while (!input.empty()){
      int x = input.top();
      output.push(x);
      input.pop();
    }
    return output.top();
  }

}



bool isEmpty(){

  if (input.empty() && output.empty()){
    return true; 
  }
  return false;

  
}


int main(){


  push(1);
  push(2);
  cout << peak();
  pop();   // returns 1
  cout << isEmpty(); // returns false
  
}
