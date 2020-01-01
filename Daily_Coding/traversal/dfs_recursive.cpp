#include<iostream> 
#include<list> 
using namespace std; 
  
// Graph class represents a directed graph 
// using adjacency list representation 
class Graph { 
    int V;   
  
    // Pointer to an array containing 
    // adjacency lists 
    list<int> *adj; 
  
    // A recursive function used by DFS 
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   // Constructor 
  
    // function to add an edge to graph 
    void addEdge(int v, int w); 
  
    // DFS traversal of the vertices 
    // reachable from v 
    void DFS(int v); 
}; 

Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  

void Graph::DFSHelper(int v, bool visited[]){

  // mark current node as visited and print it
  visited[v] = true;
  cout << v << " ";

  list<int>::iterator i;

  // recur all vertices adjacent
  for (i = adj[v].begin(); i != adj[v].end(); ++i){
    if (!visited[*i]){

      DFSHelper(*i, visited);
    }
  }
}


void Graph:::DFS(int v){

  // not visited
  bool *visited = new bool[V];

  for (int i = 0; i < V; i++){
    visited[i] = false; 
  }

  DFSHelper(v, visited);

}


int main() 
{ 
    
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(2); 
  
    return 0; 
} 
