//INSERT NODE IN THE BEGINNING OF THE LSIT of top of stack
#include <iostream>
using namespace std;

//struct to create Node
struct Node{
  int data;
  Node * link; //creates link
};

Node *top=NULL; //stores address of head
//global variable 

void Push(int x){
  //the following is literally a new node 
  Node *temp=new Node(); //temp variable that stores the address of that node 
  temp->data=x; //one part of Node
  temp->link=top ; //and the next for now is initually is null if head is the only element or the next wll be the previous element 
  top =temp; //and how head is temp 
}

void Pop (){
  Node *temp=new Node();
  if (top==NULL){
    return;
  }
  temp=top;
  top=top->link;
  delete temp;
}

void print(){
  Node *temp=top;
  while (temp!=NULL){
    cout<<temp->data;
    temp=temp->link;
  }
  cout<<"\n";
}


int main(){
  top= NULL;
 
    Push(10);
    Push(20);
    Push(30);
    Pop();
    print();
    return 0;
}
  
  
  
  
  
