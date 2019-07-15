#include <iostream>
#include <string>
using namespace std;

// Write a program to print all permutations of a given string

// Below are the permutations of string ABC.
// ABC ACB BAC BCA CBA CAB

void Permutation(string a, int l, int r){

  if (l == r){
    cout << a << "\n";
  }

  else{

    for (int i = l; i <= r; i++){

      swap(a[i], a[l]);

      Permutation(a, l+1, r);

      swap(a[i], a[l]);

    }
  }
}


int main(){

  string str = "ABC";
  Permutation(str, 0, str.size() - 1);

}

      

  

