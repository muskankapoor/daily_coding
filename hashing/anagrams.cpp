#include <iostream>
#include <string>
using namespace std;
int sherlockAndAnagrams(string a){
    // Complete this function
int ana = 0;
int diff = 1;
for(int i=0;i<a.size()-1;i++){
	vector<string> substrings(0);
	for(int j=0;j<a.size()-diff+1;j++){
		substrings.push_back(a.substr(j,diff));
	}
	for(int j=0;j<substrings.size();j++){
		sort(substrings[j].begin(),substrings[j].end());
	}
	for(int x=0;x<substrings.size();x++){
		for(int y=x+1;y<substrings.size();y++){
		if(substrings[x]==substrings[y]){
			ana++;
		}
	}
	}
	diff++;
}
return ana;
}

int main(){

  sherlockAndAnagrams("abba");

}
