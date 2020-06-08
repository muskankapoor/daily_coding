// Implement the following operations of a queue using stacks.


#include <iostream>
#include <stack>
using namespace std;


stack<int> input;
stack<int> output;


void push(int x ){

  input.push(x);

}


int pop(){

  if (!output.empty()){
    return output.pop()
  }
  else{
    while (!input.empty()){
      output.push(input.pop());
    }
    return output.pop();
  }

}


int peak(){

  if (!output.empty()){
    return output.top()
  }
  else{
    while (!input.empty()){
      output.push(input.pop());
    }
    return output.top();
  }

}



bool isEmpty(){



}
