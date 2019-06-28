#include <iostream>
#include <algorithm> 
using namespace std;


// void PrintList(int arr[], int n);

void SelectionSort(int arr[], int n) {

  int j, minIndex, tmp;    

  for (int i = 0; i < n - 1; i++) {

    minIndex = i;

    for (j = i + 1; j < n; j++){

      if (arr[j] < arr[minIndex]){

	minIndex = j;
      }
    }
    

    if (minIndex != i) {

      tmp = arr[i];

      arr[i] = arr[minIndex];

      arr[minIndex] = tmp;

    }

  }

  // PrintList(arr, n);
}


void PrintArray(int arr[], int n){

  for (int i = 0; i < n; i++){

    cout << arr[i] << " ";

  }

}



int main()  {  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    SelectionSort(arr, n);  
    cout << "Sorted array: \n";  
    PrintArray(arr, n);  
    return 0;  
} 
  
