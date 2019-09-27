#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkMagazine(vector<string> magazine, vector<string> note) {

   unordered_map<string, int> words;
   for (int i = 0; i < magazine.size(); i++){
     words[magazine[i]]++;
   }

   for (int i = 0; i < note.size(); i++){
     if (words[note[i]]> 0){
       words[note[i]]--;
     }
     else{
       return false; 
     }
   }
        
   return true; 
}


int main(){

  vector<string> v;
  v.push_back("two times three is not four");

  vector<string> m;
  m.push_back("two times two is four");

  cout << checkMagazine(v, m);


  
}
