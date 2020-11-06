// heap and unordered mpa
class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> maxHeap;
        unordered_map<char, int> mp;
        string result;
        
        for (int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        
        for (auto i = mp.begin(); i!= mp.end(); i++){
            maxHeap.push({i->second, i->first});
        }

        while (maxHeap.size() > 0){
            int frequency = maxHeap.top().first;
            char element = maxHeap.top().second;
            for (int i = 1; i <= frequency; i++){
                result += element; 
            }
            maxHeap.pop();
        }
        return result;
    }
      
         
};
