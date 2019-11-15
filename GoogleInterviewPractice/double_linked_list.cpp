
struct node{
  int data;
  node *prev, *next;
};


// insert at head
void insert(int newdata) { 
  Node* newnode = new node; 
   newnode->data  = newdata; 
   newnode->prev = NULL; 
   newnode->next = head;     
   if(head !=  NULL) 
      head->prev = newnode ;     
   head = newnode; 
}

// insert at tail
void insert(int newdata){
  Node *newnode = new node;
  newnode->data = newdata;
  newnode->next = NULL;
  Node *last = head; 
  while (last->next != NULL){
    last = last->next;
  }
  last->next = newnode;
  new_node->prev = last; 
}

// reverse doubly linked listv

// reverse the doubly linked list
void reverseList(Node** head)
{
   Node* left = *head, * right = *head;
 
   // traverse entire list and set right next to right
   while (right->next != nullptr)
   right = right->next;
 
   //swap left and right data by moving them towards each other till they meet or cross
   while (left != right && left->prev != right) {
 
      // Swap left and right pointer data
      swap(left->data, right->data);
 
      // Advance left pointer
      left = left->next;
 
      // Advance right pointer
      right = right->prev;
   }
}
