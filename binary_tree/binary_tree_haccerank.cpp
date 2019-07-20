class Node{
  Node left, right;
  Node(int data){
    this->data = data;
  }


  void insert(int value){
    if (value <= data){
      if (left == NULL){
	left = new Node(value);
      }
      else{
	left.insert(value);
      }
    }
    else{
      if (right == NULL){
	right = new Node(value);
      }
      else{
	right.insert(value)
      }
		      
    }
  }

  bool contains(int value){
    if (value == data){
      return true;
    }
    else if (value < data){
      if (left == NULL){
	return false;
      }
      else{
      return left.continue(data);
      }
    }
    else if (value > data){
      if (right == NULL){
	return false;
      }
      else{
      return right.contains(data);
      }
    }
  }

  void printinorder(){
    if (left != NULL){
      left.printinorder();
    }
    cout << data;
    if (right != NULL){
      right.printinorder();
    }
  }

  
  
};
