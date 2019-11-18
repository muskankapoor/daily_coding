int largest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int max = arr[0]; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
}


int largest(int arr[], int n) { 
    return *max_element(arr, arr+n); 
} 
