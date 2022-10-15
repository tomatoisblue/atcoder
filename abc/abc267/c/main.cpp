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
  int n,m;
  cin >> n >> m;
  vll A(n);
  vll S(n+1);
  reps(i,1,n+1){
    cin >> A[i-1];
    S[i] = S[i-1] + A[i-1];
  }



  vll sum(n-m+1);
  rep(i,m){
    sum[0]+= (i+1) * A[i];
  }

  ll ans = -1000000000000000000ll;
  ans = ans < sum[0] ? sum[0] : ans;


  reps(i,1,n-m+1){
    sum[i] = sum[i-1] + m * A[i+m-1] - (S[i+m-1] - S[i-1]);
    ans = ans < sum[i] ? sum[i] : ans;
  }

  cout << ans << endl;
}
