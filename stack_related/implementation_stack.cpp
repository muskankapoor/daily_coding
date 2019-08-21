#include <stack>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


// 1 = insert elemtn, 2 = delete, 3 = print max


int main() {
    int N, q, x;
    cin>> N; 
    stack<int> s;
    int max = 0; 
    for (int i = 0; i < N; i++){
        cin >> q;

        if (q==1){
            cin>>x;
          
            if (x > max){
                max = x;     
            }
            s.push(x);
        }
        else if (q==2){
            s.pop();
            if (s.top() != max){
                max = s.top();
            }
            else if (s.empty()){
                max = 0; 
            }
            //cout << s.top();
        }

        else if (q==3){
            
            cout << s.top();
            cout << '\n';
        }
    }
    return 0;
    
   
}



// BALANCED
string isBalanced(string s){

    int i=0,flag=0;
    stack<char> s1;
    
    while(s[i]!='\0'){
        if(s[i]=='(' )
            s1.push(')');
        else if(s[i]=='{' )
            s1.push('}');
        else if(s[i]=='[' )
            s1.push(']');
        else if(s1.empty() || s1.top()!=s[i])
        {
            return "NO";
        }
        else
        s1.pop();
        i++;
    }
   return "YES";
}


// max elements
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
     // first remove max element 
     stack<int> s1;
     stack<int> s2;
     stack<int> s3;

     int height = 0, height1 = 0, height2 = 0;

     for (int i = h1.size() - 1; i >= 0; i--){
         height += h1[i];
         s1.push(height);
     }

     for (int i = h2.size() - 1; i >= 0; i--){
         height1 += h2[i];
         s2.push(height1);
     }

     for (int i = h3.size() - 1; i >= 0; i--){
         height2 += h3[i];
         s3.push(height2);
     }

     while(true){
         if (s1.empty() || s2.empty() || s3.empty()){
             return 0;
         }
         height = s1.top();
         height1 = s2.top();
         height2 = s3.top();

         if ((height == height1) && (height == height2)){
             return height; 
         }

         if ((height > height1) && (height > height2)){
             s1.pop(); 
         }
         
         if ((height1 > height) && (height1 > height2)){
             s2.pop(); 
         }

         
         if ((height2 > height1) && (height2 > height)){
             s3.pop(); 
         }



     }
     
}



// game two stacks


int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m ,ms;
        scanf("%d%d%d", &n, &m, &ms);
 
        for(int A_i = 0; A_i < n; A_i++){
            scanf("%d",&A[A_i]);
        }
        for(int B_i = 0; B_i < m; B_i++){
           scanf("%d",&B[B_i]);
        }

        long long sum = 0;
        int x = 0, y = 0;

        while (x < n && sum + A[x] <= ms) {
            sum += A[x++];
        }

        int ans = x;

        while (y < m && x >= 0) {
            sum += B[y++];
            while (sum > ms && x > 0) {
                sum -= A[--x];
            }

            if (sum <= ms && ans < x + y) {
                ans = x + y;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}



// largest retagn'e
#include <bits/stdc++.h>
using namespace std;

typedef long long           lli;

#define pb push_back


vector < lli > height;
vector < int > s;
lli Histogram(vector<lli> &height)
{
    s.clear();
    height.push_back(0);

    lli sum = 0;
    int i = 0;
    while(i < height.size())
    {
        if(s.empty() || height[i] > height[s.back()])
        {
            s.push_back(i);
            i++;
        }
        else
        {
            int t = s.back();
            s.pop_back();

            sum = max(sum, height[t] * (s.empty() ? i : i - s.back() - 1));
        }
    }

    return sum;
}

int main(void)
{
    int i,j,k,kase=0;

    int n;
    while( scanf("%d",&n)==1 )
    {
        height.assign(n, 0);
        for(i=0; i<n; i++) scanf("%lld",&height[i]);
        printf("%lld\n",Histogram(height));
    }
    return 0;
}
