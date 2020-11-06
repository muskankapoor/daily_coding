/*root node or a start node and then explores the adjacent nodes of the current node by going deeper into the graph or a tree.


we use a stack data structure for storing the nodes being explored. The edges that lead us to unexplored nodes are called ‘discovery edges’ while the edges leading to already visited nodes are called ‘block edges’.*/

Step 1: Insert the root node or starting node of a tree or a graph in the stack.
Step 2: Pop the top item from the stack and add it to the visited list.
Step 3: Find all the adjacent nodes of the node marked visited and add the ones that are not yet visited, to the stack.
Step 4: Repeat steps 2 and 3 until the stack is empty.

  class DFSGraph 
  { 
    int V;    // No. of vertices 
    list<int> *adjList;    // adjacency list 
    void DFS_util(int v, bool visited[]);  // A function used by DFS 
  public: 
    // class Constructor
    DFSGraph(int V)
    {
      this->V = V; 
      adjList = new list<int>[V]; 
    }
    // function to add an edge to graph 
    void addEdge(int v, int w){
      adjList[v].push_back(w); // Add w to v’s list.
    }
     
    void DFS();    // DFS traversal function 
  }; 
void DFSGraph::DFS_util(int v, bool visited[]) 
{ 
  // current node v is visited 
  visited[v] = true; 
  cout << v << " "; 
   
  // recursively process all the adjacent vertices of the node 
  list<int>::iterator i; 
  for(i = adjList[v].begin(); i != adjList[v].end(); ++i) 
    if(!visited[*i]) 
      DFS_util(*i, visited); 
} 
   
// DFS traversal 
void DFSGraph::DFS() 
{ 
  // initially none of the vertices are visited 
  bool *visited = new bool[V]; 
  for (int i = 0; i < V; i++) 
    visited[i] = false; 
   
  // explore the vertices one by one by recursively calling  DFS_util
  for (int i = 0; i < V; i++) 
    if (visited[i] == false) 
      DFS_util(i, visited); 
} 
   
