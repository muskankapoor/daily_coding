#include<iostream> 
#include<algorithm> 
#include<vector>

using namespace std;



/*
 * Complete the 'getShiftedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER leftShifts
 *  3. INTEGER rightShifts
 */

string leftrotate(string &s, int d, int l);
string rightrotate(string &s, int d);

string getShiftedString(string s, int leftShifts, int rightShifts) {
    
    leftrotate(s, leftShifts, rightShifts);

} 

string leftrotate(string &s, int d, int l) { 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
    rightrotate(s, l);
} 
  
// In-place rotates s towards right by d 
string rightrotate(string &s, int d) 
{ 
   leftrotate(s, s.length()-d); 
   return s; 
} 
  



int main(){
  string str = "abcd";
  cout << getShiftedString(str, 1, 2);

}