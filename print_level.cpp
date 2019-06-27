#include <iostream>
#include <queue>
using namespace std;


// binary tree node
struct Node{

  Node *left;
  Node *right;
  int data;

};

void PrintValue(Node *root){

  if (root == NULL) return;

  queue<Node*>q; // empty queue
  q.push(root); // enqueue root 

  while (q.empty() == false){

    int NodeCount = q.size();

    while (NodeCount > 0){

      Node *node = q.front();

      cout << node->data << " "; // print the one in thr first level 

      q.pop();

      if (node->left!=NULL){
	q.push(node->left);
      }

      if (node->right != NULL){
	q.push(node->right);
      }

      NodeCount--;
    }

    cout << "\n";

  }
}


Node *newNode(int data){

  Node *temp = new Node;

  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;

}

int main(){

  Node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
    root->right->right = newNode(6);  
  
   PrintValue(root);  
    return 0;  
}

