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
  vector<ll> v(6);
  const ll c=998244353;
  rep(i,6){
    ll n;
    cin>>n;
    v[i]=n%c;
  }
  ll a=v[0]*v[1]*v[2]-v[3]*v[4]*v[5];
  if(a<0){
    cout<<(a+c)%c<<endl;
  }else{
    cout<<a%c<<endl;
  }
}
