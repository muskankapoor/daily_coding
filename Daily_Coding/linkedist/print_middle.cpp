#include <iostream>
using namespace std;


// brute force and optimzied 
// pirnt midle of linked list

#include <iostream>
using namespace std;


// pirnt midle of linked list

// Tree Node Structure 
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  
// Create new Node 
Node* newLNode(int data) 
{ 
    Node* temp = new Node; 
    temp->data = data; 
    temp->next = NULL; 
    return temp; 
} 
  

  
void  midpoint(Node* head) 
{ 
    Node *temp = head;
        int count = 1;
        while (temp->next != NULL){
            ++count; 
            temp = temp->next;
        }
        
        
        Node *middle = head; 
        int i = 0;
        while (i != count/2){
            middle = middle->next;
            //cout << middle->data << endl;
            i++;
        }
        cout << middle->data;
} 


void printMiddlePointer(struct Node *head)  {

  
  Node *fast_pointer = head;
  Node *slow_pointer = head;

  while (fast_pointer != slow_pointer){

    fast_pointer = head->next->next;
    slow_pointer = head->next;
    
  }
  cout << fast_pointer->data;
  
} 
int main() 
{ 
    Node* head = newLNode(1); 
    head->next = newLNode(2); 
    head->next->next = newLNode(3); 
    head->next->next->next = newLNode(4); 
    head->next->next->next->next = newLNode(5); 
    midpoint(head); 
    //cout << result->data << endl; 
    return 0; 
} 
