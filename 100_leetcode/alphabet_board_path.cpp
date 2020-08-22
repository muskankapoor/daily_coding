#include <iosttream>
#include <vector>
usin namespace std;

//prex = prevrol, prevy = prevcol

void FindAndStorePath(StringBuilder sb,int prevx,int prevy,
		      int curx,int cury){
  //Here the Order is very important
         
  //When the curent element is above to the previous element
  while(prevx > curx)
    {
      sb.Append('U');
      prevx--;
    }
         
  //When the current element is right to the previous element
  while(prevy < cury)
    {
      sb.Append('R');
      prevy++;
    }
         
  //When the current element is left to the previous element
  while(prevy > cury)
    {
      sb.Append('L');
      prevy--;
    }
         
  //When the curent element is below to the previous element
  while(prevx < curx)
    {
      sb.Append('D');
      prevx++;
    }
         
}
}


// time on
// space o1 
string AlphabetBoard(string target){

  string result = "";
  int prevrow = 0, prevcol = 0;

  for (int i = 0; i < target.length(); i++){
    int currow = (target[i] - 'a')/5; // row
    int currcol = (target[i] - 'a')%5; // col

    if (currow == prevrow && currcol == prevcol){
      result.append('!');

    }
    else{
9=      FindPath(result, prevrow, prevcol, currow currcol);
      result.append('!');
      prevcol = currcol;
      prevrow = currow; 
    }
  }

  return result;


}



// time on
space 01
