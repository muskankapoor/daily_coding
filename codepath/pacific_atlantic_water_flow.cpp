dfs approach
https://leetcode.com/problems/pacific-atlantic-water-flow/

dfs wil traverse and update it 

Pacific: 
1  1  1 1 1
1  1  1 1 1 //up to down but for (2, 5)
1  1  1 0 0 //left ro right
1  
1


atlatnic

        1
        1
   1  1  1 //right to left
      1  1
1 1 1 1 1


Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

 public List<List<Integer>> pacificAtlantic(int[][] matrix) {
        List<List<Integer>> cord = new ArrayList();
        if(matrix.length==0)return cord;
        
        int row = matrix.length;
        int col = matrix[0].length;
        
        int[][] paci = new int[row][col];
        int[][] alt =  new int[row][col];
        
        
        //first row (pacific)
         for(int i=0;i<col;i++){
             dfs(matrix,0,i,paci,Integer.MIN_VALUE);
         }
        //first col (pacific)
         for(int i=0;i<row;i++){
             dfs(matrix,i,0,paci,Integer.MIN_VALUE);
         }
        //last row (altantic)
        for(int i=0;i<col;i++){
             dfs(matrix,row-1,i,alt,Integer.MIN_VALUE);
         }
        //last col (altantic)
         for(int i=0;i<row;i++){
             dfs(matrix,i,col-1,alt,Integer.MIN_VALUE);
         }
        
        for(int i=0;i<paci.length;i++){
            for(int j=0;j<paci[0].length;j++){
                if(paci[i][j]==1  && alt[i][j]==1){
                    List<Integer> c = new ArrayList();
                    c.add(i);c.add(j);
                    cord.add(c);
                }
            }
        }
        
        return cord;
    }
    
    void dfs(int[][] matrix , int row , int col , int[][] temp,int pre){
        
        if(row<0 || col<0 || row>matrix.length-1 || col>matrix[0].length-1)return;
        else if(pre>matrix[row][col])return;
        else if(temp[row][col]==1)return;
        
        temp[row][col] = 1;
        
        dfs(matrix,row+1,col,temp,matrix[row][col]);
        dfs(matrix,row-1,col,temp,matrix[row][col]);
        dfs(matrix,row,col-1,temp,matrix[row][col]);
        dfs(matrix,row,col+1,temp,matrix[row][col]);
    }
