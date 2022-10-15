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
  vvi vec(m);
  int k,x;
  rep(i,m){
    cin>>k;
    rep(j,k){
      cin>>x;
      vec[i].push_back(x);
    }
  }

  rep(i,n-1){
    reps(j,i+1,n){
      bool flag=false;
      rep(k,m){
        bool flag_1=false;
        bool flag_2=false;
        rep(l,(int)vec[k].size()){
          if(vec[k][l]==i+1) flag_1=true;
          if(vec[k][l]==j+1) flag_2=true;
        }
        if(flag_1&&flag_2){
          flag=true;
          break;
        }
      }
      if(!flag){
        cout<<"No"<<endl;
        return 0;
      }
    }
  }
  cout<<"Yes"<<endl;
}
