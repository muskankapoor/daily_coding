#include <iostreamm>
#include <vector>

using namespace std;


int findJudge(int N, vector<vector<int>>& trusts){

  vector<int> degrees(N+1);

  for (const auto& trusts : trusts){
    --degrees[trusts[0]];
    ++degrees[trusts[1]];
    
  }
`
  for (int i = 1; i <=N; ++i) {
    if (degrees[i] == N - 1){
      return i;
    }
   
  }
  return -1;

  
}
