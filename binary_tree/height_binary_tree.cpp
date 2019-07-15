#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;


class Node {
public:
  
    int data;
  Node* left, *right; 
}; 
  
int binary_tree_height(Node* node){

  if (node == NULL){
    return 0;
  }

  else{
    int left_side = binary_tree_height(node->left);
    int right_side = binary_tree_height(node->right);

    if (left_side > right_side) {
            return(left_side + 1);
    }
    else{
      return(right_side + 1);
    }

  }

}

int number_of_nodes(Node* node){

  int left_side, right_side;
  
  if (node == NULL){
    return 0;
  }
  else{
     left_side = number_of_nodes(node->left);
    right_side = number_of_nodes(node->right);

  }
  return left_side + right_side + 1;
}
  

Node* newNode(int data){
  Node *node = new Node();
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return node;
  
}


  
/* Driver program to test above functions*/
int main() { 
    Node *root = newNode(1); 
    root->left             = newNode(2); 
    root->right         = newNode(3); 
    root->left->left     = newNode(4); 
    root->left->right = newNode(5);  

    cout << "Height of tree\n";
    cout << binary_tree_height(root);


    cout << "number of nodes\n";
    cout << number_of_nodes(root);
    return 0; 
}
