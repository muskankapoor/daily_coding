// haccerank 


class Node{
private:
  int data;
  Node *next;
  Node(int data){
    this->data = data;
  }
};

class Queue{
private:
  Node *head; // remove from head
  Node **tail; // insert 
  bool isEmpty(){
    return head == NULL; 
  }
  int peek(){
    head->data;
  }
  void add(int data){
    Node node = new node(data);
    if (tail != NULL){
      tail->next = node;
    } // add at end 
   tail = node;
   if (head == NULL){
     head = node; 
   }
      
  }
  int remove(){
    int data = head->data;
    head = head->next;
    if (head == NULL){
      tail = NULL;
    }
    return data;

  }
};
