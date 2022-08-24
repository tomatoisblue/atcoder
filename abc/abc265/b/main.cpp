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
  long long n,m,t;
  cin>>n>>m>>t;
  vi A(n);
  reps(i,1,n){
    cin>>A.at(i);
  }
  vi X(n);
  rep(i,m){
    int index,value;
    cin>>index>>value;
    X.at(index)=value;
  }

  reps(i,1,n){
    if(A.at(i)>=t){
      cout<<"No"<<endl;
      return 0;
    }

    t-=A.at(i);
    if(i==n-1)break;
    t+=X.at(i+1);
  }

  cout<<"Yes"<<endl;
}