#include <iostream>
using namespace std;


class SinglyLinkedListNode {
public:
  int data;
  SinglyLinkedListNode* next;
  SinglyLinkedListNode *head;

  void printLinkedList(SinglyLinkedListNode* head);
  SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int value);
};


// You are given the pointer to the head node of a linked list and an integer to add to the list. Create a new node with the given integer. Insert this node at the tail of the linked list and return the head node of the linked list formed after inserting this new node. The given head pointer may be null, meaning that the initial list is empty.


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int value) {
  SinglyLinkedListNode* temp = new SinglyLinkedListNode;

  temp->data = value;
  temp->next = NULL;
  
  if (head == NULL){
    head = temp;
    temp->data;
    temp->next = NULL;
    temp = head;
  }

  else{
    head->next = temp;
    head = temp;
  }
    
}

//  . Given a pointer to the head node of a linked list, print its elements in order, one element per line. If the head pointer is null (indicating the list is empty), don~{!/~}t print anything.
// traversal 
void printLinkedList(SinglyLinkedListNode* head) {
  if (head == NULL){
    return;
  } //empty return nothing 

  // create a new node 
  SinglyLinkedListNode* temp; // = new SinglyLinkedListNode();
  
  // cout << head->data << "\n";
  temp = head;
  while (temp != NULL){
  
    cout << temp->data << "\n";
    temp = temp->next;
  }
}




int main(){

  SinglyLinkedListNode list;
  SinglyLinkedListNode *head;
  // SinglyLinkedListNode (1;
  list.insertNodeAtTail(head, 1);
  list.insertNodeAtTail(head, 2);
  list.insertNodeAtTail(head, 3);

  printLinkedList(head);


    return 0;
}
