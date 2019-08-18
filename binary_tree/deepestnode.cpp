#include <iostream>
using namespace std;

struct Node 
{ 
    int data; 
    struct Node *left, *right; 
}; 


Node *newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
}

void find(Node *root, int level, int &maxlevel, int &res){

  if (root != NULL){
    find(root->left, ++level, maxlevel, res);

    //update level and rescue
    if (level > maxlevel){
      res = root->data;
      maxlevel = level; 
    }
    find(root->right, level, maxlevel, res); 
  }

}

int deepestNode(Node *root){

  int res = -1;
  int maxlevel = -1;
  find(root, 0, maxlevel, res);

  return res; 

}


int main() 
{ 
  Node* root = newNode(1); 
  root->left = newNode(2); 
  root->right = newNode(3); 
  root->left->left = newNode(4); 
  root->right->left = newNode(5); 
  root->right->right = newNode(6); 
  root->right->left->right = newNode(7); 
  root->right->right->right = newNode(8); 
  root->right->left->right->left = newNode(9); 
  cout << deepestNode(root); 
  return 0; 
} 
