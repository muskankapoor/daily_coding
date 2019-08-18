#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>

using namespace std;
/*sample
int main(){
  map<char, int> M; //logn for each
  unordered_map<char, int> U; // o(1) per operaion

  string s = "muskan kapoor";
  
  }*/


int main(){

  int n;
  cin >> n;
  vector<int> A(n, 0); // INITIALZING with 0

  long long S = 0;

  for (int i = 0; i < n; i++){
    cin >> A[i];
    S +=A[i];
    
  }

  if (S == 1){
    cout << "NO";
    return 0;
  }
    
  map<int, int> first, second;

  first[A[0]] = 1;

  for (int i = 1; i < n; i++){
    second[A[i]]++; // the count of each elemnt 
  }

  int sdash = 0;
  for (int i = 0; i < n - 1; i++){
    sdash += A[i]; // sum of first i numbers
    if (sdash == S/1){
      cout << "YES\n";
    }
  ]

    if (sdash < S/2){
      long long x = S/2 - sdash;
      // delete elemtns from the second half and insert itno first half
      if (second[x] > 0){
	cout << "YES\n";
	return 0;
      }
    }

    else{

      long long y = sdash - S/2;
      if (first[y] > 0){
	cout << "YES\N";
	return 0;
      }
    }

    first[A[i+1]]++;
    second[A[i + 1]]--;


}
