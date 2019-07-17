#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;


bool f(int x, int y){
  return x > y;
  
}

void vectordemo(){
  
  // vector
  
  vector<int> A{11,2,3,14};
  cout << A[1] << endl;

  sort(A.begin(), A.end()); //ONlogN

  bool present = binary_search(A.begin(), A.end(), 3); //true logn
  cout << present << "\n";
  present = binary_search(A.begin(), A.end(), 4); //f
  cout << present << "\n";
  
  A.push_back(100);
  present = binary_search(A.begin(), A.end(), 100);
  cout << present << '\n';
  
  
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);

  A.push_back(123);

  
  // lower bound give me the iterator to the ifrst element which is greater than or equal to 
  // vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
  // another way
  auto it = lower_bound(A.begin(), A.end(), 100);
  


  //first elemtnt stirctly greater tha 100
   vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);
   

   cout << *it << " " <<*it2 << " ";
  
   cout << it2 - it << "\n";


   // print and reverse array 
   sort (A.begin(), A.end(), f);
   vector<int>::iterator it3;
   
   for (it3 = A.begin(); it3!=A.end(); it3++){
     cout << *it3 << " ";
   }

   cout << endl;


   // print vector
   for (int &x: A){
     cout << x << " ";
   }
}


void setdemo(){
  // keep inserting in logn time
  set<int> s;
  // ascending order
  s.insert(1);
  s.insert(2);
  s.insert(-1);
  s.insert(-10);

  for (int x: s){
    cout << x << " ";
  }

  cout << endl;

  set<int>::iterator it = s.find(-1);
  if (it == s.end()){
    cout << "it not present\n";
  }
  else{
    cout << "present " << *it << endl;
  }

  //auto it2 = s.lower_bound(-1); // greater than or equl to
  //auto it3 = s.upper_bound(-1);

  set<int>::iterator it2 = s.lower_bound(-1); // greater than or equl to
  set<int>::iterator it3 = s.upper_bound(-1);
  cout << *it2 << " " << *it3 << endl;
}

void setmap(){

  map<int, int> A;
  A[1] = 100;
  A[2] = -1;
  A[3] = 200;
  A[1000000023] = 1;

  map<char, int> cnt;
  string x = "muskan kapoor";

  // find frequcny of characcter in c++
  for (char c: x){
    cnt[c]++;
  }

  cout << cnt['a'] << " " << cnt['z'] << "\n";
  
    

}


void powerofstl(){


  // to check for comparesion of a,b and c, d
  //   		     compare a < c
  // 					 then checkk b and d 
  set<pair<int, int>> s;
  s.insert({30, 400});
  s.insert({2, 3});
  s.insert({401, 450});
  s.insert({10, 20});

 
  //int point = 50;
  // int point = 1;
  int point = 11;
  auto it = s.upper_bound({point, INT_MAX});
  if (it == s.begin()){
    cout << "the point is not lying naywhere\n";
  }
  it--; // then go one step back 
  pair<int, int> current = *it;

  
  
  if(current.first <= point && point <=current.second){
    cout << "yes it is a pair" << current.first << " " << current.second << "\n";
  }
  else{
    cout << "given point it is not in interval\n";
  }

   
    
   

}

// rahcit jain c++ stl tutorla 
int main(){

   // set
  //
  // setdemo();
  // setmap();
  powerofstl();
  
   
}
