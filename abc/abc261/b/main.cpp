#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<vector<char>> V(n, vector<char>(n));
  rep(i,n){
    string s;
    cin>>s;
    rep(j,n) V[i][j]=s[j];
  }

  bool flag=false;
  rep(i,n){
    rep(j,n){
      if((V[i][j]=='W' && V[j][i]!='L') || (V[i][j]=='L' && V[j][i]!='W') || (V[i][j]=='D' && V[j][i]!='D')){
        flag=true;
        break;
      }
    if(flag) break;
    }
  }
  if(flag){
    cout<<"incorrect"<<endl;
  }else{
    cout<<"correct"<<endl;
  }



}