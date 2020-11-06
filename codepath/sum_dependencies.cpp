int findSum(vector<int> adj[], int v){
  int sum = 0;
  for (int  i = 0; i < v; i++){
    sum += adj[i].size();
  }
  return sum;
}
