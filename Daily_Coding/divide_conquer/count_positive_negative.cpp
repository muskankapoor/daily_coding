// Count the number of positive and negative numbers in an array of positive and negative numbers



#include <iostream>
#include <vector>
using namespace std;

void countNumbers(vector<int> a){

  int pos, neg; 
  for (int i = 0; i < a.size() - 1; i++){
    if (a[i] < 0){
      neg++;
    }
    else if (a[i] > 0){
      pos++;
    }
  }

  cout << "pos" << pos;
    cout << '\n' << "nneg" << neg;
}

int main(){

  vector<int> a;
  a.push_back(10);
  a.push_back(-1);
  a.push_back(1);
  a.push_back(-100);
  a.push_back(-7);
  countNumbers(a);
}


// divide and conqueer method would involve dividing the array in 2
