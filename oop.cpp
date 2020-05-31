#include <iostream>


class A{
  static int x;
  A(){
    
  }
  ~A(){
    
  }

  void* operator new(size_t sz){
    x++;
  }
  
};


A::X = 0;

int main(){
  A a, b, c;
  A d, e;

  A *ptr = new A;
  A *ptr2 = new A;


  cout << A::X;

  
}
