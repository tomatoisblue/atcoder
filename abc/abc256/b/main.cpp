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
  vi a(4);
  vi b(4);
  int ans=0,next=0,distance=0;
  rep(i,n){
    cin>>distance;
    a[0]=1;
    b=a;
    rep(j,4){
      if(b[j]>0){
        next=j+distance;
        if(next>3){
          ans++;
          a[j]--;
        }else{
          a[next]++;
          a[j]--;
        }
      }
    }
  }
  cout<<ans<<endl;



}
