// string of lngest non repeating substring

string findLongestString(string str){

  // GEEKSFORGEEKS
  int i;
  int n = str.length();

  int st = 0; // start pont of current substr

  int curlen; // length of curren substr

  int max_len = 0; // wihtout repeating length substr so far

  int start;

  unordered_map<char, int> pos;

  pos[str[0]] = 0; // position of the first character is 0

  for (i = 1; i < n; i++){
    // If this character is not present in hash, 
    // then this is first occurrence of this 
    // character, store this in hash. //geeksforgeeks
    if (pos.find(str[i]) == pos.end()){ //ge
      pos[str[i]] = i; //eksfor
    }
    else { 
      // If this character is present in hash then 
      // this character has previous occurrence, 
      // check if that occurrence is before or after 
      // starting point of current substring. 
      if (pos[str[i]] >= st) {  
  
	// find length of current substring and 
	// update maxlen and start accordingly. 
	currlen = i - st;  
	if (maxlen < currlen) { 
	  maxlen = currlen; //1 
	  start = st;  // 0
	}

	// Next substring will start after the last
	// occurrence of current character to avoid 
        // its repetition.
	st = pos[str[i]] + 1; //e
	
  
	// Update last occurrence of 
	// current character. 
	pos[str[i]] = i; 
      } 
    } 

    / Compare length of last substring with maxlen and 
    // update maxlen and start accordingly. 
    if (maxlen < i - st) { 
        maxlen = i - st; 
        start = st; 
    } 
  
    // The required longest substring without 
    // repeating characters is from str[start] 
    // to str[start+maxlen-1]. 
    return str.substr(start, maxlen); 
} 
