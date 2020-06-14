#include <iosttream>
#include <vector>
usin namespace std;


// time on
// space o1 
string AlphabetBoard(string target){

  string result = "";
  int prevrow = 0, prevcol = 0;

  for (int i = 0; i < target.length(); i++){
    int currow = (c - 'a')/5; // row
    int currcol = (c - 'a')%5; // col

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


void FindPath(string result, int prevrow, int prevcol, int currow, int currcol){

  while (prevrow > currow){
    result.append('U');
    prevrow--;
  }

  while (prevcol < currcol){
    result.append('R');
    prevcol++:
  }

  while (prevrow < currow){
    result.append('D');
    prevrow++;
  }


  while (prevrow > currow){
    result.append('L');
    prevrow++;
  }
  
  

}
