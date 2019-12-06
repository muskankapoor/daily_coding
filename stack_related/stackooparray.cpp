#include <iostream>
using namespace std;

//object oriented orientation example
#define MAX_SIZE 101

class Stack{
  private:
  int A[MAX_SIZE]; //array to store the stack
  int top; //variable to mark the topindex
  public:
  //constructor
  Stack(){
    top=-1; //for empty array
  }
  void Push(int x){
  //overflow
    if(top==MAX_SIZE-1){//highest indext n the array
      cout<<"Error";
      return;
    }
    top++;
    A[top]=x;
  }

  void Print(){
    cout<<"Stack: ";
    for (int i=0; i<=top; i++){
      cout<<A[i];
    }
    cout<<"\n";
  }

  void Pop(){
    if(top==-1){ //already empti list
      cout<<"Error";
      return;
    }
    top--;
  }

  int Top(){
    return A[top];
  }

  // This function will return 1 (true) if stack is empty, 0 (false) otherwise
  int IsEmpty()
  {
    if(top == -1) return 1;
    return 0;
  }
};


int main(){
  // Code to test the implementation. 
  // calling Print() after each push or pop to see the state of stack. 
  Stack S;
  S.Push(2);S.Print();
  S.Push(5);S.Print();
  S.Push(10);S.Print();
  S.Pop();S.Print();
  S.Push(12);S.Print();
}
