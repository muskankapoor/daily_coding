// bfs and dfs
// bfs = level order
// dfs = inorder, preorder, postorder

#include <iostream>
#include <string>
using namespace std;


struct Node { 
    int data;
  Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  
/* Given a binary tree, print its nodes according to the 
"bottom-up" postorder traversal. */
void printPostorder(       Node* node) { 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->data << " "; 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(       Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(       Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->data << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}  
  
/* Driver program to test above functions*/
int main() { 
           Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0; 
}


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct tree_node{

  tree_node l;
  tree_node r;
  int data; 
};


void level_traversal(tree_node t, vector<tree_node> v){


  queue<tree_node> q;
  q.push(t);
  
  if (!t){
    return;
  }

  while (!q.empty()){
    v.push_back(q.front());
    if (q.front()->left){
      q.push(q.front()->left);
    }
    if (q.front()->right){
      q.push(q.front()->right);
    }
    q.pop();
  }
  
}
