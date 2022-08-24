#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using Graph = vector<vector<int>>;
using vi = vector<int>;
using vc = vector<char>;

int main() {
  int r, c;
  cin>>r>>c;

  if(r>8) r=16-r;
  if(c>8) c=16-c;
  if(min(r,c)%2==0){
    cout << "white";
  }else{
    cout << "black";
  }

}