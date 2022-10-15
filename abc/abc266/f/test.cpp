#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vv(t,n,h,w) vector<vector<t>> n(h,vector<vector<t>>(w)
#define out(n) cout<<n<<endl
using namespace std;

int main() {
  vi v = {1,2,4,2,3,5,2,2};
  for(auto a: v){
    cout<<a<<" ";
  }
  cout<<"pre_size="<<v.size()<<endl;
  v.erase(remove(v.begin(), v.end(), 2), v.end());
  cout<<"size="<<v.size()<<endl;
  for(auto a: v){
    cout<<a<<" ";
  }
}