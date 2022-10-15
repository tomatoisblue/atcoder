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
  int a, b, d;
  cin >> a >> b >> d;
  double radian = atan2(b,a);
  double degree = radian * 180.0 / M_PI;
  double length = pow(a*a + b*b, 0.5);
  double after_degree = (degree + d)*M_PI / 180.0;
  double ans_x = cos(after_degree) * length;
  double ans_y = sin(after_degree) * length;

  cout << fixed;
  cout << setprecision(10) << ans_x << " ";
  cout << setprecision(10) << ans_y <<endl;



}
