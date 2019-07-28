HashMap<int, Node> nodeLookup = new HashMap<Int, Node>();


class Node{
private:
  int id;
  LinkedList<Mode> adjacent = new LinkedList<Node>();
  Node(int id){
    this.id = id;
  }
};

Node getNode(int id);
void addEdge(int source, int desttination){
  Node s = getNode(soure);
  Node d = getNode(desttination);
  a.adjacent.add(d);
}
							    


bool hasPathsDFS(int course, int desttination){
  Node a = getNode(source);
  Node d = getNode(desttination);
  Hashset<int> visited = new HashMap<Int>();
  return hasPathsDFS(a, d, visited);
}

bool hasPathsDFS(Node source, Node desttination, Hashset<int> visited){
  if (visited.contains(source.id){
      return false;
    }
    visited.add(source.id);
    if (source == desttination){
      return true;
    }
    for (Node child : source. adjacent){
      if (hasPathsDFS(child, desttination, visited){
	  return true;
	}
    return false;
	  
   }
}
   
bool hasBFS(Node source, Node desttination){

  LinkedList<Node> nextoVisit = new LinkedListNode();
  HashSet<Int> visited = new Hash<int>;
  nextoVisit.add(source);
  while (!nextovisited.isempty()){
    Node node = nextoVisit.remove();
    if (node == desttination){
      return true;
    }

    if (visited.contains(node.id)){
      continue;
    }
    visited.add(node.id);

    for (Node child : node.adjacent)
      nextoVisit.add(child);
  }
  
  
					 


 }
