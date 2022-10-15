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
  map<string,int> mp;
  int maxv=0;
  vi t(n);
  rep(i,n){
    string s;
    cin>>s>>t[i];
    if(mp.find(s)==mp.end()){
      mp[s]=i;
    }
  }
  int ans;
  for(auto it=mp.begin(); it!=mp.end(); it++){
    if(maxv<t[it->second]){
      maxv=t[it->second];
      ans=it->second;
    }
  }
  cout<<ans+1<<endl;
}