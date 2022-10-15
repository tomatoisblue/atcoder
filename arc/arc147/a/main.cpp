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
  int n;
  cin >> n;
  vll a(n);
  rep(i,n){
    cin >> a[i];
  }
  sort(all(a));

  int cnt = 0;
  vll sub;
  ll max_v = 0;
  ll min_v = 0;
  while(a.size() + sub.size() > 1){
    bool min_from_a = false;
    bool min_from_sub = false;
    bool max_from_a = false;
    bool max_from_sub = false;

    if(a.size() > 0){
      max_v = a.back();
      min_v = a.front();
      max_from_a = true;
      min_from_a = true;
    }else{
      max_v = sub.back();
      min_v = sub.front();
      max_from_sub = true;
      min_from_sub = true;
    }

    if(sub.size()>0){
      if(max_v < sub.back() && max_from_a){
        max_from_sub = true;
        max_from_a = false;
        max_v = sub.back();
      }
      if(min_v > sub.front() && min_from_a){
        min_from_sub = true;
        min_from_a = false;
        min_v = sub.front();
      }
    }else{
      if(max_v < a.back() && max_from_sub){
        max_from_a = true;
        max_from_sub = false;
        max_v = a.back();
      }
      if(min_v > a.front() && min_from_sub){
        min_from_a = true;

      }
    }

    ll num = max_v % min_v;
    if(num == 0){
      if(max_from_sub){
        sub.erase(sub.end() - 1);
      }else{
      a.erase(a.end() - 1);
      }
    }else{
      if(max_from_sub){
        sub.erase(sub.end() - 1);
      }else{
        a.erase(a.end() - 1);
      }
      sub.push_back(num);
      sort(all(sub));
      cout<<"sub sorted"<<endl;
    }
    cnt++;
    cout<<"cnt="<<cnt<<endl;
  }
  cout << cnt << endl;
}