// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass? On

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void findTwoNumbers(vector<int> a, int k){

  set<int> m;
  for (int i = 0; i < a.size(); i++){
    int difference = k - a[i];
    if (m.find(difference) != m.end()){
      //return true;
      cout << a[i] << " " << difference;
    }
    else{
      m.insert(a[i]);
    }
  }

  //return false; 

}


int main(){

  vector<int> a;
  a.push_back(10);
  a.push_back(15);
  a.push_back(3);
  a.push_back(7);

  int k = 17;
  
  findTwoNumbers(a, k);

}
