// find the sum of left and right witout including that pivot

int equalbalance(int arr[]){


  int sum = 0, n = arr.length();

  for (int i = 0; i < n; i++){
    sum += arr[i];
  }

  int lsum = 0, rsum = 0;

  for (int i = 0; i < n; i++){
    lsum += arr[i];
    rsum = sum - lsum;

    if (lsum == rsum){
      return i;
    }
  }
  return -1;
  
}
