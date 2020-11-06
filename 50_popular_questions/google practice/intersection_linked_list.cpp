int length(Node *head) {
    int len = 0;
    for (; head; head = head->next) {
        ++len;
    }
    return len;
}
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int lena = length(headA);
    int lenb = length(headB);
    while (lena < lenb) {
        --lenb;
        headB = headB->next;
    }
    while (lenb < lena) {
        --lena;
        headA = headA->next;
    }
    while (headA && headB) {
        if (headA->data == headB->data) {
            return headA->data;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return 0;
}
