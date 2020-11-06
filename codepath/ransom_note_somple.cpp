class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
         if(magazine == "" && ransomNote=="") {
             return true;
         }
        int cntm= 0 , cntr = 0;
        for (int i = 0; i < ransomNote.length(); ++i){
            cntr = count(ransomNote.begin(), ransomNote.end(),ransomNote[i]);

            cntm = count(magazine.begin(), magazine.end(),ransomNote[i]);
        
            if(cntm<cntr){
                 return false;  
            }
    }
    return true;
    }
        
        
    
};

https://leetcode.com/problems/ransom-note/submissions/
