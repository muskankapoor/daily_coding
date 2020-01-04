// Given an expression string exp. Examine whether the pairs and the orders of ¡°{¡°,¡±}¡±,¡±(¡°,¡±)¡±,¡±[¡°,¡±]¡± are correct in exp.
// For example, the program should print 'balanced' for exp = ¡°[()]{}{[()()]()}¡± and 'not balanced' for exp = ¡°[(])¡±

#include <stack>
#include <string>
#include <iostream>

using namespace std;

void isBalanced(string s) {

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
        cout << "balanced" << endl;
  
    }
    else{
      cout << "Not balanced" << endl;
    
      if (st.top() == '('){
          cout << ')';
      }
      if (st.top() == '['){
          cout << ']';
      }
      if (st.top() == '{'){
          cout << '}';
      }
    }
}


int main(){
  string str ="{([])}";
  string str1 = "()";
  string str2 = "([]";


  isBalanced(str);
  cout << "\n";
  isBalanced(str1);
  cout << "\n";
 isBalanced(str2);
  
}
