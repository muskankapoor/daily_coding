// Write a function kth_to_last_node() that takes an integer kk and the head_node of a singly-linked list, and returns the kkth to last node in the list.
// remove 

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next; 
	    
};


void k_to_last(int k, Node *head){

  Node *temp = head;

  int len = 0;
  
  while (temp != NULL){
      temp = temp->next;
      len++;
  }
  Node *l = head; 
  
  int counter = 0;
  while (counter != len){
     l=l->next;
  }
  cout << l->data;

  
}
void push(struct Node** head_ref, int new_data) 
{ 
  /* allocate node */
  struct Node* new_node = new Node(); 
  
  /* put in the data */
  new_node->data = new_data; 
  
  /* link the old list off the new node */
  new_node->next = (*head_ref); 
  
  /* move the head to point to the new node */
  (*head_ref) = new_node; 
} 
  
// Driver Code 
int main() 
{ 
  /* Start with the empty list */
  struct Node* head = NULL; 
  
  // create linked 35->15->4->20 
  push(&head, 20); 
  push(&head, 4); 
  push(&head, 15); 
  push(&head, 35); 
  
    k_to_last(4, head); 
  return 0; 
} 
