#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vv(t,n,h,w) vector<vector<t>> n(h,vector<vector<t>>(w)
#define out(n) cout<<(n)<<endl
using namespace std;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int MAX=105;
  vi v(MAX);
  reps(i,a,b) v[i]++;
  reps(i,c,d) v[i]++;
  int cnt=0;
  for(auto i: v) if(i==2) cnt++;
  cout<<cnt<<endl;
}