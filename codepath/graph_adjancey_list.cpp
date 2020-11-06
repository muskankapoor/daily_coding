// directed grpah = adjancye list
struct Edge{
  int src, dest;
  
};


class Graph{
public:
  vector<vector<int>> adjList;
  Graph(vector<Edge> const &edges, int N){
    adjList.reaize(N);

    for (auto &edge : edges){
      adjList[edge.src].push_back(edge.dest);
    }
  }
};


void printGraph(Graph const& graph, int N){
  for (int i = 0; i < N; i++){
    cout << i << "->";
    for (int v : graph.adjList[i]){
      cout << v << " ";
    }
    cout << endl;
  }
}
