int fibDynamic(int postion, int fibonaccisequence[]){

  if (position == 0 || postion == 1){
    return 1; 
  }

  else{
    if (fibonaccisequence[postion] != -1){
      return fibonaccisequence[postion];
    }
    else{
      fibonaccisequence[postion] = fibDynamic(postion - 1, fibonaccisequence) + fibDynamic(position - 2, fibonaccisequence);
      return fibonaccisequence[position];
    }

  }

}// linear 
