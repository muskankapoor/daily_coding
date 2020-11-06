//
// Created by muska on 8/18/2020.
// https://leetcode.com/problems/first-unique-character-in-a-string/


// on time

class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            auto it = mp.find(s[i]);
            if (it->second == 1) {
                return i;
            }
        }
        return -1;




    }
};

// Go through string
// Count the number of times each character occurs and throw it into a map
// l->1, e->3, c->5
// Iterate through the beginning the string and check if it occurred once,
// if so, return the index
// If we haven't returned anything by the last letter, return -1

// O(n) * O(1) = O(n) // map operation
// O(n) * O(1) = O(n)
// O(2n) -> O(n)