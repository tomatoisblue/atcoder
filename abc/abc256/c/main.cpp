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

bool check(vi &h, vi &w, vvi &a){
  int sum_row=0;
  int sum_column=0;
  rep(i,3){
    sum_row=0;
    sum_column=0;
    rep(j,3){
      sum_row+=a[i][j];
      sum_column+=a[j][i];
    }
    if(sum_row!=h[i] || sum_column!=w[i]){
      return false;
    }
  }
  return true;
}

int main() {
  vi h(3),w(3);
  vvi a(3,vector<int>(3));
  rep(i,3)cin>>h[i];
  rep(i,3)cin>>w[i];
  vvi minv(3,vector<int>(3));
  rep(i,2){
    rep(j,2){
      minv[i][j]=min(h[i],w[i])-2;
    }
  }
  rep(i,2){
    rep(j,2){
      cout<<minv[i][j]<<' ';
    }
    cout<<endl;
  }
  ll ans=0;
  reps(i,1,minv[0][0]+1){
    reps(j,1,minv[0][1]+1){
      reps(k,1,minv[1][0]+1){
        reps(l,1,minv[1][1]){
          a[0][0]=i;
          a[0][1]=j;
          a[0][2]=h[0]-i-j;
          a[1][0]=k;
          a[1][1]=l;
          a[1][2]=h[1]-k-l;
          a[2][0]=w[0]-i-k;
          a[2][1]=w[1]-j-l;
          a[2][2]=h[2]-a[2][0]-a[2][1];
          rep(y,3){
            rep(x,3){
              cout<<a[y][x]<<' ';
            }
            cout<<endl;
          }
          if(check(h,w,a)){
            ans++;
          }
        }
      }
    }
  }
  cout<<ans<<endl;

}
