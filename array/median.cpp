#include <iostream>
#include <algorithm>
using namespace std;

void median(int arr[], int size){


  sort(arr, arr + size);
  int mid = size/2.0;

  int sum = (arr[mid] + arr[mid - 1])/2.0;

  cout << sum;




}

int main(){

  int arr[] = {1, 3, 2, 0};
  int size = 4;
  median(arr, 4);

}
