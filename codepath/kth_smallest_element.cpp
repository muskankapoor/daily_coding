https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
in a bast

Node* kthSmallest(Node* root, int& k) 
{ 
    // base case 
    if (root == NULL) 
        return NULL; 
  
    // search in left subtree 
    Node* left = kthSmallest(root->left, k); 
  
    // if k'th smallest is found in left subtree, return it 
    if (left != NULL) 
        return left; 
  
    // if current element is k'th smallest, return it 
    k--; 
    if (k == 0) 
        return root; 
  
    // else search in right subtree 
    return kthSmallest(root->right, k); 
} 
  
// Function to find k'th largest element in BST 
void printKthSmallest(Node* root, int k) 
{ 
    // maintain index to count number of nodes processed so far 
    int count = 0; 
    Node* res = kthSmallest(root, k); 
    if (res == NULL) 
        cout << "There are less than k nodes in the BST"; 
    else
        cout << "K-th Smallest Element is " << res->data; 
} 
  
