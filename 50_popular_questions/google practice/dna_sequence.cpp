//
// Created by muska on 8/19/2020.
//

// https://leetcode.com/problems/repeated-dna-sequences/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        set<string> result;
        set<string> sequences;
        int i = 0;
        while ((i + 10) <= s.size()) {
            string substr = s.substr(i, 10);
            if (sequences.find(substr) == sequences.end()) {
                sequences.insert(substr);
            } else {
                result.insert(substr);
            }
            i++;
        }
        return vector<string>(result.begin(), result.end());
    }


};