#include <iostream>
using namespace std;

// The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.



#include <iostream> 
using namespace std; 

int numberOfPaths(int m, int n) { 

  if (m == 1 || n == 1) {
    return 1;
  }

   // FORUMALA is T[i-1][j] + T[i][j-1]
  return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1); 
  
} 

int main() 
{ 
  cout << numberOfPaths(3, 3); 
  return 0; 
} 
