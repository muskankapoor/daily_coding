#include <iostream>
#include <queue>

using namespace std;


#define SIZE 10

class Queue{

  int *arr;
  int top;
  int capacity;
  int front;
  int back;
  int count;
 

public:

  Queue(int size = SIZE);

  void dequeue();

  void enqueue(int x);

  int peak(); //returns top without modifying 

  int size();
  bool isEmpty();
  bool isFull();

};

Queue::Queue(int size){

  arr = new int[size];
  capacity = size;
  front = 0;
  back = -1;

   count = 0;
  

}


void Queue::dequeue(){

  if (isEmpty()){

    cout << "underflow\n";
    exit(EXIT_FAILURE);
  }

  cout << "removing " <<  arr[front];
  front = (front + 1) % capacity;

  count--;

  //2 3 5 6
  //remove 2 count =4
  //front = 3
}
  


void Queue::enqueue(int item){

  if (isFull()){
    cout << "overflow\n";
  }

  cout << "inserting " << item << "\n";

  back = (back + 1) % capacity;
  arr[back] = item;
  count++;

}


int Queue::peak(){

  if (isEmpty()){

    cout << "underflow\n";

    exit(EXIT_FAILURE);

  }

  return arr[front];
    

}


int Queue::size(){

  return count;
}


bool Queue::isEmpty(){

  return (size() == 0);
}

bool Queue::isFull(){
  return (size() == capacity);
}


int main(){

  Queue q(5);
  
  cout << "\n";

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  cout << "Front element is " << q.peak() << endl;

  q.dequeue();

  q.enqueue(4);

  cout << "Queu size is " << q.size() << endl;

  q.dequeue();

  q.dequeue();

  q.dequeue();


  if (q.isEmpty()){

    cout << "Queu is empty" << endl;

  }

  else{

    cout << "Queue is not empty";

  }
  
}

