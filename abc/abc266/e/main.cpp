#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
using namespace std;

void solve(int n, int cnt, vi &S, vector<double> &E){
  // cout<<"######################"<<endl;
  // cout<<"cnt="<<cnt<<endl;
  // cout<<"preE="<<E[cnt-1]<<endl;
  if(cnt==1){
    E[cnt]=3.5;
    solve(n,cnt+1,S,E);
  }else if(cnt>n){
    return;
  }else{
    int border = (int)E[cnt-1];
    reps(i,1,7){
      if(i<=border){
        E[cnt] += E[cnt-1] / 6.0;
      }else{
        E[cnt] += i / 6.0;
      }
    }
    solve(n,cnt+1,S,E);
  }
}


int main() {
  int n;
  cin >> n;
  vi S = {0, 1, 3, 6, 10, 16, 21};
  vector<double> E(n+1);

  solve(n,1,S,E);
  cout<<E[n]<<endl;

}
