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
  int n;
  cin>>n;
  vvi a(n, vector<int>(n));
  rep(i,n) rep(j,n) cin>>a[i][j];

  int max_row = 0;
  int max_column = 0;
  vector<vector<vector<string>>> v(n, vector<vector<string>>(n, vector<string>(8)));
  rep(i,n){
    rep(j,n){
      rep(k,8){
        
      }
    }
  }


}
