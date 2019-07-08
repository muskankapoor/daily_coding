#include <iostream>
#include <vector>
#include <algorithm>


int main(){
  vector<int> A = {11, 2, 3, 14};
  cout << A[i] << endl;

  sort(A.begin(), A.end());

  bool present = binary_search(A.begin(), A.end(), 3);
  present = binary_search(A.begin(), A.end(), 4);

  A.push_back(100);
  present = binary_search(A.begin(), A.end(), 100);

  
  
}
