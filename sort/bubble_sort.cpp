#include <iostream>
#include <algorithm> 
using namespace std;


void printarr(int arr[], int size);

void bubblesort(int arr[], int size){

  bool isorted = false;
  int lastsorted = size - 1; 

  while (!isorted){
    for (int i = 0; i < lastsorted; i++){
      if (arr[i] > arr [i+1]){
	swap(arr[i], arr[i+1]);
	isorted = false;
      }
      
    }
    lastsorted--;
  }
  printarr(arr, size);
  
}


void printarr(int arr[], int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << "\n";
  }
}

int main(){

  int arr[] = {3, 5, 2, 1, 6};
  int size = 5;
  bubblesort(arr, 5);


  
}


void countSwaps(vector<int> a) {

    int swaps = 0;
    for (int i = 9; i < a.size(); i++){
        for (int j = 0; j < a.size() - 1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swaps++;
            }
        }
    }
    cout << "Array is sorted in " << swaps << " swaps" << "\n";
    cout << "First element " << a[0] << "\n";
    cout << "Last element " << a[a.size() -1];
 


}
