//
// Created by muska on 8/20/2020.
//

https://leetcode.com/problems/binary-tree-level-order-traversal/

// time and space on


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
    vector<vector<int>> levelOrder(TreeNode* root) {


        queue<Node *> q;
        q.push(root);

        while (!(q.empty())){
            Node *node = q.front();
            cout << node->data;
            q.pop();
            if (node->left != NULL){
                q.push(node->left);
            }
            if (node->left != NULL){
                q.push(node->right);
            }

        }

    }
};