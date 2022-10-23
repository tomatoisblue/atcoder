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

void solve(char c, int l, vi &Ans, vvi &Graph, int h, int w){
  int dx=0;
  int dy=0;
  switch (c){
  case 'L':
    dx--;
    break;
  case 'R':
    dx++;
    break;
  case 'U':
    dy--;
    break;
  case 'D':
    dy++;
    break;
  default:
    break;
  }
  while(l--){
    int nx=Ans[1]+dx;
    int ny=Ans[0]+dy;
    if(nx>=0 && nx<=w-1 && ny>=0 && ny<=h-1){
      if(Graph[ny][nx]==0){
        Ans[0]=Ans[0]+dy;
        Ans[1]=Ans[1]+dx;
      }else{
        break;
      }
    }else{
      break;
    }
  }
}


int main() {
  int h,w,ys,xs; cin>>h>>w>>ys>>xs;
  vvi Graph(h, vector<int>(w,0));
  int n; cin>>n;
  while(n--){
    int y,x;
    cin>>y>>x;
    Graph[y-1][x-1]=1;
  }

  vi Ans(2);
  Ans[0]=ys-1;
  Ans[1]=xs-1;
  int q; cin>>q;
  while(q--){
    char c;
    int l;
    cin>>c>>l;
    solve(c,l,Ans,Graph,h,w);
    cout<<Ans[0]+1<<' '<<Ans[1]+1<<endl;
  }

}
