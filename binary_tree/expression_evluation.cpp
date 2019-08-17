#include <iostream>
#include <string>
using namespace std;


struct node { 
  string data;
  node* left, *right; 
  node(string data) 
  {
    this->data = data; 
    left = right = NULL; 
  } 
};

int convert(string s){
  
  int num = 0;  
      
  if(s[0]!='-'){
    for (int i=0; i<s.length(); i++) { 
      num = num*10 + (int(s[i])-48);
    }
  }
  return num;
}

int Evaluate(node *root){
  if (!root){
    return 0; // it is empty 
  }

  if (!root->left && !root->right){ // it means it is a leaf Node
    return convert(root->data);
  }
  int l_val = Evaluate(root->left);
  int r_val = Evaluate(root->right);

  // Check which operator to apply  
  if (root->data=="+") { 
    return l_val+r_val;
  }
  
  if (root->data=="-")  {
    return l_val-r_val;
  }
  
  if (root->data=="*") { 
    return l_val*r_val;
  }
  
  return l_val/r_val;  
    
}
/* Driver program to test above functions*/
int main() { 

  // create a syntax tree  
    node *root = new node("*");  
    root->left = new node("+");  
    root->left->left = new node("3");  
    root->left->right = new node("4");  
    root->right = new node("+");  
    root->right->left = new node("4");  
    root->right->right = new node("5");  
    cout << Evaluate(root) << endl;  
  
    delete(root);  
  
    return 0;
}  
