

// Given a binary tree, return the inorder traversal of its nodes¡¯ values


// space complexity is on, best ologn 
// time on 

struct Tree{

  int data;
  Tree *left;
  Tree *right; 

};




void inorder(Tree *root){
  if (root == NULL){
    return;
  }
  inorder(root->left);
  cout << root->data;
  inorder(root->right);
}


// root left right
void preorder(Tree *root){

  if (root == NULL){
    return;
  }
  cout << root->data;
  preorder(root->left);
  preorder(root->right);

}


void postorder(Tree *root){

  if (root == NULL){
    return;
  }

  postorder(root->left);
  postorder(root->right);
  cout << root->data;;
}

