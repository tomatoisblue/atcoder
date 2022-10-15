#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vvll vector<vector<long long>>
#define ll long long
using namespace std;

int main() {
  int n;
  ll w;
  cin >> n >> w;
  vll W(n+1), V(n+1);
  reps(i,1,n+1) cin >> W[i] >> V[i];

  vvll DP(n+1, vector<ll>(w+1));
  reps(i,1,n+1){
    reps(j,1,w+1){
      if(j >= W[i]) DP[i][j] = max(DP[i-1][j], DP[i-1][j-W[i]] + V[i]);
      else DP[i][j] = DP[i-1][j];
    }
  }

  cout << DP[n][w] << endl;
}
