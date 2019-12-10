#include <iostream>
using namespace std;


// remove duplicates from sorted linked list

// recursive and iterative

  
/* Link list node */
class Node  
{  
    public: 
    int data;  
    Node* next;  
};  
  
/* The function removes duplicates from a sorted list */
void removeDuplicates(Node* head)  {

  Node *temp = head;
  Node *next_next;
  
  while (temp->next != NULL){
    if (temp->data == temp->next->data){
      next_next = temp->next->next;
      delete temp->next;
      temp->next = next_next;
    }
    else{
      temp = temp->next;
    }
  }
 
}  


void removeDuplicatesRecursive(Node* head)  {  
   
    Node* to_free;  

    if (head == NULL)  
        return;  
  
   
    if (head->next != NULL)  
      {  
          
        if (head->data == head->next->data)  
	  {  
            
            to_free = head->next;  
	    head->next = head->next->next; 
	    delete (to_free); 
	    removeDuplicates(head); 
	  }  
        else 
	  {  
            removeDuplicates(head->next); 
	  }  
      }  
}


void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node = new Node(); 
              
    /* put in the data */
    new_node->data = new_data;  
                  
    /* link the old list off the new node */
    new_node->next = (*head_ref);      
          
    /* move the head to point to the new node */
    (*head_ref) = new_node;  
}  
  
/* Function to print nodes in a given linked list */
void printList(Node *node)  
{  
    while (node!=NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
}  
  
/* Driver program to test above functions*/
int main()  
{  
    /* Start with the empty list */
    Node* head = NULL;  
      
    /* Let us create a sorted linked list to test the functions  
    Created linked list will be 11->11->11->13->13->20 */
    push(&head, 20);  
    push(&head, 13);  
    push(&head, 13);  
    push(&head, 11);  
    push(&head, 11);  
    push(&head, 11);                                      
  
    cout<<"Linked list before duplicate removal ";  
    printList(head);  
  
    /* Remove duplicates from linked list */
    removeDuplicates(head);  
  
    cout<<"\nLinked list after duplicate removal ";      
    printList(head);              
      
    return 0;  
} 
