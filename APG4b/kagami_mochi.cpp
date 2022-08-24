#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a; vector<int>v;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a; v.push_back(a);
  }
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  cout << v.size();
}