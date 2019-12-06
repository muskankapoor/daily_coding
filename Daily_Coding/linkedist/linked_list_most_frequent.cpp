// Given a singly linked list, write code to find the most frequent element value in the list and its occurrence.

// In case of duplicate number of occurrences, return the element value closest to the head.

// A solution of time complexity O(N) average is preferred.

#include <iostream>
#include <unordered_map>
using namespace std; 

struct Node{
	int data; 
	Node *next; 
};

void push(Node** head_ref, int new_data) 
{ 
    /* allocate node */
    Node* new_node = new Node; 
    /* put in the data */
    new_node->data = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref) = new_node; 
} 
  
void frequentValue(Node *head){
	Node *current = head;
	int hash[256] = {0}; 
	while (current->next != NULL){
	        hash[current->data]++;
		current = current->next;
	}
	 int max_count = 0, res = -1;
   	 for (auto i : hash) {
        if (max_count < hash[i]) {
            res = i;
            max_count = hash[i];
        }
    }
    cout << res << " " << max_count;
}
int main(){
    Node* head = NULL; 
  
    /* Use push() to construct below list 
     1->2->1->3->1  */
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1); 
    
    
}

