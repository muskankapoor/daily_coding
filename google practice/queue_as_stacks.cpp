class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    
    void push(int x) {
       s1.push(x);
    }
    
    void transferToS2() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
	
    int pop() {
        if(s2.empty()) transferToS2();                
        int res = s2.top();
        s2.pop();
        return res;
    }
    
    int peek() {
        if(s2.empty()) transferToS2();                
        return s2.top();
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()) return true;
        return false;
    }
};
