// Given a dictionary of words and a string made up of those words (no spaces), return the original sentence in a list. If there is more than one possible reconstruction, return any of them. If there is no possible reconstruction, then return null.

// For example, given the set of words 'quick', 'brown', 'the', 'fox', and the string "thequickbrownfox", you should return ['the', 'quick', 'brown', 'fox'].

// Given the set of words 'bed', 'bath', 'bedbath', 'and', 'beyond', and the string "bedbathandbeyond", return either ['bed', 'bath', 'and', 'beyond] or ['bedbath', 'and', 'beyond']

#include <iostream>
#include <string>
using namespace std;

int dictionary_contains(string word){

  string dictionary[] = {"mobile","samsung","sam","sung","man","mango", 
                           "icecream","and","go","i","like","ice","cream"}; 
    int size = sizeof(dictionary)/sizeof(dictionary[0]); 
    for (int i = 0; i < size; i++) 
        if (dictionary[i].compare(word) == 0) 
           return true; 
    return false; 


}

// dynamic programming appraoch

bool wordbreak(string str){
  int size = str.size();
  if (size == 0){return true;}

  //table to store the results of the subprboles
  bool to_store[size - 1];
  memset(to_store, 0, sizeof(to_store)); // all the values are false


  for (int i = 0l i < size; i++){
    if (wb[i] == false && dictionaryContains( str.substr(0, i) )) {
      wb[i] = true;
    }
    if (wb[i] == true) 
      { 
	// If we reached the last prefix 
	if (i == size) 
	  return true; 
  
	for (int j = i+1; j <= size; j++) 
	  { 
	    // Update wb[j] if it is false and can be updated 
	    // Note the parameter passed to dictionaryContains() is 
	    // substring starting from index 'i' and length 'j-i' 
	    if (wb[j] == false && dictionaryContains( str.substr(i, j-i) )) 
	      wb[j] = true; 
  
	    // If we reached the last character 
	    if (j == size && wb[j] == true) 
	      return true; 
	  } 
      } 
  }

  /* Uncomment these lines to print DP table "wb[]" 
     for (int i = 1; i <= size; i++) 
        cout << " " << wb[i]; */
  
    // If we have tried all prefixes and none of them worked 
    return false; 

	 
  
}
