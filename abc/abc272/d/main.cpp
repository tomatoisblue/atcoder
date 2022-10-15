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

void bfs(queue<pair<int,int>> &q, pair<int,int> pre_pos,vvi &Ans, vector<vector<vector<pair<int,int>>>> &Graph, vector<vector<bool>> &Ch){
  int n=(int)Ans.size();
  if(q.empty()){
    return;
  }
  pair<int,int> pos=q.front();
  q.pop();
  int x=pos.first;
  int y=pos.second;
  cout<<"\n";
  cout<<"x="<<x<<" y="<<y<<endl;
  cout<<"pre_x="<<pre_pos.first<<" pre_y="<<pre_pos.second<<endl;

  Ch[y][x]=true;
  Ans[y][x]=Ans[pre_pos.second][pre_pos.first]+1;
  pre_pos=make_pair(x,y);
  cout<<"Ans[y][x]="<<Ans[y][x]<<endl;
  cout<<"pre_pos="<<pre_pos.first<<","<<pre_pos.second<<endl;

  rep(i,(int)Graph[y][x].size()){
    pair<int,int> npos=Graph[y][x][i];
    int next_x=npos.first;
    int next_y=npos.second;
    if(next_x>=0 && next_x<n && next_y>=0 &&next_y<n && Ch[next_y][next_x]==false){
      q.push({next_x,next_y});
    }
  }
  bfs(q,pre_pos,Ans,Graph,Ch);
}

int main() {
  int n,m; cin>>n>>m;
  vector<vector<vector<pair<int,int>>>> Graph(n,vector<vector<pair<int,int>>>(n));
  vvi Ans(n,vector<int>(n,-1));
  pair<int,int> p;
  rep(i,400){
    rep(j,401){
      if(i*i+j*j==m){
        p=make_pair(i,j);
      }
    }
  }
  int dx,dy,next_x,next_y;
  rep(x,n){
    rep(y,n){
      rep(i,2){
        if(i==0){
          dx=p.first;
          dy=p.second;
        }else{
          dx=p.second;
          dy=p.first;
        }
        rep(j,2){
          if(j==0){
            dx=abs(dx);
          }else{
            dx=(-1)*abs(dx);
          }
          rep(k,2){
            if(k==0){
              dy=abs(dy);
            }else{
              dy=(-1)*abs(dy);
            }
            next_x=x+dx;
            next_y=y+dy;
            if(next_x>=0 && next_x<n && next_y>=0 && next_y<n){
              Graph[y][x].push_back({next_x,next_y});
            }
          }
        }
      }
    }
  }
  vvb Ch(n,vector<bool>(n));
  pair<int,int> pos=make_pair(0,0);
  pair<int,int> pre_pos=make_pair(0,0);
  queue<pair<int,int>> q;
  q.push({0,0});
  bfs(q,pre_pos,Ans,Graph,Ch);

  rep(i,n){
    rep(j,n){
      cout<<Ans[i][j];
      if(j!=n-1){
        cout<<" ";
      }
    }
    cout<<"\n";
  }
}