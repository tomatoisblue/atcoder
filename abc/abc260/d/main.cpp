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
  int n, k;
  vi p(n);
  rep(i,n) cin >> p[i];

  vi ans(n,-1);
  map<int,int> mp;
  vvi nums(n);

  int card;
  rep(i,n){
    card = p[i];
    int minimum = INF;
    auto it = mp.upper_bound(card-1);
    if(it == mp.end()){
      mp[card] = 1;
    }else{
      mp[card] = it->second + 1;
      nums[card].push_back(it->first);
      if(mp[card] >= k){
        int turn = i+1;
        ans[card] = i+1;
        for(auto a;)
      }
    }

  }
}