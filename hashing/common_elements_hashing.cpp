// Given three increasingly sorted arrays A, B, C of sizes N1, N2, and N3 respectively, you need to print all common elements in these arrays.

#include <iostream>

#include <unordered_set>//for hash table

using namespace std;

int main(){

  //input size of three arrays

  int n1, n2, n3;

  cin >> n1 >> n2 >> n3;

  unordered_set<int> s1;
  unordered_set<int> s2;
  unordered_set<int> s3;//initialize three empty hash table

  //insert elements of first array in s1

  while(n1--){

    int x;

    cin >> x;

    s1.insert(x);

  }

  

    //insert elements of second array in s2

    while(n2--){

      int x;

      cin >> x;

      s2.insert(x);

    }

      //for third array, check if an element is already in s1, and s2

      //and not in s3 yet(to avoid duplicates), then insert it in s3 and print that element.

      while(n3--){

	int x;

	cin >> x;

	if(s1.find(x) != s1.end() && s2.find(x) != s2.end() && s3.find(x) == s3.end()){

	  s3.insert(x);

	  cout << x << " ";

       
	}
      }

	  cout << endl;

}

