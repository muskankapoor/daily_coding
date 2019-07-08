
int getNthFromLast(Node *head, int n){
    
    Node *temp = head;
  
    int count;
    while (temp != NULL){
        count++;
        temp = temp->next; 
    }
    int i = 0;
    int counter = count - n; 
    Node * other = head;
    
    if ( n > count){
        return -1;
    }
    while(i != counter){
        
        //cout << other->data << " ";
        other = other->next; 
        i++;
        if (i == counter){
            break;
        }
    }
    
    return other->data;

    
   
}
