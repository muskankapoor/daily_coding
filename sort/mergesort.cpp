#include <iostream>
using namespace std;


// MergeSort(arr[], l,  r)
// If r > l
//      1. Find the middle point to divide the array into two halves:  
//              middle m = (l+r)/2
//      2. Call mergeSort for first half:   
//              Call mergeSort(arr, l, m)
//      3. Call mergeSort for second half:
//              Call mergeSort(arr, m+1, r)
//      4. Merge the two halves sorted in step 2 and 3:
//              Call merge(arr, l, m, r)

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 

 
// A function to merge the two half into a sorted data.
void Merge(int a[], int low, int high, int mid){
  // We have low to mid and mid+1 to high already sorted.
  int i, j, k, temp[high-low+1];
  i = low;
  k = 0;
  j = mid + 1;
 
  // Merge the two parts into temp[].
  while (i <= mid && j <= high){
      if (a[i] < a[j]){
	  temp[k] = a[i];
	  k++;
	  i++;
	}
      else{
	  temp[k] = a[j];
	  k++;
	  j++;
	}
    }
 
  // Insert all the remaining values from i to mid into temp[].
  while (i <= mid){
      temp[k] = a[i];
      k++;
      i++;
    }
 
  // Insert all the remaining values from j to high into temp[].
  while (j <= high){
      temp[k] = a[j];
      k++;
      j++;
    }
 
 
  // Assign sorted data stored in temp[] to a[].
  for (i = low; i <= high; i++){
      a[i] = temp[i-low];
    }
}
 
// A function to split array into two parts.
void MergeSort(int a[], int low, int high){
  int mid;
  if (low < high){
      mid=(low+high)/2;
      // Split the data into two half.
      MergeSort(a, low, mid);
      MergeSort(a, mid+1, high);
 
      // Merge them to get sorted output.
      Merge(a, low, high, mid);
    }
}
 

int main(){

  int arr[] = {23, 900, 45, 65, 32, 9, 470, 1, 17, 3};

  int n = 10; 
  MergeSort(arr, 0, n-1);
 
  // Printing the sorted data.
  cout<<"\nSorted Data ";
  for (int i = 0; i < n; i++){
    cout<<" "<<arr[i];
  }
}

