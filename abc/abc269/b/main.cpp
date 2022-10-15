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
  vi ab(10);
  vi cd(10);
  rep(i,10){
    string s;
    cin>>s;
    rep(j,10){
      char c=s[j];
      if(c=='#'){
        ab[i]=1;
        cd[j]=1;
      }
    }
  }

  int min_ab=100;
  int max_ab=-1;
  int min_cd=100;
  int max_cd=-1;
  rep(i,10){
    if(ab[i]==1){
      min_ab=min(min_ab,i);
      max_ab=max(max_ab,i);
    }
    if(cd[i]==1){
      min_cd=min(min_cd,i);
      max_cd=max(max_cd,i);
    }
  }
  cout<<min_ab+1<<" "<<max_ab+1<<endl;
  cout<<min_cd+1<<" "<<max_cd+1<<endl;
}
