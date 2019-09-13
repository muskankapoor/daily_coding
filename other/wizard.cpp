#include <iostream>
#include <algorithm>
using namespace std;



int WizardKid(int arr[], int size,  int t){

  int chocalates = 0;
  sort(arr, arr + size);
  for (int i = 0; i < t; i++){
    chocalates+=arr[i];
    arr[i] = arr[i/2];
    sort(arr, arr + size, greater<int>());
  }
  return chocalates; 
  
}

int main(){

  int arr[] = {4, 0, 2};
  int size = 3;

  int t = 3;

  cout << WizardKid(arr, size, t);


}
