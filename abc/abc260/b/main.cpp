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
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vi a(n);
  vi b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  vi math = a;
  vi english = b;
  vi both(n);

  rep(i,n){
    both[i] = a[i] + b[i];
  }

  sort(all(math));
  sort(all(english));
  sort(all(both));

  vb passed(n, false);


  rep(i,x){
    if(x == 0) continue;
    rep(j,n){
      if(a[j] == math[n-i-1] && passed[j] == false){
        passed[j] = true;
        break;
      }
    }
  }


  int cnt = 0;
  bool flag_english = false;
  rep(i,n){
    if(y == 0) continue;
    rep(j,n){
      if(b[j] == english[n-i-1] && passed[j] == false){
        passed[j] = true;
        cnt++;
        if(cnt>=y) flag_english = true;
      }
      if(flag_english) break;
    }
    if(flag_english) break;
  }

  int cnt_2 = 0;
  bool flag_both = false;

  rep(i,n){
    if(z == 0) continue;
    rep(j,n){
      if(a[j] + b[j] == both[n-i-1] && passed[j] == false){
        passed[j] = true;
        cnt_2++;
        if(cnt_2>=z) flag_both = true;
      }
      if(flag_both) break;
    }
    if(flag_both) break;
  }

  rep(i,n){
    if(passed[i]) cout << i+1 << endl;
  }
}
