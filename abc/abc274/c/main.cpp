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
  vi v;
  rep(i,n) {
    int x;
    cin>>x;
    v.push_back(2*x);
    v.push_back(2*x+1);
  }
  cout<<0<<endl;
  rep(i,(int)v.size()){
    int x = 1;
    while(true){
      if(pow(2,x)<=v[i] && pow(2,x+1)>v[i]){
        cout<<x<<endl;
        break;
      }
      x++;
    }
  }

}
