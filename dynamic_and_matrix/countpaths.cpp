#include <iostream>
using namespace std;


// count paths of n * n grid

int CountPaths(bool grid[], int row, int col){

  if (!isvalidsquare(grid, row, col)) return 0;
  if (isatendgrid(grid, row, col) return 1;
      return CountPaths(grid, row + 1, col), (grid, row, col + 1)

}


  // better papporcah

  int CountPaths(bool grid[], int row, int col, int paths[]){

    if (!isvalidsquare(grid, row, col)) return 0;
    if (isatendgrid(grid, row, col)) return 1;
    if (paths[row][col] == 0) paths[row][col] == CountPaths(grid, row + 1, col), (grid, row, col + 1);
    return paths[row[col];
		 //pahts save all the row col value 

		 
				
      

}
