#include <iostream>
using namespace std;

struct Node { 
  int data; 
  Node *next; 
}; 


void PrintMiddle(Node *head) { 

  Node *slow_ptr = head; 
  Node *fast_ptr = head; 
  
  if (head!=NULL) { 
      while (fast_ptr != NULL && fast_ptr->next != NULL){ 
	fast_ptr = fast_ptr->next->next;  // is two head
	  slow_ptr = slow_ptr->next; 
      } // when fast pointer reaches end then slow pointer will ready middle 
      cout << "The middle element is " << slow_ptr->data; 
    } 
} 
  
void push(Node **head_ref, int new_data) { 

  Node* new_node = new Node; 
  
  new_node->data  = new_data; 
  
  new_node->next = *head_ref; 
  
  *head_ref = new_node; 
} 
  

void printList(struct Node *ptr) { 
  while (ptr != NULL) {
    cout << ptr->data << " ";
    ptr = ptr->next;
    }

} 
  

int main() 
{ 
 
  Node* head = NULL; 
  int i; 
  
  for (i=5; i>0; i--) { 
      push(&head, i); 
     
    }
  printList(head);
  cout << "\n";
  PrintMiddle(head);
  return 0; 
}
