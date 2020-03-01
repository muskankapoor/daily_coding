/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
     
    

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  
   ListNode *dummy = new ListNode(0);
    ListNode *current = dummy;
    
    int carry = 0;
    int sum;
    if(!l1 && !l2) {
         return NULL;
     }
    if(!l1) {
        return l2;
    }
    if(!l2) {
        return l1;
    }
    
    ListNode *p = l1, *q = l2;
    while (p != NULL && q != NULL){
        int x = p->val;
        if (p != NULL){
            p->val = 0;
            x == 0;
        }
        int y = q->val;
        if (q != NULL){
            y == 0;
        }
    
        sum =  x + y + carry;
        carry = sum/10;
    
        current->next = new ListNode(sum%10);
        current = current->next;

        p = p->next;
        q = q->next;
       
            
        }
    
     if (carry > 0){
         current->next = new ListNode(carry);
     }
       return dummy->next;
  
     
}

};


// recursive 
class Solution {
public:
     
  // recursion    

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  
    // edge cases. if either or both are empty 
     if(!l1 && !l2) {
         return NULL;
     }
    if(!l1) {
        return l2;
    }
    if(!l2) {
        return l1;
    }
    int sum = l1->val + l2->val;

    auto cur = new ListNode(sum%10);
    
    cur->next = addTwoNumbers(l1->next,l2->next);
    
    if (sum >= 10) {
        cur->next = addTwoNumbers(cur->next, new ListNode(1));
    }
    return cur;
       
     
}

};
