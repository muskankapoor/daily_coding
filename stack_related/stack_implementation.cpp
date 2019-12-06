#include <iostream>
#include <stack>

using namespace std;


#define SIZE 10

class Stack{

  int *arr;
  int top;
  int capacity;


public:

  Stack(int size = SIZE);

  void push(int);

  int pop(); //returns top and deletes 

  int peak(); //returns top without modifying 

  int size();
  bool isEmpty();
  bool isFull();

};

Stack::Stack(int size){

  arr = new int[size];
  capacity = size;
  top = -1;

}


void Stack::push(int x){

  if(isFull()){
    cout << "overflow";
  }

  cout << "Inserting " << x << '\n';

  arr[++top] = x;

}


int Stack::pop(){


  if(isEmpty()){

    cout << "EMPTY";
  }


  cout << "removing " << peak() << endl;

  return arr[top--];
}


int Stack::peak(){

  return arr[top];

}

int Stack::size(){

  return top + 1;

}


bool Stack::isEmpty(){

  return top = -1;

}

bool Stack::isFull(){

  //return size() = capacity;
  return top = capacity - 1;

}

int main(){

  Stack stack(3);
  
  cout << "\n";

  stack.push(3);
  
  cout << "\n";

  stack.push(2);

  
  cout << "\n";
  stack.pop();
  
  cout << "\n";
  stack.pop();
  
  cout << "\n";

  stack.push(1);
  
  cout << "\n";

  cout << "top element is " << stack.peak();

  cout << "\n";

  cout << "stack  size is " << stack.size();
  
  cout << "\n";

  stack.pop();

  
}
