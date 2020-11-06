// compare top number of stack = index of the popped array
// if not wait till there is number in stack for hte index in popped array

https://leetcode.com/problems/validate-stack-sequences/

https://www.youtube.com/watch?v=vHKXT0cSI54



 bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
         stack<int> si;
        int index = 0;
        for (int i = 0; i < pushed.size(); ++i) {
	  si.push(pushed[i]); // push it one by one 
            while(!si.empty() && si.top() == popped[index]) {
                index++;
                si.pop();
            }
        }
        return index == popped.size(); //if reached end successfully return ture
	
    }
