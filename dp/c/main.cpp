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

int main() {
  int N;
  cin >> N;
  vi A(N+1), B(N+1), C(N+1);
  reps(i,1,N+1){
    cin >> A[i] >> B[i] >> C[i];
  }
  vvi dp(N+1, vector<int>(3));
  dp[1][0] = A[1];
  dp[1][1] = B[1];
  dp[1][2] = C[1];

  reps(i,2,N+1){
    rep(j,3){
      if(j == 0){
        dp[i][j] = A[i] + max(dp[i-1][1], dp[i-1][2]);
      }else if(j == 1){
        dp[i][j] = B[i] + max(dp[i-1][2], dp[i-1][0]);
      }else{
        dp[i][j] = C[i] + max(dp[i-1][0], dp[i-1][1]);
      }
    }
  }

  int max = 0;
  rep(j,3){
    max = max < dp[N][j] ? dp[N][j] : max;
  }

  cout << max << endl;
}
