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
  string s;
  cin >> s;

  vi column(7);
  int cnt = 0;
  for(auto c: s){
    if(cnt == 0 && c == '1'){
      cout << "No" << endl;
      return 0;
    }
    if(c == '1'){
      if(cnt == 0 || cnt == 4) column[3] = 1;
      if(cnt == 1 || cnt == 7) column[2] = 1;
      if(cnt == 2 || cnt == 8) column[4] = 1;
      if(cnt == 3) column[1] = 1;
      if(cnt == 6) column[0] = 1;
      if(cnt == 5) column[5] = 1;
      if(cnt == 9) column[6] = 1;
    }
    cnt++;
  }

  rep(i,5){
    if(column[i] == 1){
      reps(j,i+1,6){
        if(column[j] == 0){
          reps(k,j+1,7){
            if(column[k] == 1){
              cout << "Yes" << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout << "No" << endl;
}