// find missing number in an array
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

//time: ologn space: o1
int missingNumber(vector<int>& nums) {
  std::sort (nums.begin(), nums.begin()+nums.size());
  int i = 0;
  int count = nums[0] + 1;
  while (i < nums.size())
    if (nums[i+1] == count){
      i++;
      count++;
    }
    else{
      break;
    }
        
  return count;
}
//modified
//time: on space: o1
int missingNumberModifies(vector<int> nums) {

  //Finding total sum of an array
  int sum = nums.size() * (nums.size()+1)/2;
  //cout << sum << endl;
  
  int actualSum = 0;
  //Calculate the actual sum
  for(int i = 0; i < nums.size(); i++)
    {
      actualSum += nums[i];
      //cout << actualSum << endl;
    }
         
  //missing number
  return sum-actualSum;
}


int main(){

  vector<int> num;
  num.push_back(3);
  num.push_back(0);
  num.push_back(1);
  //cout << missingNumber(num);
  cout << missingNumberModifies(num);
  

}
