#include <iostream>
#include <list>

using namespace std;



class Graph{

  int V; // number of vertices 
  list<int> *adj; // pointer to a vector of lists

public:
  
  Graph(int V);
  void addEdge(int v, int w);
  void BFS(int s); // traversal from source s

};



Graph::Graph(int V){

  this->V = V;
  adj = new list<int>[V];

}

void Graph::addEdge(int v, int w){

  adj[v].push_back(w); // add w to v's list
}

void Graph::BFS(int s){

  // array of bool 
  bool *visted = new bool[V];

  // makr it all as false
  for (int i = 0; i < V; i++){
    visted[i] = false;
  }

  list<int> queue;

  // makr the current node as visited and enqueu it 
  visted[s] = true;
  queue.push_back(s);


  // 'i' will be used to get all adjacent vertices of a vertex 
  list<int>::iterator i;

  while (!queue.empty()){

    
    // Dequeue a vertex from queue and print it 
    s = queue.front();
    cout << s << " ";
    queue.pop_front();


    //  Get all adjacent vertices of the dequeued 
    //     // vertex s. If a adjacent has not been visited,  
    //     // then mark it visited and enqueue it 
    

    for (i = adj[s].begin(); i!=adj[s].end(); ++i){
      if (!visted[*i]){
	visted[*i] = true;
	queue.push_back(*i);
      }
    }
  }

}


int main(){

  Graph g(4);
  g.addEdge(0, 1); 
  g.addEdge(0, 2); 
  g.addEdge(1, 2); 
  g.addEdge(2, 0); 
  g.addEdge(2, 3); 
  g.addEdge(3, 3); 
  
  g.BFS(2);

}
