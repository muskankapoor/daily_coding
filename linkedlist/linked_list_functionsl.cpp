#include <iostream>
#include <limits>
#include <list>
using namespace std;


class SinglyLinkedListNode {
public:
  int data;
  SinglyLinkedListNode* next;
};


//  . Given a pointer to the head node of a linked list, print its elements in order, one element per line. If the head pointer is null (indicating the list is empty), don~{!/~}t print anything.
void printLinkedList(SinglyLinkedListNode* head) {
  if (head == NULL){
    return;
  }

  SinglyLinkedListNode* next = new SinglyLinkedListNode;
  next = head;

  while (next != NULL){
  
    cout << next->data << " ";
    next = next->next;
  }
}



int main()
{
    SinglyLinkedListNode* llist = new SinglyLinkedListNode();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node(llist_item);
    }

    printLinkedList(llist->head);

    return 0;
}
