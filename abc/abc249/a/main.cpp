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

double solve(int a,int b,int c, int x){
  if(x%(a+c)==0){
    return (double)a*b*(x/(a+c));
  }else if(x%(a+c)>=a){
    int n=x/(a+c);
    return (double)a*b*(n+1);
  }else{
    int n=x/(a+c);
    return (double)a*b*n+b*(x%(a+c));
  }
}

int main() {
  int a,b,c,d,e,f,x; cin>>a>>b>>c>>d>>e>>f>>x;
  double la=solve(a,b,c,x);
  double lb=solve(d,e,f,x);
  if(la==lb){
    cout<<"Draw"<<endl;
  }else if(la>lb){
    cout<<"Takahashi"<<endl;
  }else
  {
    cout<<"Aoki"<<endl;
  }
}
