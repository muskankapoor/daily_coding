/*codewars.com/kata/55fab1ffda3e2e44f00000c6?utm_source=newsletter&utm_medium=email&utm_campaign=weekly_coding_challenges&utm_term=2020-08-22

  The cockroach is one of the fastest insects. Write a function which takes its speed in km per hour and returns it in cm per second, rounded down to the integer (= floored).*/
#include <iostream>
using namespace std; 

int cockroach(double kph){


  int secondsHour = 3600;
  int cminKm = 100000;

 int  ans = (kph * cminKm)/secondsHour;

 return ans; 

  
}

int main(){

  cout << cockroach(1.08);
}
  
