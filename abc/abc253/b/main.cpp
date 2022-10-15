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
  int h,w; cin>>h>>w;
  vvc graph(h,vector<char>(w));
  string s;
  vvi elems(2,vector<int>(2));
  int cnt=0;
  rep(i,h){
    cin>>s;
    rep(j,w){
      graph[i][j]=s[j];
      if(s[j]=='o'){
        elems[cnt][0]=i;
        elems[cnt][1]=j;
        cnt++;
      }
    }
  }

  int length=abs(elems[0][0]-elems[1][0])+abs(elems[0][1]-elems[1][1]);
  cout<<length<<endl;

}
