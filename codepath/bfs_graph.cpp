queue data structure to store the vertices or nodes and also to determine which vertex/node should be taken up next
Step 1: Start with node S and enqueue it to the queue.
Step 2: Repeat the following steps for all the nodes in the graph.
Step 3: Dequeue S and process it.
Step 4: Enqueue all the adjacent nodes of S and process them.
[END OF LOOP]
Step 6: EXIT


// a directed graph class 
class DiGraph 
{ 
    int V;    // No. of vertices 
   
    // Pointer to an array containing adjacency lists 
    list<int> *adjList;    
public: 
    DiGraph(int V);  // Constructor 
   
    // add an edge from vertex v to w
    void addEdge(int v, int w);  
   
    // BFS traversal sequence starting with s ->starting node 
    void BFS(int s);   
}; 
   
DiGraph::DiGraph(int V) 
{ 
    this->V = V; 
    adjList = new list<int>[V]; 
}
 void DiGraph::addEdge(int v, int w) 
{ 
    adjList[v].push_back(w); // Add w to v’s list. 
} 
   
void DiGraph::BFS(int s) 
{ 
    // initially none of the vertices is visited
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
   
    // queue to hold BFS traversal sequence 
    list<int> queue; 
   
    // Mark the current node as visited and enqueue it 
    visited[s] = true; 
    queue.push_back(s); 
   
    // iterator 'i' to get all adjacent vertices 
    list<int>::iterator i; 
   
    while(!queue.empty()) 
    { 
        // dequeue the vertex 
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
   
        // get all adjacent vertices of popped vertex and process each if not already visited 
        for (i = adjList[s].begin(); i != adjList[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
}
