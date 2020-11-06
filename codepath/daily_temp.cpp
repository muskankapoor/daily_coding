// https://leetcode.com/problems/daily-temperatures/description/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
         //put values in stack till you find a greater value & keep popping
        stack <int> s;
        int n=temp.size(),c=0;
        vector<int> res(n);
        for(int i=n-1;i>-1;i--){
            while(!s.empty()&&temp[s.top()]<=temp[i])
                s.pop();
            
            if(s.empty())
                res[i]=i;
            else
                res[i]=(s.top());
            s.push(i);
              
        }
       // reverse(res.begin(),res.end());
        for(int i=n-1;i>-1;i--)
            res[i]=res[i]-i;
        return res;
    }
};
