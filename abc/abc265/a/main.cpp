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
  int x,y,n;
  cin>>x>>y>>n;

  if(3*x<=y){
    cout<<x*n<<endl;
    return 0;
  }

  int a=n%3;
  int b=n/3;

  cout<<x*a+y*b<<endl;

}