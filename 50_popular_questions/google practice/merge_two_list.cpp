/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
       
        
        
        ListNode *p3 = new ListNode(-1);
        ListNode *head = p3;

        while (l1 != NULL || l2 != NULL){
            if (l1->val < l2->val){
                p3->next = l1;
                l1 = l1->next;
                p3 = p3->next;
            }
            
            else if (l1->val > l2->val){
                p3->next = l2;
                l2 = l2->next;
                p3 = p3->next;
            }
            
             else if (l1->val == l2->val){
                p3->next = l1;
                l1 = l1->next;
                p3 = p3->next;
                 
                p3->next = l2;
                l2 = l2->next;
                p3 = p3->next;
                
            }
            
            
        }
        return head->next;
        
    }
};
