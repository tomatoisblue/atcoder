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
  string s, t;
  cin >> s;
  cin >> t;
 
  vector<pair<char,int>> sv, tv;
  int si=0;
  string pre = "";
  while(true){
    int cnt = 1;
    if(si == (int)s.size()-1){
      sv.push_back( pair<char,int>( s[si], cnt));
      break;
    }
    reps(i,si+1,(int)s.size()){
      if(s[i] == s[si]){
        cnt++;
        if(i == (int)s.size()-1){
          sv.push_back( pair<char,int>( s[si], cnt));
          si = (int)s.size() - 1;
          break;
        }
      }else{
        sv.push_back( pair<char,int>( s[si], cnt));
        si += cnt;
        break;
      }
    }
    if(si>=(int)s.size()-1) break;
  }

  int ti=0;
  pre = "";
  while(true){
    int cnt = 1;
    if(ti == (int)t.size()-1){
      tv.push_back( pair<char,int>( t[ti], cnt));
      break;
    }
    reps(i,ti+1,(int)t.size()){
      if(t[i] == t[ti]){
        cnt++;
        if(i == (int)t.size()-1){
          tv.push_back( pair<char,int>( t[ti], cnt));
          ti = (int)t.size() - 1;
          break;
        }
      }else{
        tv.push_back( pair<char,int>( t[ti], cnt));
        ti += cnt;
        break;
      }
    }
    if(ti>=(int)t.size()-1) break;
  }

  if((int)sv.size() != (int)tv.size()){
    cout << "No" << endl;
    return 0;
  }

  rep(i,(int)sv.size()){
    if(sv[i].first != tv[i].first){
      cout << "No" << endl;
      return 0;
    }
    if((sv[i].second == 1 && tv[i].second != 1) || (sv[i].second != 1 && tv[i].second == 1)){
      cout << "No" <<endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
