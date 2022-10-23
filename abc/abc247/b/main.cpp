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
  vector<pair<string,string>> v(n);
  rep(i,n){
    string s, t;
    cin>>s>>t;
    pair<string,string> p;
    p=make_pair(s,t);
    v[i]=p;
  }

  rep(i,n){
    bool fs=true;
    bool ft=true;
    string s=v[i].first;
    string t=v[i].second;
    rep(j,n){
      if(i==j) continue;
      string ss=v[j].first;
      string tt=v[j].second;
      if(s==ss||s==tt)fs=false;
      if(t==tt||t==ss)ft=false;
    }
    if(!(fs||ft)){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
}
