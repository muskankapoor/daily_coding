#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Given 2 arrays, find the unique elements in array 2.

void uniqueElements(int arr1[], int arr2[], int size1, int size2){
    
    for (int i = 0; i < size2; i++){
        int j = 0; 
        for (j = 0; j < size1; j++){
            if (arr2[i] == arr1[j]){
                break;
            }
            
        }
        if (j == size1){
            cout << arr2[i] << " ";
        }
    }
}

int main(){
    
    // find elements that are in array 2 but not in array 1

    int a[] = { 1, 2, 3}; 
    int b[] = { 2, 4, 3, 1, 0 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[1]); 
    uniqueElements(a, b, n, m); 
    return 0; 
    

 
}



