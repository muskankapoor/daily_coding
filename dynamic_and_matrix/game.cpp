
#include <iostream>
#include <queue>
#include <string>
#include <cstring>
#include <climits>
using namespace std;

// You are given an M by N matrix consisting of booleans that represents a board. Each True boolean represents a wall. Each False boolean represents a tile you can walk on.

// Given this matrix, a start coordinate, and an end coordinate, return the minimum number of steps required to reach the end coordinate from the start. If there is no possible path, then return null. You can move up, left, down, and right. You cannot move through walls. You cannot wrap around the edges of the board.

#define ROW 9 
#define COL 10 
// represent coordinate
struct Point{
  int x;
  int y;
};

// represent queue for BFS
struct node{
  Point pt;
  int dist; // distance from the source
};


// need to check if the cell is a valid 
// if value 1 is there then it is valid 

bool isValid(int row, int col){

  // check if row and column number is valid
  return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// function to find the shortest path between 
// a given source cell to a destination cell. 

// These arrays are used to get row and column 
// numbers of 4 neighbours of a given cell 
int rowNum[] = {-1, 0, 0, 1}; 
int colNum[] = {0, -1, 1, 0}; 
int BFS(int game[][COL], Point src, Point dest){

  // check source and destination cell 
  // of the matrix have value 1 
  if (!game[src.x][src.y] || !game[dest.x][dest.y]) {
    return -1;
  }


  bool visited[ROW][COL];
  memset(visited, false, sizeof visited);

  visited[src.x][src.y] = true;

  // queue for BFS
  queue<node> q;

  // Distance of source cell is 0
  node s = {src, 0};
  q.push(s);  // Enqueue source cell

  // Do a BFS starting from source cell 
  while (!q.empty()) {
    node curr = q.front();
    Point pt = curr.pt;

    // if we reached dest then we are done
    if (pt.x == dest.x && pt.y == dest.y){
      return curr.dist;
    }
    // otherwise dequeu the front cell in the queue and enqueu its adjacent cell
    q.pop();

    for (int i = 0; i < 4; i++){

      int row = pt.x + rowNum[i];
      int col = pt.y + colNum[i];

      // if adjacnet cel is valid and ahs nto visited enqeu it 
      if (isValid(row, col) && game[row][col] && !visited[row][col]){

	// makr cell as visited and enquue it
	
	visited[row][col] = true;
	node Adjcell = {{row, col}, curr.dist+1};
	q.push(Adjcell);
      }
      
    }
  }

  return -1;

  
}

int main(){

  int game[ROW][COL] =
    {
     {1, 1, 1, 1},
     {0, 0, 1, 0},
     {1, 1, 1, 1},
     {1, 1, 1, 1}
    };
Point source = {3, 0};
Point end = {0, 0};
int dist = BFS(game, source, end); 
  
if (dist != INT_MAX) {
  cout << "Shortest Path is " << dist;
 }
 else{
   cout << "Shortest Path doesn't exist";
 }
  
return 0; 

}
