// Given a string, find the length of the longest substring without repeating characters.

int lengthOfLongestSubstring(string s) {
     /*   int count = 0;
        vector<int> v; 
        for (int i = 0; i < s.length(); i++){
            if (s[i] != s[i+1]){
                count++;
                v.push_back(count);
            }
            else{
                count = 0; 
            }
        }
        int max = 0;
        for (int i = 0; i < v.size(); i++){
            if (count > max){
                max = count; 
            }
        }
        return max; 
    }*/
    if (s.size() == 0){
        return 0;
    }
    if (s.size() == 1){
        return 1; 
    }
    int i = 0, j = 1, max = 1;
    while (j <s.size()){
        bool a = false;
        int t = i;
        for (t; t < j; t++){
            if (s[t] == s[j]){
                a = true;
                break;
            }
        }
        if (a == true){
            i = t+1;
            j++;
        }
        else {
            if (max < j - i + 1)
                max = j - i + 1;
            j++;
        }
        
    }
        return max;
    }
