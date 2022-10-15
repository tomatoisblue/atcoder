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

set<int> solve(vi vec){
  set<int> s;
  rep(i,2){
    int n = vec[i];
    if(n==7){
      s.insert(1);
      s.insert(2);
      s.insert(4);
    }else if(n==6){
      s.insert(2);
      s.insert(4);
    }else if(n==5){
      s.insert(1);
      s.insert(4);
    }else if(n==4){
      s.insert(4);
    }else if(n==3){
      s.insert(1);
      s.insert(2);
    }else if(n==2){
      s.insert(2);
    }else if(n==1){
      s.insert(1);
    }else{
      continue;
    }
  }
  return s;
}

int main() {
  int a,b; cin>>a>>b;
  vi vec{a,b};
  set<int> sunuke = solve(vec);
  int ans=0;
  for(auto it=sunuke.begin(); it!=sunuke.end(); ++it){
    ans += *it;
  }
  cout<<ans<<endl;


}
