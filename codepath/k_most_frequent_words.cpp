// heap
class Solution {
public:
    static bool compare(string s,string s1){
        for(int i=0;i<min(s.size(),s1.size());i++){
            if(s[i]>s1[i]){
                return false;
            }
            if(s1[i]>s[i]){
                return true;
            }
        }
        if(s.size()>s1.size()){
            return false;
        }
        return true;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>s;
        for(string x:words){
            s[x]++;
        }
        map<int,vector<string>>m;
        for(auto x:s){
            m[x.second].push_back(x.first);
        }
        std::map<int,vector<string>>::reverse_iterator rit;
        vector<string>ans;
        for (rit=m.rbegin(); rit!=m.rend(); ++rit){
            if(k==0){
                break;
            }
            sort(rit->second.rbegin(), rit->second.rend(), compare);
            for(int i=rit->second.size()-1;i>=0;i--){
                ans.push_back(rit->second[i]);
                k--;
                if(k==0){
                    break;
                }
            }
         
        }
        return ans;
    }
};

https://helloacm.com/how-to-find-top-k-frequent-elements-via-priority-queue-or-sorting/
