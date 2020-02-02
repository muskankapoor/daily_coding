// you are given a pair of integers (x,y). You may perform either of the two operations below,in any order, zero or more times.

// 1. (x,y) -> (x+y,y)
// 2. (x,y) -> (x,y+x)

// For example, you can start with (1, 4), change it to (5, 4), change that to (5, 9), and then change that again to (5, 14).
// You are given four integers: a, b, c, and d. Return ¡°Yes¡± (without quotes) if it is possible to start with the pair (a, b) and end with the pair (c, d). Otherwise, return ¡°No¡±.

// Method signature: string function(int a, int b, int c, int d)

// Input
// Four integers in separate lines.

// Output
// One string ¡°Yes¡± or ¡°No¡±.

// Sample Input
// 1
// 4
// 5
// 9

// Sample Output
// Yes

// Explanation
// (1, 4) -> (5, 4) -> (5, 9) .

#include <iostream>
using namespace std;

string function(int a, int b, int c, int d)
{
   if(a == c && b == d)
       return "Yes";
   else if(a > c )
       return "No";
   else if(a < c && function(a+b, b, c, d) == "Yes")
       return "Yes";
   else if (b < d)
       return function(a, b+a, c , d);
   else
       return "No";
}

int main(){
   int a, b, c, d;
   cin >> a >> b>> c >> d;
   cout << function(a, b, c, d);
   return 0;
}
