#include <iostream>
using namespace std;

int main(){
  
  int length = 5;;
 
  int *array = new int[length]; // use array new.  Note that length does not need to be constant!
 
 
  array[0] = 5; // set element 0 to value 5

  for (int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
 
  delete[] array; // use array delete to deallocate array
 
  // we don't need to set array to nullptr/0 here because it's going to go out of scope immediately after this anyway
 
  return 0;
}
