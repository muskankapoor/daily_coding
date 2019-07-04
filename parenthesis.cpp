// Given an expression string exp. Examine whether the pairs and the orders of ¡°{¡°,¡±}¡±,¡±(¡°,¡±)¡±,¡±[¡°,¡±]¡± are correct in exp.
// For example, the program should print 'balanced' for exp = ¡°[()]{}{[()()]()}¡± and 'not balanced' for exp = ¡°[(])¡±

#include <stack>
#include <string>
#include <iostream>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char> st;
    st.push('@');
    
    for(int i=0;i<s.length();i++){
      if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
      }
      else{
	while(!st.empty()&&((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{'))){
	  st.pop();
	}
      }
    }
    if(st.top()=='@'){
      return "balanced";
    }
    else{
      return "NOt balanced";
    }
}


int main(){
  string str ="{([])}";
  string str1 = "()";
  string str2 = "([]";


  cout << isBalanced(str);
  cout << "\n";
  cout << isBalanced(str1);
  cout << "\n";
  cout << isBalanced(str2);
  
}
