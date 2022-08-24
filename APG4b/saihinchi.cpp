#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using vi = vector<int>;
using vc = vector<char>;

int main() {
  int n,a;
  cin>>n;
  map<int, int> m;
  for(int i=0; i<n; i++){
    cin>>a;
    if(m.count(a)){
      m[a]++;
    }else{
      m[a] = 1;
    }
  }

  int max_count =0;
  int max_value =0;
  for(auto p: m){
    if(max_count<p.second){
      max_count = p.second;
      max_value = p.first;
    }
  }

  cout<<max_value<<" "<<max_count<<endl;
}