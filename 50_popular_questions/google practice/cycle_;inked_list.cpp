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
    bool hasCycle(ListNode *head) {
        
        ListNode *fastPointer = head;
        ListNode *slowPointer = head;
        
        while (fastPointer != NULL && slowPointer != NULL){
            fastPointer = fastPointer->next->next; 
            slowPointer = slowPointer->next;
            
            if (fastPointer->val == slowPointer->val){
                return true; 
            }
        }
        return false; 
        
    }
};
