#include <iostream>
using namespace std;


// Given an array of penalties P, an array of car numbers C, and also the date D. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines of input. First line of each test case contains two integers N & D, second line contains N space separated car numbers C and third line contains N space separated penalties P.

// Output:
// For each test case,In new line print the total fine.

// 1. if  date is even check odd numbers of the array P,
// 2. the check corresponding index and add those up

int FindFine(int size, int D,  int C[], int P[]){


  int sum = 0;
  
  if (D%2==0){
    for (int i = 0; i < size; i++){
      if (C[i]%2==1){
	sum = sum + P[i];
      }
    }
  }

  else{
    for (int i = 0; i < size; i++){
      if (C[i]%2==0){
	sum = sum + P[i];
      }
    }
  }

  return sum;
 
  
}



int main(){

  int size = 4;
  int D = 12;
  int arr[] = {2375, 7682, 2325, 2352};
  int arr1[] = {250, 500, 350, 200};

  cout << FindFine(size, D, arr, arr1);


  
}
