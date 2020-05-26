//Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
#include <iostream>
#include <vector>
using namespace std; 

// wihtout division
// leftarray and right array O(n) space complexity
// and O(N) time 

vector<int> ProductArray(vector<int> nums){

  vector<int> left_array;
  vector<int> right_array;
  vector<int> product_array;
  left_array[0] = 1;
  right_array[nums.size() - 1];
  
  
  for (int i = 1; i < nums.size(); i++){
    left_array[i] = nums[i - 1] * left_array[i - 1];
  }

  for (int j = nums.size() - 1; j >=0; j--){
    right_array[j] = nums[j + 1] * right_array[j + 1];
  }
  for (int i = 0; i < nums.size(); i++){
    product_array[i] = left_array[i] * right_array[i];
  }
  
    
  for(int i=0;i<product_array.size();i++){
    cout<<product_array[i]<<" ";
  }
  return product_array;
  

}


// this fullfills o(1) space
vector<itn> Modified(vector<int> nums){
  
  vector<int> left_array;
  left_array[0] = 1;
  int right;
  
  for (int i = 1; i < nums.size(); i++){
    left_array[i] = nums[i - 1] * left_array[i - 1];
  }

  right = 1; 
  for (int j = nums.size() - 1; j >=0; j--){
    left_array[i] = R * left_array[i];
    R = nums[i] * R;
  }

  return left_array;
}

int main(){
  vector<int> inV; 
  inV.push_back(1);
  inV.push_back(2);
  inV.push_back(3);
  inV.push_back(4);
  cout <<  ProductArray(inV);
  cout << Modified(inV);

 
  //return 0;
}

