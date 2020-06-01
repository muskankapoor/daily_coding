#include <iostream>
#include <stack>
#include <vector>
#include <cctype>
using namespace std;


// time and space is 0n
// Evaluate Reverse Polish Notation

int Evaluate(int x1, int x2,char s){

  int x3;
  if (s == '+'){
    x3 = x1 + x2;
  }
  else if (s == '-'){
    x3 = x1 - x2;
  }
  else if (s == '/'){
    x3 = x1/x2;
  }
   else if (s == '*'){
    x3 = x1*x2;
  }

  return x3;

}


int ReversePolish(vector<char> arr){
  
  stack<int> s;
  for (int i = 0; i < arr.size(); i++){
    if (isdigit(arr[i])){
      s.push(arr[i]);
    }
    else{
      int x2 = s.top();
      s.pop();
      int x1 = s.top();
      s.pop();
      int x3 = Evaluate(x1, x2, arr[i]);
      s.push(x3);
    }
  }
  int x = s.top();
  return x;
}


int main(){

  vector<char> s;
  s.push_back('2');
  s.push_back('1');
  s.push_back('+');
  s.push_back('3');
  s.push_back('*');

  cout << ReversePolish(s);
  
}
