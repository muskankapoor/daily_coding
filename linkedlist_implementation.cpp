#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;
  Node(int data){
    this->data = data;
  }
};

class LinkedList{
public:
  Node *head;

  // at end 
  void append(int data){

    if (head == NULL){
      head = new Node(data);
    }
    Node *current = head;
    while (current->next != NULL){
      current = current->next;
    }
    current->next = new Node(data);
  }

  // at front 
  void prepend(int data){
    Node *newHead = new Node(data);
    newHead->next = head;
    head = newHead;
  }

  void deletewithvalue(int data){
    if (head == NULL){
      return;
    }

    if (head->data == data){
      head = head->next;
      return;
    }

    Node *current = head;

    while (current->next != NULL){
      if (current->next->data == data){
	current->next = current->next->next;
	return; 
      }
      current = current->next;

    }
  }
  
  void printList(Node *head){

    Node *current = head;

    while (current->next != NULL){
      cout << current->data << " ";
      current = current->next;
    }
  }

};



int main(){


  Node *head; 
  LinkedList obj;
  obj.append(3);
  obj.append(4);
  obj.append(5);

  obj.printList(head);

}
  
    

    
