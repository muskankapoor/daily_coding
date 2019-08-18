void whatFlavors(vector<int> A, int sum) {

    int l, r; 
  
     sort(A.begin(), A.end()); 
  
    /* Now look for the two candidates in  
       the sorted array*/
    l = 0; 
    r = A.size() - 1; 
    while (l < r) { 
        if ((A[l] + A[r] == sum) && (A[l] != A[r])) 
            break;
        else if (A[l] + A[r] < sum) 
            l++; 
        else // A[i] + A[j] > sum 
            r--; 
    } 
    if (A[l] > A[r]){
        cout << A[r] << " " << A[l];
    }
    cout << A[l] << " " << A[r];
    cout << "\n";

}
