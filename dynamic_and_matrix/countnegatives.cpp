#include <iostream>
using namespace std;


int countNegatvie(int M[][4], int n, int m){

  int count = 0;

  int i = 0;
  int j = m - 1;

  while (j >= 0 && i < n){

    if (M[i][j] < 0){
      // last index where it is negatice and add that index to 1
      count += j + 1;

      i++; // increment to next row
    }
    else {
      j--;
    }
  }

  return count;


}


int main(){


  int M[3][4] = { { -3, -2, -1, 1 }, 
		  { -2, 2, 3, 4 }, 
		  { 4, 5, 7, 8 } }; 
  
  cout << countNegatvie(M, 3, 4); 

}
