// incoming edges
Make any array A[] of size equal to the
    number of nodes and initialize to 1.
2. Traverse all the edges one by one, say, 
   u -> v.
     (i) Mark A[u] as 1.
3. Now traverse whole array A[] and count 
   number of unmarked nodes.



int countSink(int n, int m, int edgeFrom[], int edgeTo[]) {

  int mark[n]; //size
  memset(mark, 0, sizeof mark);

  
  for (int i = 0; i < m; i++){
    mark[edgeFrom[i]] = 1; 
  }

  // Counting the sink nodes. 
    int count = 0; 
    for (int i = 1; i <= n ; i++) 
        if (!mark[i]) 
            count++; 
  
    return count;
}

  
