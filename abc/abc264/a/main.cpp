#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using vi = vector<int>;
using vc = vector<char>;
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)


int main() {
  string s = "atcoder";
  int l, r;
  cin >> l >> r;
  reps(i,l-1,r){
    cout << s.at(i);
  }

}