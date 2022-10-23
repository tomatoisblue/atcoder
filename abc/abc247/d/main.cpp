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

void solve(int c, int &cnt, unsigned ll &sum, vvi &v){
  vi vv=v[cnt];
  int n=vv[1]-c;
  if(n>0){
    sum+=(unsigned ll)vv[0]*c;
    v[cnt][1]-=c;
    return;
  }else if(n==0){
    sum+=(unsigned ll)vv[0]*c;
    if(cnt!=(int)v.size()-1){
      cnt++;
    }
    return;
  }else{
    sum+=(unsigned ll)vv[0]*vv[1];
    c-=vv[1];
    cnt++;
    solve(c,cnt,sum,v);
  }
}

int main() {
  int q; cin>>q;
  int n,x,c;
  unsigned ll sum;
  vvi v;
  int cnt=0;
  while(q--){
    cin>>n;
    if(n==1){
      cin>>x>>c;
      vi vec;
      vec.push_back(x);
      vec.push_back(c);
      v.push_back(vec);
    }else{
      cin>>c;
      sum=0;
      solve(c,cnt,sum,v);
      cout<<sum<<endl;
    }
  }
}
