#include <iostream>
using namespace std;


void merge(int arr[], int low, int high, int mid);
void mergesort(int arr[],int l, int r);

int findk(int arr[], int size, int k){

  mergesort(arr, 0, size - 1);
  
  return arr[k - 1];

  }

void merge(int a[], int low, int high, int mid){
  // We have low to mid and mid+1 to high already sorted.
  int i, j, k, temp[high-low+1];
  //  i = low;
  // k = 0;
  //j = mid + 1;
 
  // Merge the two parts into temp[].
  while (i <= mid && j <= high){
      if (a[i] < a[j]){
	  temp[k] = a[i];
	  k++;
	  i++;
	}
      else
	{
	  temp[k] = a[j];
	  k++;
	  j++;
	}
    }
 
  // Insert all the remaining values from i to mid into temp[].
  while (i <= mid)
    {
      temp[k] = a[i];
      k++;
      i++;
    }
 
  // Insert all the remaining values from j to high into temp[].
  while (j <= high)
    {
      temp[k] = a[j];
      k++;
      j++;
    }
 
 
  // Assign sorted data stored in temp[] to a[].
  for (i = low; i <= high; i++)
    {
      a[i] = temp[i-low];
    }
}



void mergesort(int arr[],int l, int r){

  int middle = arr[(l + r)/2];

  mergesort(arr, l, middle);
  mergesort(arr, middle + 1, r);

  merge(arr, l, middle, r);

}




int main(){

  int k = 3;
  int arr[] = {3, 1, 2, 1, 4};
  int size  = 5; 
 
  cout << findk(arr, 5, k);
 
  

}