struct Node{
public:
  int data;
  Node *left;
  Node *right;
};

// preorder = root left right 

// check if two roots are equal and whether to proceed
bool areIdentical(Node *root1, Node *root){


  if (root1 == NULL && root2 == NULL){
    return true;
  }

  // check if data of both roots is same and data of left and right are same
  return (root1->data == root2->data &&  areIdentical(root1->left, root2->left) &&  
            areIdentical(root1->right, root2->right) );  
}  


// bool is it a subtree or not

bool subtree(Node *T, Node *S){

  if (S == NULL){
    return true;
  }

  if (T == NULL){
    return false;
  }

  if (areIdentical(T, S)){
    return true; 
  }
/ * If the tree with root as current  
    node doesn't match then try left  
    and right subtrees one by one */
    return isSubtree(T->left, S) ||  
        isSubtree(T->right, S);  


}

  
