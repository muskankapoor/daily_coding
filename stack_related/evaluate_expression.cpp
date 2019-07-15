// Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

// For example, given the string "([])[]({})", you should return true.

// Given the string "([)]" or "((()", you should return false.

#include <iostream>
#include <stack>
using namespace std;

bool Evaluate(string str){

  stack<char> s;

  for (int i = 0; i < str.length(); i++){
    if ((str[i] == '(') || (str[i] == '[') || (str[i] == '{')){
	s.push(str[i]);
      }

    else if (str[i] == ')'){
      if (s.top() == '('){
	s.pop();
      }
      else{
	s.push(str[i]);
      }
    }

      else if (str[i] == ']'){
      if (s.top() == '['){
	s.pop();
      }
      else{
	s.push(str[i]);
      }
    }
      else if (str[i] == '}'){
	if (s.top() == '{'){
	s.pop();
      }
      else{
	s.push(str[i]);
      }
    }
  }
  if (s.empty()){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  string str = "([])[]({})";
  cout << Evaluate(str); //you should return true.
  string s = "([)]";
  cout << "\n" << Evaluate(s);
}
