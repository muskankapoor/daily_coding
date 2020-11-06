void dfs(int u){
  for (int v: g[u]){
    if (vis[v]) continue;
    dfs(v);
  }
}
// at u it will traverse all the neighbors 
