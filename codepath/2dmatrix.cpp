// C++ Program to print the elements of a 
// Two-Dimensional array 
#include<iostream> 
using namespace std; 


// https://leetcode.com/problems/toeplitz-matrix/submissions/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int rows = matrix.size(); 
        int cols = matrix[0].size();
        if(rows == 1) {
            return true;
        }
        for(int i=0;i<rows-1;i++){
            for(int j=0;j<cols-1;j++){
                if(matrix[i][j] != matrix[i+1][j+1]) {
                    return false;
                }
            }
        }
        return true;
        
    }
};
