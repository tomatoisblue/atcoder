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
  int x,y,z; cin>>x>>y>>z;
  if(x<0){
    x = -x;
    y = -y;
    z = -z;
  }

  if(y<0 || x<y){
    cout<<x<<endl;
    return 0;
  }else if(y<x){
    if(y<z){
      cout<<-1<<endl;
      return 0;
    }else if(z>0 && z<y){
      cout<<x<<endl;
      return 0;
    }else{
      cout<<2*abs(z)+x<<endl;
      return 0;
    }
  }
}
