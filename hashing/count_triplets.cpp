#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std; 

map<long, vector<long> >m; // map with a number and a vector with it 

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {

    //int mycount = std::count(arr.begin(), arr.end(), r);
    for (int i=0;i<arr.size();i++){
        m[arr[i]].push_back(i);
    }

    long c=0; 
    for(int i=1;i<arr.size()-1;++i){

        // if it is divisible continue
        if (arr[i]%r){
            continue; 
        }
        //Count of elements occur before A[i] and has a value of A[i]/r
        long less = upper_bound(m[arr[i]/r].begin(), m[arr[i]/r].end(), i - 1) - m[arr[i]/r].begin();

         //Count of elements occur after A[i] and has a value of A[i]*r
        long high = m[arr[i]*r].end() - lower_bound(m[arr[i]*r].begin(),m[arr[i]*r].end(),i+1);
        
        //add the count of total possible combinations of both type of elements describe above
        c+=(high*less);
    }
    return c; 

 
}


int main(){


  vector<long> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);
  v.push_back(4);

  countTriplets(v);


}
