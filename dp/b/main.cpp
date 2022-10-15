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
#define vvll vector<vector<long long>>
#define ll long long
using namespace std;

const ll INF = 1e9;

int main() {
  int N, K;
  cin >> N >> K;
  vi H(N+1);
  reps(i,1,N+1) cin >> H[i];
  vector<ll> DP(N+1, INF);
  DP[1]=0;
  reps(i,1,N+1){
    reps(j,1,K+1){
      if(i-1 < j) continue;
      DP[i] = min(DP[i], DP[i-j] + abs(H[i] - H[i-j]));
    }
  }
  cout << DP[N] << endl;
}
