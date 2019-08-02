// Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.

// For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.


#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// create interval start and end

struct Interval{
  int start;
  int end; 
};


bool compareInterval(Interval li, Interval l2){
  return li.start < l2.start; // ? true : false;
}


bool isoverlap(Interval arr[], int n){

  // sort in increasing orders of start time 
  sort(arr, arr + n - 1, compareInterval);

  // In the sorted array, if start time of an interval 
    // is less than end of previous interval, then there 
    // is an overlap
  for (int i = 0; i < n; ++i) {

    if (arr[i-1].end > arr[i].start){
      return true; 
      
    }
    
    
  }

  return false; 


  
}
  


int main() 
{ 
    Interval arr1[] = { { 1, 3 }, { 7, 9 }, { 4, 6 }, { 10, 13 } }; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
    isOverlap(arr1, n1) ? cout << "Yes\n" : cout << "No\n"; 
  
    Interval arr2[] = { { 6, 8 }, { 1, 3 }, { 2, 4 }, { 4, 7 } }; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
    isOverlap(arr2, n2) ? cout << "Yes\n" : cout << "No\n"; 
  
    return 0; 
}
