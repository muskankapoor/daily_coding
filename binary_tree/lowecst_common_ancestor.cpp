// You are given pointer to the root of the binary search tree and two values  and . You need to return the lowest common ancestor (LCA) of  and  in the binary search tree.



bool checkBST(Node root) {
    return check(root, INT_MIN, INT_MAX);
}
bool check(Node n, int min, int max){
    if(n == NULL){
        return true;
    }
    if(n.data <= min || n.data >= max){
        return false;
    }
        
    return check(n.left, min, n.data) && check(n.right, n.data, max);
}
