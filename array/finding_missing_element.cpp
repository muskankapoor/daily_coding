// find missing element of second array shuffling and mixed rnaodm eleents



#include <iostream>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;


// array 

int missingElement(vector<int> vect, vector<int> vect1){

  sort(vect.begin(), vect.end());
  sort(vect1.begin(), vect1.end());

  for (int i = 0; i < vect.size(); i++){
    for (int j = 0; j < vect.size(); ++j) {

      if (vect[i] != vect[j]){
	return vect[i];
      }
      
    }

  }

  return vect[-1];
  
  
}


// hashtable

void hashtableuse(vector<int> vect, vector<int> vect1){

  unordered_set<int> s;
  for (int i = 0; i < N; ++i) {
    s.insert(vect1[i]);
  }

  for (int i = 0; i < vect.size(); i++) 
    if (s.find(vect[i]) == s.end()) 
            cout << vect[i] << " "; 
} 


  
}



int main(){

  vector<int> vect;
  vector<int> vect1;


  vect.push_back(9);
  vect.push_back(2);
  vect.push_back(2);
  vect.push_back(1);
  vect.push_back(0);

  vect1.push_back(2);
  vect1.push_back(1);
  vect1.push_back(0);
  vect1.push_back(9);
  

  cout << missingElement(vect, vect1);

  
  

  
}
