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
  int n,k; cin>>n>>k;
  vi a(n);
  vvi b(k);
  rep(i,n){
    cin>>a[i];
    b[i%k].push_back(a[i]);
  }

  rep(i,k) sort(b[i].rbegin(),b[i].rend());

  sort(all(a));
  vi na;
  rep(i,n){
    na.push_back(b[i%k].back());
    b[i%k].pop_back();
  }
  if(a==na)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
