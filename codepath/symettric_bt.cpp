/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// if the binary tree is sysmettricxs
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true; 
        } 
        
       return isMirror(root->left,root->right);
    }
    bool isMirror(TreeNode *t1, TreeNode *t2){
        if(t1==nullptr&&t2==nullptr) return true;
        
        if(t1==nullptr||t2==nullptr) return false;
        
        bool b1=isMirror(t1->left,t2->right);
        bool b2=isMirror(t1->right,t2->left);
        
        return t1->val==t2->val&&b1&&b2;
    }
        
    
};
