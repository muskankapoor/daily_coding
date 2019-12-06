// to find size of tree
// merge smaller tree to larger tree

he idea is to use iterative inorder traversal.
We use two auxiliary stacks for two BSTs. Since we need to print the elements in sorted form, whenever we get a smaller element from any of the trees, we print it. If the element is greater, then we push it back to stack for the next iteration.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
  void inorder(TreeNode *node){
     
  if (node != NULL){
    inorder(node->left);
    cout<< node->val << " ";
    inorder(node->right);
  }
    }
vector<int> Solution::solve(TreeNode* A, TreeNode* B) {
    
    
  stack<int> s1;
  stack<int> s2;
        
  TreeNode *current1 = A;
  TreeNode *current2 = B;
        
  while (current1 != NULL || current2 != NULL || s1.empty() || s2.empty()){
    if (current1 != NULL || current2 != NULL){
      if (current1 != NULL){
	s1.push(current1->val);
	current1 = current1->left; 
      }
                
      if (current2 != NULL){
	s2.push(current2->val);
	current2 = current2->left; 
      }
            
    }
    else{
      if (s1.empty()){
	while (s2.empty())  {  
	  current2 = s2.pop();  
	  current2->left = NULL;  
	  inorder(current2);  
	}  
      }
      if (s2.empty()){
	while (s1.empty()){
	  current1 = s1.pop();
	  current1->left = NULL;
	  inorder(current1);
	}
      }
    }
    current1 = s1.top();
    s1.pop();
    current2 = s2.top();
    s2.pop();
        
    if (current1->val < current2->val){
      cout << current1->val << " ";
      current1 = current1->right;
      s2.push(current2->val);
      current2 = NULL;  
    }
    else{
      cout << current2->val << " ";
      current2 = current2->right; 
      s1.push(current1->val);
      current1 = NULL;
    }
        
  }
}
