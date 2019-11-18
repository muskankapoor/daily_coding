// in place

string reverse(string str){
    int n = str.length();
	for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]); 
	}
	return str;
}

int main(){
    
    string str = "Madam, I'm Adam";
    cout << reverse(str);
    
}


// with new string
string reverse(string str){
  string new_str = " ";
  for (int i = str.length() - 1; i++) {
    new_str += str[i]; 
      }
	return new_str;
}

int main(){
    
    string str = "Madam, I'm Adam";
    cout << reverse(str);
    
}


reverse(str.begin(), str.end());
