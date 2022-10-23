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

void solve(pair<int,int>p, pair<int,int> pre, pair<int,int>g, int cnt, bool &flag, vi &A){
  int max=(int)A.size()-1;
  if(p.first==g.first && p.second==g.second && cnt==max){
    flag=true;
    return;
  }else if(cnt>=max){
    return;
  }
  vector<pair<int,int>> next;
  if(p.first==pre.first){
    next.push_back(make_pair(p.first+A[cnt+1],p.second));
    next.push_back(make_pair(p.first-A[cnt+1],p.second));
  }else{
    next.push_back(make_pair(p.first,p.second+A[cnt+1]));
    next.push_back(make_pair(p.first,p.second-A[cnt+1]));
  }
  rep(i,2){
    solve(next[i],p,g,cnt+1,flag,A);
  }
}


int main() {
  int n,x,y; cin>>n>>x>>y;
  vi A(n);
  rep(i,n) cin>>A[i];
  pair<int,int> p1 = make_pair(0,0);
  pair<int,int> p2 = make_pair(A[0],0);
  pair<int,int> g = make_pair(x,y);
  bool flag;
  solve(p2,p1,g,0,flag,A);
  if(flag)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

}
