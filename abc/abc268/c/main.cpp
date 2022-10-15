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
  vi p(n);
  vi spin(n);
  rep(i,n) cin>>p[i];
  int d;
  rep(i,n){
    d=p[i]-i;
    if(d<0)d=n+d;
    if(d==0){
      spin[n-1]++;
    }else{
      spin[d-1]++;
    }
    spin[d]++;
    spin[d+1]++;
  }
  int ans=0;
  rep(i,n){
    ans=max(ans,spin[i]);
  }
  cout<<ans<<endl;
}
