#include <iostream>
using namespace std;

//basic impleenttion of stack 

#define MAX_SIZE 101 //define variable for all instances of max size
int A[MAX_SIZE];
int top=-1; //empty stack 

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


int main(){
  Push(2);
  Print();
  Push(5);
  Print();
  Push(10);Print();
  Pop();Print();
  Push(12);Print();
}
  
  
  
  
  
