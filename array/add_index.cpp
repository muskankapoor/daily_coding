#include <iostream>
#include <vector>
using namespace std;



void Add(vector<int> vect){

  // int carry = 1;

  int n = vect.size();
  if ((vect[n-1]>= 0) && (vect[n-1] <9)){
    vect[n-1] = vect[n-1] + 1;
    vect[0] = vect[0] + 1;
  }

 
  for (int i = 0; i < vect.size(); i++){
    cout << vect[i] << " ";
  }
}



int main(){

  
  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);


  
  Add(v);
}
