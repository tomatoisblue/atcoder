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
  ll x; cin>>x;
  bitset<62> bit(x);
  string s=bit.to_string();
  vi vec;
  rep(i,62){
    if(s[61-i]=='1'){
      vec.push_back(i);
    }
  }

  int vecsize=(int)vec.size();
  for(ll b=0; b<(ll)(1<<vecsize); b++){
    bitset<62> bs;
    bs.reset();
    rep(j,vecsize){
      if(b&(1ll<<j)){
        bs|=(1ll<<vec[j]);
      }
    }
    ll ans=(ll)bs.to_ullong();
    cout<<ans<<endl;
  }

}
