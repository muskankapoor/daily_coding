#include <iostream>
using namespace std;


  
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
/* Function to get the middle of the linked list*/
void printMiddle(Node *head) { 
    Node *slow_ptr = head; 
    Node *fast_ptr = head; 
  
    if (head!=NULL) { 
        while (fast_ptr != NULL && fast_ptr->next != NULL) { 
            fast_ptr = fast_ptr->next->next; 
            slow_ptr = slow_ptr->next; 
        }
	cout << "The middle element is " <<  slow_ptr->data; 
    } 
} 
  
void Push(Node** head_ref, int new_data) { 
    /* allocate node */
  Node* new_node = new Node; 
  
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 


// A utility function to print a given linked list 
void PrintList(Node *ptr) { 
    while (ptr != NULL) { 
      cout <<  ptr->data; 
        ptr = ptr->next; 
    } 
    cout << "NULL";
} 
  
/* Drier program to test above function*/
int main() { 
    /* Start with the empty list */
    Node* head = NULL; 
    int i; 
  
    for (i=5; i>0; i--) { 
        Push(&head, i); 
        PrintList(head); 
        PrintMiddle(head); 
    } 
  
    return 0; 
} 
