#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::endl;

// example: 1 4 3 2 5  K = 4 max subarray = 4 3 2 5

// First, we need to take the consecutive arrays of size K from the starting.
// Then we need to sort each of them,
// Then we need to check whether the sorted subarray is consecutive or not.

vector<int> solution(vector<int> A, int K){

  for (int i = 0; i < A.size()-K+1; i++){
    vector<int> temp;
    for (int j = 0; j < K; j++){
      temp.push_back(A[i+j]);
    }
    
    sort(temp.begin(), temp.end());

    bool found = true;
    for(int j=1;j<K;j++){
      if(temp[j]-temp[j-1] != 1){
	found = false;
      }
    }
    if(found){
      vector<int> temp2;
      for(int j = 0;j<K;j++){
	temp2.push_back(A[i+j]);
      }
      return temp2;
    }
  }
  vector<int> empty;
  return empty;
}
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);
  v.push_back(2);
  v.push_back(5);
  vector<int> sol = solution(v, 3);
  for(int i = 0 ;i<sol.size();i++){
    cout<<v[i]<<endl;
  }
}
