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
  string s[n];
  rep(i,n) cin>>s[i];
  vvi v(10,vector<int>(n));
  rep(i,10){
    rep(j,n){
      rep(k,10){
        if(s[j][k]-'0'==i){
          v[i][j]=k;
        }
      }
    }
  }

  vi a(10);
  rep(i,10){
    vi cnt(10);
    rep(j,n){
      cnt[v[i][j]]++;
    }
    rep(j,10){
      if(cnt[j]>=2){
        rep(k,n){
          if(v[i][k]==j){
            v[i][k]+=(cnt[j]-1)*10;
            break;
          }
        }
      }
    }
    sort(all(v[i]));
    a[i]=v[i].back();
  }

  int ans=1000;
  rep(i,10){
    ans=min(ans,a[i]);
  }
  cout<<ans<<endl;
}
