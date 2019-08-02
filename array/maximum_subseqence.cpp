#include <iostream>
#include <string>
using namespace std;


int contintous_sum(int arr[], int size){


  int current_sum, maxium_sum = 0;
  for (int i = 0; i < size; i++){

    current_sum += arr[i];
    if (current_sum > maxium_sum){
      maxium_sum = current_sum;
    }
    if (current_sum  < 0){
      current_sum = 0;
    }
    
  }
  return maxium_sum;

}


int main(){


  int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

  int size = 9;

  cout << contintous_sum(arr, size);

}
