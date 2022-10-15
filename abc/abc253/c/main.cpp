#include <bits/stdc++.h>
#include <iostream>
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
  int q; cin>>q;
  multiset<int> s;
  int n,x,c,minv;
  while(q--){
    cin>>n;
    if(n==1){
      cin>>x;
      s.insert(x);
    }else if(n==2){
      cin>>x>>c;

      while(c-- && s.find(x)!=s.end()){
        s.erase(s.find(x));
      }
    }else{
      cout<<*s.rbegin() - *s.begin()<<endl;
    }
  }
}
