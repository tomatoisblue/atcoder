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
  int n; cin>>n;
  vi vec(n);
  rep(i,n) cin>>vec[i];
  sort(all(vec), greater<int>());
  int cnt=0;
  int pre=vec[0];
  int printed=0;
  rep(i,n){
    if(i==0&&i==n-1){
      cout<<1<<endl;
      return 0;
    }
    if(vec[i]==pre){
      cnt++;
      if(i==n-1){
        cout<<cnt<<endl;
        printed++;
      }
    }else{
      cout<<cnt<<endl;
      printed++;
      cnt=1;
      if(i==n-1){
        cout<<cnt<<endl;
        printed++;
      }
      pre=vec[i];
    }
  }

  rep(i,n-printed){
    cout<<0<<endl;
  }
}