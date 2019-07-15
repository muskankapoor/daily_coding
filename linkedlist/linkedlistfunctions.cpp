// pirnt items


 SinglyLinkedListNode {
      int data;
      SinglyLinkedListNode* next;
  };
 


void printLinkedList(SinglyLinkedListNode* head) {
  if (head == NULL){
    return;
  }

  SinglyLinkedListNode* temp; // = new SinglyLinkedListNode();
  temp = head; 

  while (temp != NULL){
  
    cout << temp->data << "\n";
    temp = temp->next;
  }
}
