#include <iostream>
#include <climits>
using namespace std;


class Interval{
public:
  int buy;
  int sell;
};



void Stock(int price[], int n ){
  // 100 180 260 310 40 535 695

  // edge case
  if (n == 1){
    return;
  }

  int count = 0;


  Interval sol[n/2 + 1];

  int i = 0; 
  while (i < n - 1){

    // 100 180 260 310 40 535 695
    // present element to next eleent 
    while ((i < n - 1) && (price[i + 1] <= price[i])) {
      i++;

    }
	    
    // If we reached the end, break 
    // as no further solution possible 
    if (i == n - 1) {
      break;
    }

    sol[count].buy = i++;

    


    // 100 180 260 310 40 535 695
    
    while ((i < n) && (price[i] >= price[i - 1])) {
      i++;
    }

    sol[count].sell = i - 1; 
    count++;

  }
    for (int i = 0; i < count; i++){
      cout << "Buy on day: " << sol[i].buy 
	   << "\t Sell on day: " << sol[i].sell << endl;
    }
  

}


int main(){

  int arr[] ={100, 180, 260, 310, 40, 535, 695};
  
  Stock(arr, 7);

}
