#include <iostream>
#include <set>

using namespace std;

its stdc++.h="">
#include <unordered_map>
using namespace std;

int main() {
int t,n1,n2,n3;
cin>>t;
while (t--){
cin>>n1>>n2>>n3;
int a1[n1],a2[n2],a3[n3],flag=0,x;
x=max(max(n1,n2),n3);
unordered_map <int,int> m;
for(int i=0;i<n1;i++){ cin="">>a1[i];
if (a1[i]!=a1[i-1])
m[a1[i]]++;
}
for(int i=0;i<n2;i++){ cin="">>a2[i];
if (a2[i]!=a2[i-1])
m[a2[i]]++;
}
for(int i=0;i<n3;i++){ cin="">>a3[i];
if (a3[i]!=a3[i-1])
m[a3[i]]++;
}
int a[x];
int j=0;
for (auto x:m){
// cout<<x.first<<" ";="" if="" (x.second="=3){" a[j]="x.first;" j++;="" flag="1;" }="" }="" sort(a,a+j);="" for="" (int="" i="0;i&lt;j;i++)" cout<<a[i]<<"="" ";="" if="" (flag="=0)" cout<<-1;="" cout<<endl;="" }="" code="" return="" 0;="" }="">
