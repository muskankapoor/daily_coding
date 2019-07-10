#include <iostream>
using namespace std;


// haccerank video and webiste 
class Node{
public:
  int data;
  Node *next;
  Node(int data){
    this->data = data;
  }
};

class LinkedList{
public:
  Node *head;

  // at end 
  void append(int data){

    if (head == NULL){
      head = new Node(data);
    }
    Node *current = head;
    while (current->next != NULL){
      current = current->next;
    }
    current->next = new Node(data);
  }

  // at front 
  void prepend(int data){
    Node *newHead = new Node(data);
    newHead->next = head;
    head = newHead;
  }

  void deletewithvalue(int data){
    if (head == NULL){
      return;
    }

    if (head->data == data){
      head = head->next;
      return;
    }

    Node *current = head;

    while (current->next != NULL){
      if (current->next->data == data){
	current->next = current->next->next;
	return; 
      }
      current = current->next;

    }
  }
  
  void printList(){

    Node *current = head;

    while (current->next != NULL){
      cout << current->data << " ";
      current = current->next;
    }
  }


};


// from hackernak website belwo 
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;
    /*if(position == 0)
    {
        aux->next = temp;
        head = aux;
        return aux;
    }*/
    int i = 0;
    while(i < position - 1){
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node; 
    return head; 
    // 123 pos =2
    // new 1243
}
  


SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

// 1 2 3 5 6
    SinglyLinkedListNode *current = head;
    int pos = 0;
    while (current->next != NULL){
        if (pos == position - 1){
            delete current->next; 
            current->next = current->next->next; 
        }
        pos++;
        current = current->next;
    }
     
    return head; 

}



// pirnt reverse
 void printL(SinglyLinkedListNode *head); 

void reversePrint(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *current = head; 
    SinglyLinkedListNode *n = NULL;

// 1 2 3 
    while (current != NULL){

        n = current->next;
        current->next = prev; 
        prev = current;
        current = n; 
       // cout << current->next << " " << current->data << " ";
        // cout << current->prev;
        
    }
    head = prev; 
    printL(head);
}

void printL(SinglyLinkedListNode *head){
        SinglyLinkedListNode *temp = head; 
        while (temp != NULL) { 
            cout << temp->data << "\n"; 
            temp = temp->next; 
        } 
} 



SinglyLinkedListNode*  reversePrint(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *current = head; 
    SinglyLinkedListNode *n = NULL;

// 1 2 3 
    while (current != NULL){

        n = current->next;
        current->next = prev; 
        prev = current;
        current = n; 
       // cout << current->next << " " << current->data << " ";
        // cout << current->prev;
        
    }
    head = prev;
    return head;
}

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *current = head1;
    SinglyLinkedListNode *current1 = head2; 
    int count = 0;
    int count1 = 0;
    while (current->next != NULL){
        count++;
        current = current->next;
    }
    while (current1->next != NULL){
        count1++;
        current1 = current1->next;
    }
    if (count != count1) {
        return 0;
    }
    else{
    while ((current != NULL) && (current1 != NULL)){
            if (current->data != current1->data){
                return 0;
            }
            current = current->next;
            current1 = current1->next; 
        }
    }
        
    return 1;

}

 
bool compare_lists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {

  while(headA != NULL && headB != NULL){
      if(headA -> data != headB -> data){
          return 0;
      }
      headA = headA->next; 
      headB = headB -> next;
  }
    return (!(headA || headB));

/*It returns true if both headA and headB are NOT null and false if either A or B or bot

 */
// merge two sorted iist
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    
    if (headA == NULL && headB == NULL) return NULL;
    else if (headA == NULL) return headB;
    else if (headB == NULL) return headA;
    
    if(headA->data <= headB->data)
        headA->next = mergeLists(headA->next, headB);
    
    else {
        SinglyLinkedListNode* temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = mergeLists(headA->next, headB);
    }
    
    return headA;
}


// get node at speicif locaiton
 int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    
    SinglyLinkedListNode *trailingNode = head;
    int len = 0;
    
    while (head != NULL){
        if (len > positionFromTail){
            trailingNode = trailingNode->next;
        }
        len += 1;
        head = head->next;
    }

  return trailingNode->data;
}


 // get node at value
  
 int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    
    SinglyLinkedListNode *trailingNode = head;
    int len = 0;
    
    while (head != NULL){
        if (len > positionFromTail){
            trailingNode = trailingNode->next;
        }
        len += 1;
        head = head->next;
    }

  return trailingNode->data;
}




 // delete duplicates
 SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *current = head;
 //   int pos = 0;
    while (current->next != NULL){
        if (current->data == current->next->data){
            delete current->next; 
            current->next = current->next->next; 
            continue; 
        }
        //pos++;
        current = current->next;
    }
     
    return head; 

}

  */
bool has_cycle(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;  
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // in a  cycle they will meet
        if (slow == fast){
            return 1;
        }
    }

    return 0;

}

 


 
// two lists and their merge point

// 1 2 3
//    /
//  2 3

 int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    SinglyLinkedListNode *currentA = headA;
    SinglyLinkedListNode *currentB = headB;

    //Do till the two nodes are the same
    while(currentA != currentB){
        //If you reached the end of one list start at the beginning of the other one
        //currentA
        if(currentA->next == NULL){
            currentA = headB;
        }
        else{
            currentA = currentA->next;
        }
        //currentB
        if(currentB->next == NULL){
            currentB = headA;
        }else{
            currentB = currentB->next;
        }
    }
    return currentB->data;
}
