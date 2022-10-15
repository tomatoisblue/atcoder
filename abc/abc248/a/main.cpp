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
  set<int> st;
  rep(i,(int)s.size()){
    st.insert(s[i]-'0');
  }

  rep(i,10){
    if(st.find(i)==st.end()){
      cout<<i<<endl;
      return 0;
    }
  }
}
