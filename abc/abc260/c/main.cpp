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
  int n, x, y;
  cin >> n >> x >> y;

  vll red(15);
  vll blue(15);

  red[n] = 1;

  for(int i = n; i>=2; i--){
    ll r = red[i];
    if(r>0){
      red[i-1] += r;
      blue[i] += x * r;
    }
    ll b = blue[i];
    if(b>0){
      red[i-1] += b;
      blue[i-1] += y * b;
    }
  }

  cout << blue[1] <<endl;
}
