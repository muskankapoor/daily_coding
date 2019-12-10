#include <iostream>
#include <algorithm>
using namespace std; 

// given an array containg 0 and 1 organize the list 


void print_sorted(int arr[], int size){
    
    int left = 0, right = size - 1;
   // int index = 0;
    while (left < right){
        while (arr[left] == 0 && left < right){
            left++;
        }
        while (arr[left] == 0 && left < right){
            left++;
        }
        
        while (arr[right] == 1 && right > left){
            right--;
        }
        
        if (left < right){
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
    
    
}

int main() {
    
    int arr[] = {0, 1, 1, 0, 1, 1};
    int size = 6;
    
    print_sorted(arr, size);
    
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
     
} 
