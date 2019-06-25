#include <iostream>
using namespace std;


struct Node{
  int data;
  Node *next;
};

// Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

// Logic: give head and Nth
// 1 2 3 4 5 ex: 2nd = 4
// count the position since length = 5 - 2 = 3  + 1

/*
  void PrintNthFromLast(Node* head, int n){

  Node *temp = NULL;
  int length = 0;

  while (temp != NULL){

  temp = temp->next;

  length++;
  }

  for (int i = 1; i < length - n + 1; i++){
  temp = temp->next;
  }

  cout << temp->data;

  }


  void Insert(Node **head_ref, int data_value){

  Node *new_node = new Node;
  new_node->data = data_value;
  new_node->next = *head_ref; // so the node after gets the head
  *head_ref = new_node; // now head ref is equal again to the first node
  
  }


  int main(){

  Node *head = NULL; // empty head
  Insert(&head, 1);
  Insert(&head, 2);
  Insert(&head, 3);
  Insert(&head, 4);
  Insert(&head, 5);
  Insert(&head, 6);
  Insert(&head, 7);
  Insert(&head, 8);
  Insert(&head, 9);



  PrintNthFromLast(head, 2);

  }
  
  
  

  
  
*/


// Simple C++ program to find n¡¯th node from end
#include
using namespace std;

/* Link list node */
struct Node
{
  int data;
  struct Node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct Node* head, int n)
{
  int len = 0, i;
  struct Node *temp = head;



 

  // 1) count the number of nodes in Linked List
  while (temp != NULL)
    {
      temp = temp->next;
      len++;
    }

  // check if value of n is not more than length of the linked list
  if (len < n) return; temp = head; // 2) get the (len-n+1)th node from the begining for (i = 1; i < len-n+1; i++) temp = temp->next;

  printf (¡°%d¡±, temp->data);

  return;
}

void push(struct Node** head_ref, int new_data)
{
  /* allocate node */
  struct Node* new_node =
    (struct Node*) malloc(sizeof(struct Node));

  /* put in the data */
  new_node->data = new_data;

  /* link the old list off the new node */
  new_node->next = (*head_ref);

  /* move the head to point to the new node */
  (*head_ref) = new_node;
}

/* Drier program to test above function*/
int main()
{
  /* Start with the empty list */
  struct Node* head = NULL;

  // create linked 35->15->4->20
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);

  printNthFromLast(head, 4);
  return 0;
}
