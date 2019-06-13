/* check if the numbers are smaller
input: 4 2 1 5 3
ouput: 2 1 -1 3 -1
*/

#include <iostream>
#include <vector>
using namespace std;




void checkSmallerNumber(vector<int> arr, int size){
  int not_smaller = -1;
  for (int i = 0; i < size; i++){
    if (i == size-1){
      cout << not_smaller;
    }
    else if (arr[i] > arr[i+1]){
      cout << arr[i+1] << " ";
    }
    else{
      cout << not_smaller << " "; 
    }

  }
        
}


int main()
{
  int t;
  cout << "number of test cases\n";
  cin>>t;
  while(t--){
    int n;
    cout << "size\n";
    cin>>n;
    vector<int> arr(n);
cout << "the array number ";
    for(int i = 0;i<n;++i){
      cin>>arr[i];
    }
   
    checkSmallerNumber(arr, n);
  }
  return 0;
}

