#include <iostream>
#include <vector>
using namespace std;

// n ary tree
// each node can have at most n childnre


struct Node 
{ 
   char key; 
   vector<Node *> child; 
}; 
  

Node *newNode(int key) 
{ 
   Node *temp = new Node; 
   temp->key = key; 
   return temp; 
} 
  

int depthOfTree(struct Node *ptr) 
{ 
    // Base case 
    if (!ptr) 
        return 0; 
  
    // Check for all children and find 
    // the maximum depth 
    int maxdepth = 0; 
    for (vector<Node*>::iterator it = ptr->child.begin(); 
                              it != ptr->child.end(); it++) 
        maxdepth = max(maxdepth, depthOfTree(*it)); 
  
    return maxdepth + 1; 
} 

vector<Node*>::iterator i = ptr->child.begin(); i != ptr->child.end(); i++)

maxdepth = max(maxdepth, depthofTree(*i);
 
int main() 
{ 
   /*   Let us create below tree 
   *             A 
   *         / /  \  \ 
   *       B  F   D  E 
   *      / \    |  /|\ 
   *     K  J    G  C H I 
   *      /\            \ 
   *    N   M            L 
   */
  
   Node *root = newNode('A'); 
   (root->child).push_back(newNode('B')); 
   (root->child).push_back(newNode('F')); 
   (root->child).push_back(newNode('D')); 
   (root->child).push_back(newNode('E')); 
   (root->child[0]->child).push_back(newNode('K')); 
   (root->child[0]->child).push_back(newNode('J')); 
   (root->child[2]->child).push_back(newNode('G')); 
   (root->child[3]->child).push_back(newNode('C')); 
   (root->child[3]->child).push_back(newNode('H')); 
   (root->child[3]->child).push_back(newNode('I')); 
   (root->child[0]->child[0]->child).push_back(newNode('N')); 
   (root->child[0]->child[0]->child).push_back(newNode('M')); 
   (root->child[3]->child[2]->child).push_back(newNode('L')); 
  
   cout << depthOfTree(root) << endl; 
  
   return 0; 
} 
