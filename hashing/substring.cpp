
// Complete the twoStrings function below.
// Given two strings, determine if they share a common substring. A substring may be as small as one character.

// For example, the words "a", "and", "art" share the common substring . The words "be" and "cat" do not share a substring.
string twoStrings(string s1, string s2) {
    int freq1[26], freq2[26];
    for (int i=0;i<26;i++){
        // set all the to 0
        freq1[i]=freq2[i]=0;
    }  
    for (char ch:s1){
        freq1[ch-'a']++;
        // count frequency 
    }
        
    for (char ch:s2){
        freq2[ch-'a']++;
    }
        
    for (int i=0;i<26;i++){
        if (freq1[i]&&freq2[i]){
            return "YES";
        } 
    }

    return "NO";
}
