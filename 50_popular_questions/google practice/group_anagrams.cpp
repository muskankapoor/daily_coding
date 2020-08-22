//
// Created by muska on 8/19/2020.
////https://leetcode.com/problems/group-anagrams/submissions/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> output;


        for (string word : strs){

            string key = word;
            sort(key.begin(), key.end());

            auto it = mp.find(key);
        // not found
            if (it == mp.end()){
                vector<string> words;
                words.push_back(word);

                std::pair<string, vector<string>> entry(key, words);
                mp.insert(entry);
            }
            else{
                it->second.push_back(word);
            }


        }

        for (auto it = mp.begin(); it != mp.end(); ++it) {
            output.push_back(it->second);
        }
        return output;

    }
};