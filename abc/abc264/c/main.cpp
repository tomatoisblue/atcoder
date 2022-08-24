#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define v(t,v,n) vector<t> v(n)
#define vv(t,v,h,w) vector<vector<t>> v(h, vector<t>(w))
using namespace std;


int main() {
  int h1,w1,h2,w2;
  cin>>h1>>w1;
  vv(int,v1,h1,w1);
  rep(i,h1){
    rep(j,w1){
      cin>>v1[i][j];
    }
  }
  cin>>h2>>w2;
  vv(int,v2,h2,w2);
  rep(i,h2){
    rep(j,w2){
      cin>>v2[i][j];
    }
  }



}