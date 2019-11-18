/// efficent solution but with data strucutre stack
void flatten(Node *root){
  if (root == null){
    return;
  }

  1 
 2 3
  stack<node> st;
  st.push(root);  1
 
  while (!st.empty()){
    Node *current_node = st.top(); 
    st.pop();
    if (current_node->right != NULL){
      st.push(current_node->right); 2
    }
    if (current_node->left !- NULL){
      st.push(current_node->left); 3
    }

    // case for one node or root  
    if (!st.empty()){
      current_node->right = st.top(); 
      st.pop();
    }

    current_node->left = NULL;
  }
}

// efficent solution
struct Node{
  int key;
  Node *left, *right;
};


// child with right nodes 
// altering the right node 
// and making left node point to NULL
void flatten(Node *root){

  if ((root == NULL) || (root->left == NULL && root->right == NULL)){
    return;
  }

  // we make root->left now it to root->right
  if (root->left != NULL){
    flatten(root->left);
    Node* tmpRight = root->right;
    root->right = root->left;
    root->left = NULL;
  
    Node *t = root->right;
    while (t->right != NULL){
      t = t->right;
    }

    t->right = tmpRight;
  }

  flatten(root->right);
  

}
