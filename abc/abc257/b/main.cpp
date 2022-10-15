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
  int n,k,q,x;
  cin>>n>>k>>q;
  vi a(k);
  rep(i,k)cin>>a[i];
  rep(i,q){
    cin>>x;
    if(a[x-1]==n)continue;
    if(x!=k && a[x-1]+1==a[x])continue;
    a[x-1]++;
  }
  rep(i,k){
    cout<<a[i];
    if(i<k-1)cout<<" ";
  }


}
