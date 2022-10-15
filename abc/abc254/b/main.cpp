#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vvll vector<vector<long long>>
#define ll long long
using namespace std;

const int INF = 0x3f3f3f3f;

int main() {
  int n; cin>>n;
  vvi a(n);
  rep(i,n){
    rep(j,i+1){
      if(j==0 || j==i){
        a[i].push_back(1);
      }else{
        a[i].push_back(a[i-1][j-1]+a[i-1][j]);
      }
    }
  }

  rep(i,n){
    rep(j,(int)a[i].size()){
      cout<<a[i][j];
      if(j!=i) cout<<' ';
    }
    cout<<"\n";
  }

}
