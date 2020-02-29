#inlcude <Iostream>

int maxvalue(int numbers[], int arrayszie){

  if (arraysize == 1){
    return numbers[0];
  }

  else{
    // process array that is one less - 
    int max = maxvalue(numbers, arrayszie - 1);
    // compare last elemetn and max element 
    if (max > numbers[arrayszie - 1]){
      return max; 
    }
    else{
      return numbers[arrayszie - 1];
    }
    
  }

}


// divide into half
int maxvalueDC(int numbers[], int start, int end){
  if (start == end){
    return numbers[start];
  }
  else{
    int halfway = (start + end)/2; // mid way
    int left = maxvalueDC(numbers, start, halfway);
    int right = maxvalueDC(numbers, halfway + 1, end);

    if (left > right){
      return left;
    }
    else{
      return right;
    }
    
  }
}


