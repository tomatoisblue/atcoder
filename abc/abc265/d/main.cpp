#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvb vector<vector<bool>>
using namespace std;


int main() {
  int n,p,q,r;
  cin>>n>>p>>q>>r;
  vi A(n);
  rep(i,n) cin>>A[i];
  vi S(n+1);
  S[0]=0;
  reps(i,1,n+1) S[i]=S[i-1]+A[i-1];


}