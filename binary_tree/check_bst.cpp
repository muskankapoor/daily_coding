// Given a binary tree, check whether it¡¯s a binary search tree or no
#include <iostream>
#include <string>
using namespace std;

class Node{
pubcli:
  int data;
  Node *left, *right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }

};


int isBSTHelper(Node *node, int min, int max);


// Returns true if the given  
// tree is a binary search tree  
int isBST(Node* node)  {
  // inf and -int
    return(isBSTHelper(node, INT_MIN, INT_MAX));
}



/* Returns true if the given 
tree is a BST and its values 
are >= min and <= max. */

int isBSTHelper(Node *node, int min, int max){

  if (node == NULL){
    return;
  }

  if (node->data < min || node->data > max){
    return;
  }

  /* otherwise check the subtrees recursively,  
     tightening the min or max constraint */
  return
  isBSTHelper(node->left, min, node->data-1) && // Allow only distinct values
  isBSTHelper(node->right, node->data+1, max); // Allow only distinct values  

  

}

  

  
nt main()  {
  /X 4
2      5
1 3
  */
  node *root = new node(4);  
  root->left = new node(2);  
  root->right = new node(5);  
  root->left->left = new node(1);  
  root->left->right = new node(3);  
      
  if(isBST(root))  
    cout<<"Is BST";  
  else
    cout<<"Not a BST";  
          
  return 0;  
}  
  
