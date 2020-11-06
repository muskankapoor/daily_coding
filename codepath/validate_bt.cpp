https://leetcode.com/problems/validate-binary-search-tree/description/

root.value > root.left.value
root.value < rooot.right.value

checking for small subtrees isn't accurate approach

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
class Solution {
public:
    
    bool isBstHelper(TreeNode* root, long int min, long int max){
        if (root == NULL){
            return true;
        }
        if (root->val < min || root->val > max){
            return false;
        }
        return isBstHelper(root->left, min, root->val-1)  && isBstHelper(root->right,root->val+1,max);
    
    }
    bool isValidBST(TreeNode* root) {
        return isBstHelper(root, INT_MIN, INT_MAX);
    }
};'
