
Wineer(m size of perosn, k)
goes to w
winener ((n- 1, k) + k) &n


(index1 + index 2) % k to get the nex tindex since it is a circle 


 
int josephus(int n, int k) 
{ 
  if (n == 1) 
    return 1; 
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the 
       recursive call josephus(n - 1, k) considers the original position  
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1; 
} 
  
// Driver Program to test above function 
int main() 
{ 
  int n = 14; 
  int k = 2; 
  printf("The chosen place is %d", josephus(n, k)); 
  return 0; 
} 
