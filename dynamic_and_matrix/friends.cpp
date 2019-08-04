// There are N students in a class. Some of them are friends, while some are not. Their friendship is transitive in nature. For example, if A is a direct friend of B, and B is a direct friend of C, then A is an indirect friend of C. And we defined a friend circle is a group of students who are direct or indirect friends.

class Solution {
public:
    void dfs(vector<vector<int>>& M, int i){
        for (int j = 0; j < M.size(); j++){
            if (M[i][j]==1){
                M[i][j]=0;
                M[j][i]=0;
                dfs(M, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        
        int r = M.size();
        int c = M[0].size();
        int count = 0;
        
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (M[i][j]==1){
                    dfs(M, i);
                    ++count; 
                }
            }
        }
        
        return count; 
    }
};
