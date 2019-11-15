// Find all triplets with zero sum

// C++ program to find triplets in a given 
// array whose sum is zero 
#include<bits/stdc++.h> 
using namespace std; 

// function to print triplets with 0 sum 
void findTriplets(int arr[], int n) { 

	for (int i=0; i<n-1; i++) { 
		unordered_set<int> s; 
		for (int j=i+1; j<n; j++) { 
			int x = -(arr[i] + arr[j]); 
			if (s.find(x) != s.end()) { 
				cout << x << " " << arr[i] << " " << arr[j] << "\n"; 
			} 
			else{
				s.insert(arr[j]); 
			}
		} 
	} 


} 

// Driver code 
int main() 
{ 
	int arr[] = {0, -1, 2, -3, 1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	findTriplets(arr, n); 
	return 0; 
} 
