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
  int n,w; cin>>n>>w;
  vi a(n);
  rep(i,n) cin>>a[i];
  set<int> s;
  rep(i,n) if(a[i]<=w) s.insert(a[i]);
  rep(i,n-1){
    reps(j,i+1,n){
      if(a[i]+a[j]<=w) s.insert(a[i]+a[j]);
    }
  }
  rep(i,n-2){
    reps(j,i+1,n-1){
      reps(k,j+1,n){
        if(a[i]+a[j]+a[k]<=w) s.insert(a[i]+a[j]+a[k]);
      }
    }
  }
  cout<<(int)s.size()<<endl;

}
