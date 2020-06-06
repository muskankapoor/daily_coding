// In this article, we will see about Minimum Remove to Make Valid Parentheses. We have to remove the minimum number of parentheses to make a string with valid parentheses.
#include <stack>
#include <iostream>
using namespace std;


// on space and time 

// Given a string s of '(' , ')' and lowercase English characters. 

// Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string.

// like valid parent but also keep track of index
string minRemoveToMakeValid(string s) {

  stack<int> opens;  // keep track of indices of open parens.        
  for (int i = 0; i < s.length(); ++i)
    {
      if(s[i] == '(')
	opens.push(i);
      else if (s[i] == ')')
	{
	  if (opens.empty())
	    // An unmatched parens!
	    s[i] = '!'; // an invalid char to note for deletion
	  else
	    opens.pop();                    
	}
      // ignore other letters
    }
        
  // Finally process the left-over unmatched open parens.
  while (!opens.empty())
    {
      s[opens.top()] = '!';
      opens.pop();
    }
        
  string ans; // Instead of remove from string, we copy over char by char.
  for (int i = 0; i < s.length(); ++i)
    if (s[i] != '!')
      ans += s[i];
        
  return ans;
}


int main(){

  string s = "lee(t(c)o)de)";
  string s2 =  "a)b(c)d";

  cout << minRemoveToMakeValid(s2);

}
