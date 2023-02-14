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
  char first[] = {'H', 'D', 'C', 'S'};
  char second[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

  vector<string> vec;

  rep(i,n){
    string str; cin>>str;
    bool f=false;
    bool s=false;
    bool t=true;
    rep(j,4){
      if(first[j]==str[0]){
        f=true;
      }
    }
    rep(j, 13){
      if(second[j]==str[1]){
        s=true;
      }
    }
    if(i==0){
      vec.push_back(str);
    }else{
      rep(j,(int)vec.size()){
        if(vec[j]==str){
          t=false;
        }
      }
      if(t)vec.push_back(str);
    }

    if(!(f&&s&&t)){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
}
