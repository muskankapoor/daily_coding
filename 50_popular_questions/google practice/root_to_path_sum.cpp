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
    int x;
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if(root==NULL)
        {
            return false;
        }
        x+=root->val;
        
        if(root->left==NULL && root->right==NULL && x==sum)
        {
            return true;
        }
        
        if(root->left!=NULL)
        { bool a= hasPathSum(root->left,sum);
        if(a==true)
        {
            return true;
        }
        }
        if(root->right!=NULL)
        { bool b= hasPathSum(root->right,sum);
        
        if(b==true)
        {
            return true;
        }
        }
        x-=root->val;
        return false;
    }
};
