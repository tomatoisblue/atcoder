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
  int n,m; cin>>n>>m;
  string s[n];
  string t[m];
  vi index;
  rep(i,n) index.push_back(i);
  int str_cnt=0;
  rep(i,n){
    cin>>s[i];
    str_cnt+=(int)s[i].size();
  }
  str_cnt+=n-1;
  int underbar =16-str_cnt;
  rep(i,m) cin>>t[i];

  rep(i,n) cout<<s[i]<<' ';
  cout<<"\nunderbar="<<underbar<<endl;

  string delimiter="_";
  string token;
  rep(i,m){
    int pos=0;
    string str=t[i];
    while((pos=str.find(delimiter)) != string::npos){
      token=str.substr(0,pos);
      rep(i,n){
        if(s[i]==token){
          break;
        }
        cout<<"Yes"<<endl;
      }
    }
  }

  cout<<"-1"<<endl;


}
