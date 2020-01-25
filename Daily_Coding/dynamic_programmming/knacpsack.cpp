// max value with given weight

// infor for one value
struct WeightValue{

  int weight;
  int value; 

};

// one recusie calls for 5 more resucrise calls
int knapsackFullRecursive(int avaliableweight, WeightValue items[], int numitems){

  int maxvalue = 0;
  for (int i = 0; i < numitems; i++){
    if (items[i].weight <= avaliableweight){
      int tempvalue = knapsackFullRecursive(avaliableweight - itemsp[i].weight, items, numitems);
      if ((tempvalue + items[i].value) > maxvalue){
	maxvalue = tempvalue + items[i].value;
      }
    }
  }

  return maxvalue;

}



int knapsackDynamic(int avaliableweight, WeightValue items[], int numitems, int knapsackvalue[]){

  int maxvalue = 0;
  if (knapsackvalue[avaliableweight] > -1){
    return knapsackvalue[avaliableweight];
  }
  
  for (int i = 0; i < numitems; i++){
    if (items[i].weight <= avaliableweight){
      int tempvalue = knapsackDynamic(avaliableweight - itemsp[i].weight,  numitems, knapsackvalue);
      if ((tempvalue + items[i].value) > maxvalue){
	maxvalue = tempvalue + items[i].value;
      }
    }
  }

  knapsackvalue[avaliableweight] = maxvalue;
  return maxvalue;

}

int main(){

  // arrat
  WeightValue sack[5] = {
			 {2, 3},
			 {3, 5},
			 {4, 7},
			 {5, 9},
			 {7, 13}
			 


  };


}
