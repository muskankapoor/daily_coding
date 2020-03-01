struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
 


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

  ListNode l3;
  while (l1->next != NULL || l2->next != NULL ){
    l3->data = li->data + l2->data;
    l3 = l3->next;
    l2 = l2->next;
    l1 = l1->next;  
  }
  return l3;
        
}
