#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define ll long long
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  vi X(n+1);
  reps(i,1,n+1)cin>>X[i];
  vi B(n+1);
  rep(i,m){
    int c,y;
    cin>>c>>y;
    B[c]=y;
  }

  vector<vector<ll>> dp(n+1, vector<ll>(n+1));
  vector<ll> MAX(n+1);
  ll ans=0;
  reps(i,1,n+1){
    ll max_value=0;
    rep(k,n+1){
      if(k>i)continue;
      if(k==0){
        dp[i][0]=MAX[i-1];
      }else{
        dp[i][k]=dp[i-1][k-1]+X[i]+B[k];
      }
      max_value = dp[i][k]>max_value ? dp[i][k] : max_value;

    }
    MAX[i]=max_value;
  }
  for(auto x: MAX) ans = x>ans ? x : ans;
  cout<<ans<<endl;
}
