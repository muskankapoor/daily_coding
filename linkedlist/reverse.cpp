
Node* reverseList(Node *head)
{
// Your code here
Node* prev = NULL;
Node* current = head;
Node* N = current->next;

while(current!=NULL){
N = current->next;
current->next = prev;
prev = current;
current = N;
}
head = prev;
}
