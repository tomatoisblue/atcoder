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
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  int t,x;
  int cnt=0;
  int start=0;
  int pos=0;
  rep(i,q){
    cin>>t>>x;
    if(t==1){
      cnt+=x;
    }else{
      cnt %= n;
      if(cnt==0){
        start = 0;
      }else{
        start = n-cnt;
      }
      pos = (start + (x-1)) % n;
      cout<<s[pos]<<endl;
    }
  }
}
