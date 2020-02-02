// given list of stock prices ordered by time for a single stock, find the largest amount of money that can be gained by purchasing a single share of the stock, then subsequently selling their share later in time. if it isn't possible to make any money in this way then return 0



int difference(vector<int> prices)
{
  int m=0; // max_ diff
  for(int i=0;i<prices.size();i++)
    {
      for(int j=i+1;j<prices.size();j++)
	{
	  // another way of saying the if statement is  if (arr[j] - arr[i] > m)   
	  if(m<prices[j]-prices[i])
	    {
	      m=prices[j]-prices[i];
	    }
	}
    }
  return m;
}
