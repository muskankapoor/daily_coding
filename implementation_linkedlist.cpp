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
  
  void printList(){

    Node *current = head;

    while (current->next != NULL){
      cout << current->data << " ";
      current = current->next;
    }
  }


};
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;
    /*if(position == 0)
    {
        aux->next = temp;
        head = aux;
        return aux;
    }*/
    int i = 0;
    while(i < position - 1){
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node; 
    return head; 
    // 123 pos =2
    // new 1243
}
  
