#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvb vector<vector<bool>>
using namespace std;

int main() {
  int h,w;
  cin>>h>>w;
  vvc v(h,vector<char>(w));
  vvb ch(h,vector<bool>(w));

  rep(i,h){
    string s;
    cin>>s;
    rep(j,w){
      v.at(i).at(j)=s.at(j);
    }
  }

  int x=0;int y=0;

  while(true){
    if(ch.at(y).at(x)==true){
      cout<<-1<<endl;
      return 0;
    }

    ch.at(y).at(x)=true;

    if(v.at(y).at(x)=='U'&&y!=0){
      y--;
    }else if(v.at(y).at(x)=='D'&&y!=h-1){
      y++;
    }else if(v.at(y).at(x)=='L'&&x!=0){
      x--;
    }else if(v.at(y).at(x)=='R'&&x!=w-1){
      x++;
    }else{
      break;
    }
  }
  cout<<y+1<<" "<<x+1<<endl;
}
