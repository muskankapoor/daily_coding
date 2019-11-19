// Given a collection of distinct integers, return all possible permutations.

void permute(string a, int l, int r)  
{  
  // Base case  
  if (l == r)  
    cout<<a<<endl;  
  else
    {  
      // Permutations made  
      for (int i = l; i <= r; i++)  
        {  
  
	  // Swapping done  
	  swap(a[l], a[i]); //swap example a, a 
  
	  // Recursion called  
	  permute(a, l+1, r);  ///perumate eveything besides the fixed
  
	  //backtrack  
	  swap(a[l], a[i]);  //reset
        }  
    }  
}

// list 
void permute(vector<int> nums, int i, vector<vector<int>> &ans) {
  if(i == nums.size()) {
    ans.push_back(nums);
    return;
  }
  for(int j = i; j < nums.size(); j++) {
    swap(nums[i],nums[j]);
    permute(nums,i+1,ans);
    swap(nums[i],nums[j]);
  }
}
vector<vector<int>> permute(vector<int>& nums) {
  vector<vector<int>> ans;
  permute(nums,0,ans);
  return ans;
}
