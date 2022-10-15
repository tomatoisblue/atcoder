#include <bits/stdc++.h>
#include <iostream>
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
const long long INFLL = 10e10;

int main() {
  int n,x;
  cin>>n>>x;
  ll sum=0;
  ll ans=numeric_limits<ll>::max();
  int a,b;
  rep(i,n){
    if(i+1>x)break;
    cin>>a>>b;
    sum+=(ll)a+b;
    ans=min(ans,sum+(ll)b*(x-i-1));
  }
  cout<<ans<<endl;
}
