#include <bits/stdc++.h>
#include <iostream>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
using namespace std;

int main() {
  multiset<int> s={1,2,2,2,3};
  s.erase(2);
  const multiset<int>::const_iterator itend=s.end();
  for(auto it=s.begin(); it!=itend; it++){
    cout<<*it<<" ";
  }



}