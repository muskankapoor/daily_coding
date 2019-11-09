#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){

  map<string, string> m;
  m.insert(pair<string, string>("Amrish", "3476668124"));
  m.insert(pair<string, string>("Jatin", "6468062448"));
  m.insert(pair<string, string>("Muskan", "3474303250"));
  m.insert(pair<string, string>("Anshu", "7182556334"));

  string name;
  cin >> name;

  map<string, string>::iterator it;

  it = m.find(name);
  if (it != m.end()){
    cout << "Phone number " << it->second;
  }
  else{
    cout << "not found";
  }
		 


}
