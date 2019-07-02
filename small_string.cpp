#include <iostream>
#include <string>

using std::cout;
using std::endif;
using std::sting;



vector<int> solution(string&, string&);

char smallestCharacter(string, int);

int frequencyOfCharacter(string, char);

vector<int> solution(string &A, string &B){

  vector<int> result;

  vector<string> aWords, bWords;

  // counting the number of words in string A based on the spaces: if space = 1, then number of words = 2!
  int awords = 0;

  for(int i = 0; i < A.length(); i++){

      if(A.at(i) == ' ')

	awords++;

    }

  awords += 1;

  // extracting and inserting the words from string A into a vector

  boost::split(aWords, A, boost::is_any_of(" "));

  // counting the number of words in string B based on the spaces: if space = 1, then number of words = 2!

  int bwords = 0;

  for(int i = 0; i < B.length(); i++)

    {

      if(B.at(i) == ' ')

	bwords++;

    }

  bwords += 1;

  // extracting and inserting the words from string B into a vector

  boost::split(bWords, B, boost::is_any_of(" "));

  int count = 0;

  for(int i = 0; i < bwords; i++)

    {

      for(int j = 0; j < awords; j++)

	{

	  if(frequencyOfCharacter(aWords[j], smallestCharacter(aWords[j], aWords.size())) < frequencyOfCharacter(bWords[i], smallestCharacter(bWords[i], bWords.size())))

	    {

	      count++;

	    }

	}

      result.push_back(count);

      count = 0;

    }

  return result;

}

char smallestCharacter(string a, int n)

{

  // initializing smallest alphabet to 'z'

  char min = 'z';

  // find smallest alphabet

  for (int i=0; i<n-1; i++)

    if (a[i] < min)

      min = a[i];

  // returning smallest alphabet

  return min;

}

int frequencyOfCharacter(string s, char c)

{

  int count = 0;

  for(int i = 0; s[i] != '\0'; i++)

    {

      if(s[i] == c)

	count++;

    }

  return count;

}

int main()

{

  string A = "abcd aabc bd";

  string B = "aaa aa";

  vector<int> res = solution(A, B);

  cout << "\nResult is:\n[ ";

  for(int i = 0; i < res.size(); i++)

    {

      if(i == res.size() - 1)

	cout << res[i] << " ]" << endl;

      else

	cout << res[i] << ", ";

    }

  return 0;

}
