#include <iostream>
using namespace std;


// The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

struct  TreeNode {
  int val;
  TreeNode left;
  TreeNode right;
};

int maxDepth(TreeNode* root) {
  if (root == NULL){
    return 0;
  }
  int left = maxDepth(root->left);
  int right = maxDepth(root->right);

  int h = 0;
  if(left > right){
    h = 1 + left; ;
  }
  else{
    h = 1 + right;
  }
  return h;
}
