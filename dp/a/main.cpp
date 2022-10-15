#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vvll vector<vector<long long>>
#define ll long long
using namespace std;

int main() {
  int N;
  cin >> N;
  vi H(N+1);
  reps(i,1,N+1){
    cin >> H[i];
  }
  vi DP(N+1);
  DP[1] = 0;
  DP[2] = abs(H[2] - H[1]);

  reps(i,3,N+1){
    DP[i] = min(
      DP[i-2] + abs(H[i] - H[i-2]),
      DP[i-1] + abs(H[i] - H[i-1])
    );
  }
  cout << DP[N] << endl;
}
