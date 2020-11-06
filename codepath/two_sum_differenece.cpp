//
// Created by muska on 8/19/2020.
//

https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {



        unordered_map<int, int> sum;
        for (int i = 0; i < nums.size(); i++){
            sum[nums[i]] = i; // {2, 7, 11, 15}; sum[2] == 0
        }
        for (int i = 0; i < nums.size(); i++){
            int value = target - nums[i]; //9 - 2 = 7
            if (sum.count(value) && sum[value]!=i){ //7 and i != 0
                return {i, sum[value]};  //0, 1
            }
        }
        return {};
    }



};