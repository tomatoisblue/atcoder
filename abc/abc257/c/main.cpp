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
  int n; cin>>n;
  string s; cin>>s;
  vi w(n);
  vi adult, child;
  rep(i,n){
    cin>>w[i];
    if(s[i]=='1'){
      adult.push_back(w[i]);
    }else{
      child.push_back(w[i]);
    }
  }
  if((int)adult.size()==0 || (int)child.size()==0){
    cout<<n<<endl;
    return 0;
  }

  sort(all(adult));
  sort(all(child), greater<int>());


  int cnt=0;
  int min_cnt=INF;
  rep(i,(int)adult.size()){
    cnt=i;
    if(i>=min_cnt)break;
    rep(j,(int)child.size()){
      if(adult[i]>child[j])break;
      cnt++;
    }
    if(cnt==i){
      cout<<n-i<<endl;
      return 0;
    }
    min_cnt=min(min_cnt,cnt);
  }
  cout<<n-min_cnt<<endl;
}
