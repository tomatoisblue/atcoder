#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
using namespace std;

double length(int x, int y, int x_2, int y_2){
  return (double)pow(pow(x-x_2,2)+pow(y-y_2,2),0.5);
}

int main() {
  int n,k; cin>>n>>k;
  vi a(k);
  rep(i,k) cin>>a[i];
  vi x(n),y(n);
  double ans=0;
  rep(i,n) cin>>x[i]>>y[i];
  rep(i,n){
    double minv=10e9;
    rep(j,k){
      minv=min(minv, length(x[i],y[i],x[a[j]-1],y[a[j]-1]));
    }
    ans=max(ans,minv);
  }
  cout<<fixed;
  cout<<setprecision(9)<<ans<<endl;

}
