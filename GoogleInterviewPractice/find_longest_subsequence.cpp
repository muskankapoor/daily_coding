 Find longest word in dictionary that is a subsequence of a given string
 given a string s and a set of words d that is a subsequence of s
 For example, given the input of S = "abppplee" and D = {"able", "ale", "apple", "bale", "kangaroo"} the correct output would be "apple"

 brute force generate all the possible subsequence with for loops but that is 2^n possible subsequence
 given string s and dicitonary find longest word in d that is subsequence of s

 greedy algorhtmn:
 S from the beginning for w[0]. After you find it, continue scanning from that point for w[1], and so on, until either you run out of characters in S
   (w is not a subsequence), or you find all the characters in w (w is a subsequence).


   You could sort the dictionary words in order of descending length,  The running time is O(N*W) where W is the number of words in D and N is the number of characters in S.
but not optimal

   create map to see where each thing belongs

bool isSubSequence(string str1, string str2) { 
    int m = str1.length(), n = str2.length(); 
  
    int j = 0; // For index of str1 (or subsequence 
  
    // Traverse str2 and str1, and compare current 
    // character of str2 with first unmatched char 
    // of str1, if matched then move ahead in str1 
    for (int i=0; i<n&&j<m; i++) 
        if (str1[j] == str2[i]) 
            j++; 
  
    // If all characters of str1 were found in str2 
    return (j==m); 
} 
  
// Returns the longest string in dictionary which is a 
// subsequence of str. 
string findLongestString(vector <string > dict, string str) 
{ 
    string result = ""; 
    int length = 0; 
  
    // Traverse through all words of dictionary 
    for (string word : dict) 
    { 
        // If current word is subsequence of str and is largest 
        // such word so far. 
        if (length < word.length() && isSubSequence(word, str)) 
        { 
            result = word; 
            length = word.length(); 
        } 
    } 
  
    // Return longest string 
    return result; 
} 
  
// Driver program to test above function 
int main() 
{ 
    vector <string > dict = {"ale", "apple", "monkey", "plea"}; 
    string str = "abpcplea" ; 
    cout << findLongestString(dict, str) << endl; 
    return 0; 
} 
