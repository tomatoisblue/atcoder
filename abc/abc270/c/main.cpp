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

void dfs(int s, int g, vi &route,vvi &vec, vb ch){
  route.push_back(s);
  ch[s]=true;
  if(s==g){
    return;
  }

  bool flag=false;
  rep(i,(int)vec[s].size()){
    int next=vec[s][i];
    if(ch[next]==false){
      flag=true;
    }
  }
  if(flag==false){
    route.pop_back();
  }
  rep(i,(int)vec[s].size()){
    int next=vec[s][i];
    if(ch[next]==false){
      dfs(next,g,route,vec,ch);
    }
  }
}

int main() {
  int n,x,y; cin>>n>>x>>y;
  vvi vec(n+1);
  rep(i,n-1){
    int u,v;
    cin>>u>>v;
    vec[u].push_back(v);
    vec[v].push_back(u);
  }

  vi route;
  vb ch(n+1);
  dfs(x,y,route,vec,ch);
  rep(i,(int)route.size()){
    cout<<route[i];
    if(i!=(int)route.size()-1){
      cout<<" ";
    }else{
      cout<<"\n";
    }
  }


}
