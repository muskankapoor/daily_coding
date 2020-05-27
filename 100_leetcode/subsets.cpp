// find all distinct sets of a set
#include <iostream>
#include <vector>
using namespace std;

// The idea is simple, that if there are n number of elements inside an array, there are two choices for every element. Either include that element in the subset or do not include it.
void subsetUtility(vector<int>& A, vector<vector<int> >& res, 
		   vector<int>& subset, int index) {

  res.push_back(subset);
  for (int i = index; i < A.size(); i++){
    subset.push_back(A[i]);
     
    // move onto the next element. 
    subsetUtility(A, res, subset, i + 1); 
  
    // exclude the A[i] from subset and triggers 
    // backtracking. 
    subset.pop_back(); 
  }
  return; 

}


vector<vector<int> > subsets(vector<int>& A){

  vector<int> subset;
  vector<vector<int> > result;
  int index = 0;

  // passes in the input vector, output vector, current vector, current index
  subsetUtility(A, result, subset, index);
  
  
  return result;


}



int main() 
{ 
    // find the subsets of below vector. 
  vector<int> array;
  array.push_back(1);
  array.push_back(2);
  array.push_back(3);
      
  
    // res will store all subsets. 
    // O(2 ^ (number of elements inside array)) 
    // because at every step we have two choices 
    // either include or ignore. 
    vector<vector<int> > res = subsets(array); 
  
    // Print result 
    for (int i = 0; i < res.size(); i++) { 
        for (int j = 0; j < res[i].size(); j++) 
            cout << res[i][j] << " "; 
        cout << endl; 
    } 
  
    return 0; 
} 
