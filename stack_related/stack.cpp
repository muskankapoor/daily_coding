#include <iostream>
#include <stack>

using namespace std;

class Stacker{
private:
  stack<int> s; 
  //int val;
  int current_max; //= 0; 
public:
  void push(int value){
     current(value);
    s.push(value);
    current(value);
  }
  void pop(){
    s.pop();
  }
  void top(){
    cout << s.top();
  }

  int current(int value){
    if (value > s.top()){
      current_max = value; 
    }
    return current_max; 
  }

  
};





int main(){

  Stacker s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.top();
  s.current(e);

 
  
}
