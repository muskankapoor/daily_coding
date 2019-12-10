#include <iostream>
#include <stack>
using namespace std;


// linked list is a palidrome or not

// same forth and back

// abba

// 1. use a stack
// 2.


class Node { 
public: 
        int data; 
        Node(int d){ 
            data = d; 
        } 
        Node *ptr; 
}; 
  

bool isPalin(Node* head){ 

  Node *current = head;

  stack<int> s;

  while (current != NULL){
    s.push(current->data);
    current = current->ptr;
  }


  while (head != NULL){

    int x = s.top();
    s.pop();

    if (x != head->data){
      return false; 
    }
    head = head->ptr;
    
  }

  return true;
  
}

  
// Driver Code  
int main(){ 
  
    // Addition of linked list  
    Node one =  Node(1); 
    Node two = Node(2); 
    Node three = Node(3); 
    Node four = Node(2); 
    Node five = Node(1); 
  
    // Initialize the next pointer 
    // of every current pointer  
    five.ptr = NULL; 
    one.ptr = &two; 
    two.ptr = &three; 
    three.ptr = &four; 
    four.ptr = &five; 
    Node* temp = &one; 
  
      
    // Call function to check palindrome or not  
    int result = isPalin(&one); 
    
    if(result == 1) 
            cout<<"isPalindrome is true\n"; 
    else
        cout<<"isPalindrome is true\n"; 
  
return 0; 
} 
