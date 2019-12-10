#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// queue as two stacks
// push 
// pop
// front 

struct QueueAsStacks{

    stack<int> s1, s2;
    
    void enQueue(int x){
        s1.push(x);
    }
    
    int deQueue(){
        if (s2.empty()) { 
            while (!s1.empty()) { 
                s2.push(s1.top()); 
                s1.pop(); 
            } 
        } 
        
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    
    
};


int main() {
    
    QueueAsStacks q; 
    q.enQueue(1); 
    q.enQueue(2); 
    q.enQueue(3); 
  
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
  
    return 0; 
} 
