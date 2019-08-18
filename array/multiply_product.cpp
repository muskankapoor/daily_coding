// Given a list of integers, return the largest product that can be made by multiplying any three integers.



#include <iostream>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int product = nums[0]  * nums[1] * nums[2];
        int product1 = nums[n-3] * nums[n-2] * nums[n-1];
        if (product > product1){
            return product;
        }
        return product1;
    }
};
