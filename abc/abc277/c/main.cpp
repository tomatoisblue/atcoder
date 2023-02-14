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

void solve(int n, map<int,vector<int>> &m, vector<int> &ans){
  ans.push_back(n);
  if(m.find(n) == m.end()){
    return;
  }else{
    rep(i,(int)m[n].size()){
      solve(m[n][i], m, ans);
    }
  }
}

int main() {
  int n; cin>>n;
  map<int,vector<int>> m;
  rep(i,n){
    int a,b; cin>>a>>b;
    if(a<b){
      m[a].push_back(b);
    }else{
      m[b].push_back(a);
    }
  }

  vector<int> ans;
  solve(1, m, ans);
  reverse(all(ans));
  cout<<ans[0]<<endl;
}
