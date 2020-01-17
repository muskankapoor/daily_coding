// You are given an M by N matrix consisting of booleans that represents a board. Each True boolean represents a wall. Each False boolean represents a tile you can walk on.

// Given this matrix, a start coordinate, and an end coordinate, return the minimum number of steps required to reach the end coordinate from the start. If there is no possible path, then return null. You can move up, left, down, and right. You cannot move through walls. You cannot wrap around the edges of the board.

// Example program
#include <iostream>
using namespace std;

#define M 4
#define N 4

struct Point 
{ 
    int x; 
    int y; 
}; 
  
  
struct queueNode
{
    
    Point pt; 
    int count; 
    
};



// check whether given cell (row, col) is a valid 
// cell or not. 
bool isValid(int row, int col ) {
  
    // return true if row number and column number 
    // is in range 
    return (row >= 0) && (row < M) && 
           (col >= 0) && (col < N); 
}

int BFS(int mat[][N], Point src, Point dest) { 
   

    // four adjacent neighbors 
    int rowNum[] = {-1, 0, 0, 1}; 
    int colNum[] = {0, -1, 1, 0};
    
    // set all of this to true 
    bool visited[M][N];
    memset(visited, false, sizeof visited);
    
    // start 
    visited[src.x][src.y] = true;
    
    // queue that is type Point 
    queue<queueNode> q; 
    queueNode s = {src, 0};
    q.push(s); // add source cell to queue
    
    while (!q.empty()){
        
        queueNode curr = q.front();
        Point pt = curr.pt;
        
        if (pt.x = dest.x && pt.y == dest.y){
            return curr.count; 
        }
        
        // dequeue the front cell and add its adjacent cell
        q.pop();
        for (int i = 0; i < 4; i++){
            int M = pt.x + rowNum[i];
            int N = pt.y + colNUM[I]; 
        
        // check if adjacent cell is valid and not visited enqueue it 
	    if (isValid(M, N) && mat[M][N] && !visited[M][N]){
            
	      visited[M][N] = true;
	      queueNode adjCell = {{M, N}, curr.count + 1};
	      q.push(adjCell);
	    }
        }
    }
    
    return -1; // nothing can be reached9
}

int main(){
    
    int M = 4, N = 4;
    bool mat[M][N] = { 
        { 0, 0, 0, 0 }, 
        { 1, 1, 0, 1 }, 
        { 0, 0, 0, 1 }, 
        { 0, 0, 0, 0 }, 
    };
    
    Point src = {3, 0};
    Point end = {0, 0};
    
    cout << BFS(mat, src, end);
    
    
    
    
}
