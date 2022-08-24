#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define out(n) cout<<n<<endl
#define ll long long
using namespace std;

int main() {
  int n;
  cin>>n;
  map<string,int> mp;
  vs ans(n);
  rep(i,n){
    string s;
    cin>>s;
    if(mp.count(s)){
      ans[i]=s+"("+to_string(mp.at(s))+")";
      mp[s]++;
    }else{
      ans[i]=s;
      mp[s]=1;
    }
  }

  rep(i,n)cout<<ans[i]<<endl;

}