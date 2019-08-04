#include <iostream>
using namespace std;

// Given a linkedlist of integers and an integer value, delete every node of the linkedlist containing that value.

struct Node{
  int data;
  Node *next;
};



void RemoveNode(Node *head, int value){


  if (head == NULL){
    return;
  }

  if (head->data == value){
    head = head->next;
    return 
  }
  Node *current = head;
  while (current->next != NULL){
    if (current->next->data == value){
      current->next = crrent->next->next;
      return; 
    }
    current = current->next; 
  }

  }

