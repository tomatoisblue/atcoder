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
#define ll long long
using namespace std;

int main() {
  ll x,a,d,n; cin>>x>>a>>d>>n;
  if(d==0){
    cout<<abs(a-x)<<endl;
    return 0;
  }else if(d<0){
    if(x>a){
      cout<<x-a<<endl;
      return 0;
    }else if(a+d*(n-1)>x){
      cout<<a+d*(n-1)-x<<endl;
      return 0;
    }
  }else{
    if(x<a){
      cout<<a-x<<endl;
      return 0;
    }else if(a+d*(n-1)<x){
      cout<<x-(a+d*(n-1))<<endl;
      return 0;
    }
  }

  int m=abs(x-a)%d;

  if(m==0) cout<<0<<endl;
  else if(m<=abs(d)/2) cout<<m<<endl;
  else cout<<abs(d)-m<<endl;
}
