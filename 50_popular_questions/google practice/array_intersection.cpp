class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // assigning the elements from nums1 to s1
        set<int> s1(nums1.begin(), nums1.end()); // [1,2,2,1] -> [1,2]
        set<int> s2(nums2.begin(), nums2.end());

        set<int> output;
        //for (auto it = s1.begin(); it != s1.end(); it++) {
        for (int val : s1) {
            //int val = *it;
            if (s2.find(val) != s2.end()) { // if number exists in second set also
                output.insert(val);
            }
        }

        return vector<int>(output.begin(), output.end());
    }
};

// [1, 2, 6, 7, 10]
// [10, 6, 5]

// set of nums1
// set of nums2
// output set

// Iterate through the first set
// Check if that number exists in the second set
// If so, add it to the result
