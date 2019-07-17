// In this challenge, you must implement a simple text editor. Initially, your editor contains an empty string, . You must perform  operations of the following  types:

// append - Append string  to the end of .
// delete - Delete the last  characters of .
// print - Print the  character of .
// undo - Undo the last (not previously undone) operation of type  or , reverting  to the state it was in prior to that operation.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    stack<string> stk;
    string st; //empty string
    
    while (n--){
        int N;
        cin >> N;
        if (N == 1){
            string str;
            cin >> str;
            stk.push(st);
            st+=str;
        }
        else if (N == 2){
            int k;
            cin >> k;
            stk.push(st);
            st.erase(st.size() - k);
        }
        else if (N == 3){
            int k;
            cin>>k;
            cout<<st[k-1]<<endl; 
        }
        else{
            st = stk.top();
            stk.pop();
        }
        
        
    }
    
}
