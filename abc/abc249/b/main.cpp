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
  string s; cin>>s;
  vi v(130);
  bool uppercase=false;
  bool lowercase=false;
  rep(i,(int)s.size()){
    char c=s[i];
    int n=(int)c;
    if(n<=90){
      uppercase=true;
    }else{
      lowercase=true;
    }
    v[n]++;
  }

  if(uppercase==false || lowercase==false){
    cout<<"No"<<endl;
    return 0;
  }
  for(auto a:v){
    if(a>1){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;

}
