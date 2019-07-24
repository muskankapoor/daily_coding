// Complete the maxSubsetSum function below.
// Given an array of integers, find the subset of non-adjacent elements with the maximum sum. Calculate the sum of that subset.

// For example, given an array  we have the following possible subsets:

int maxSubsetSum(vector<int> arr) {
    int inclusion = arr[0];
    int exclusion = 0;
    int exclusion_new;
    for (int i = 0; i < arr.size(); i++){
        // current max excluding 1
        // this statmenet exlc = max(incl, excl)
        // temp store it
        exclusion_new = (inclusion > exclusion)? inclusion: exclusion;

        inclusion = exclusion + arr[i];
        exclusion = exclusion_new;
    } 
    // return max of incl and excl
    return ((inclusion > exclusion)? inclusion : exclusion);
}
