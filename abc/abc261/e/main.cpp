#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define out(n) cout<<n<<endl
using namespace std;

int func(int &num, int a, int b){
  if(a==1){
    num = num & b;
  }else if(a==2){
    num = num | b;
  }else{
    num = num ^ b;
  }
  return num;
}


int main() {
  int n,c;
  cin>>n>>c;
  vvi V(n,vector<int>(2));
  int pre=c;
  rep(i,n){
    cout<<"i="<<i<<endl;
    cout<<"pre="<<pre<<endl;
    int a,b;
    cin>>a>>b;
    int x=func(pre,a,b);
    cout<<x<<endl;
    pre=x;
  }
}