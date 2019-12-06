#include <iostream>
#include <string>
#include <vector>
using namespace std;


class  PriorityQueue{
private:
  vector<int> A;

  // return parent of A[i]
  // if it is a root node then no need
  int Parent(int i){
    return (i-1)/2;
  }

  int Left(int i){
    return (2 * i +1);
  }

  int Right(int i){
    return (2 * i + 2);
  }


  //removal of min or max
  // perculate down
  void heapify_down(int i){
    int left = Left(i);
    int right = Right(i);

    int largest = i;

    // compare A[i] with left and right find whatever is max

    if(left< size() && A[left] > A[i]){
      largest = left;
    }

    if (right < size() && A[right] > A[largest]){
      largest = right;
    }

    // swap with child having greater value and call heapify down on the child

    if (largest != i){
      swap(A[i], largest);
      heapify_down(largest);
    }
  }


  //insertion 
  //heapify up is used to insert at bottom and peruclate up
  // Recursive Heapify-up algorithm
  void heapify_up(int i)
  {
    // check if node at index i and its parent violates 
    // the heap property
    if (i && A[Parent(i)] < A[i]) 
      {
	// swap the two if heap property is violated
	swap(A[i], A[Parent(i)]);
			
	// call Heapify-up on the parent
	heapify_up(Parent(i));
      }
  }

public:

  // return size of the heap
  unsigned int size(){

    return A.size();
  }

  bool empty(){

    return size() == 0;
  }

  // insert key into the heap
  void push (int key){

    A.push_back(key);

    // get element and heapify up

    int index = size() - 1;
    heapify_up(index);
  }

  //remove element with hihgest propity

  void pop(){

    try {
      // if heap has no elements, throw an exception
      if (size() == 0)
	throw out_of_range("Vector<X>::at() : "
			   "index is out of range(Heap underflow)");

      // replace the root of the heap with the last element
      // of the vector
      A[0] = A.back();
      A.pop_back();

      // call heapify-down on root node
      heapify_down(0);
    }
    // catch and print the exception
    catch (const out_of_range& oor) {
      cout << "\n" << oor.what();
    }
  }

  // function to return element with highest priority (present at root)
  int top()
  {
    try {
      // if heap has no elements, throw an exception
      if (size() == 0)
	throw out_of_range("Vector<X>::at() : "
			   "index is out of range(Heap underflow)");

      // else return the top (first) element
      return A.at(0);	// or return A[0];
    }
    // catch and print the exception
    catch (const out_of_range& oor) {
      cout << "\n" << oor.what();
    }
  }
};


// Max Heap C++ implementation
int main()
{
  PriorityQueue pq;
	
  // Note - Priority is decided by element's value
	
  pq.push(3);
  pq.push(2);
  pq.push(15);
	
  cout << "Size is " << pq.size() << endl;	
	
  cout << pq.top() << " ";
  pq.pop();

  cout << pq.top() << " ";
  pq.pop();

  pq.push(5);
  pq.push(4);
  pq.push(45);

  cout << endl << "Size is " << pq.size() << endl;
	
  cout << pq.top() << " ";
  pq.pop();

  cout << pq.top() << " ";
  pq.pop();

  cout << pq.top() << " ";
  pq.pop();

  cout << pq.top() << " ";
  pq.pop();

  cout << endl << std::boolalpha << pq.empty();
	
  pq.top();	// top operation on an empty heap
  pq.pop();	// pop operation on an empty heap

  return 0;
}
