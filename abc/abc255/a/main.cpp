#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
using namespace std;

int main() {
  int r,c;
  cin>>r>>c;
  vvi a(2,vector<int>(2));
  rep(i,2){
    rep(j,2){
      cin>>a[i][j];
    }
  }
  cout<<a[r-1][c-1]<<endl;
}
