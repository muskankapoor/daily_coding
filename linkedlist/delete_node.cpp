Node* deleteNode(Node *head,int x)
{
    Node *temp = new Node;
    temp = nullptr;
    if(x==1){ //if its first node to be deleted
        temp = head->next; //can be nullptr if its only node in link list
        delete head;
        return temp; //return new head
       }
    //else, if its not first node to be deleted
    Node *prev = new Node;
    prev = head;
    for(int i=2;i<x;i++) prev = prev->next; //set prev to (x-1)th node
    //link (x-1)th node with (x+1)th node(can be nullptr) and then delete xth node
    temp = prev->next;
    prev->next = prev->next->next; //can be nullptr if its last node 
    delete temp;
    return head;
}
