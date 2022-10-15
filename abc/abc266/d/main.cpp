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

using namespace std;

int main() {
  int N;
  cin>>N;
  int M = N+1;
  vi T(M);
  vi X(M);
  vector<long long> A(M);
  vector<vector<long long>> table(M, vector<long long>(5, 0));

  reps(i,1,M){
    cin>>T[i]>>X[i]>>A[i];
  }

  long long ans = 0;

  reps(i,1,M){
    int dt = T[i]-T[i-1];
    // cout<<"i="<<i<<" dt="<<dt<<endl;
    rep(j,5){
      if(j>T[i])continue;
      // cout<<"###j="<<j<<endl;
      long long pre_max = 0;
      reps(k,j-dt,j+dt+1){
        // cout<<"#####k="<<k<<endl;
        if(k < 0 || k > 4) continue;
        // cout<<table[i-1][k]<<" ";
        pre_max = table[i-1][k] > pre_max ? table[i-1][k] : pre_max;
      }
      // cout<<"pre_max="<<pre_max<<endl;
      if(X[i]==j){
        // cout<<"x[i]="<<X[i]<<endl;
        table[i][j] = pre_max + A[i];
      }else{
        // cout<<"no xi"<<endl;
        table[i][j] = pre_max;
      }

      ans = table[i][j] > ans ? table[i][j] : ans;
      // cout<<"ans="<<ans<<endl;
    }
    rep(i,M){
      rep(j,5){
        // cout<<table[i][j]<<" ";
      }
      // cout<<endl;
    }
  }

  rep(i,M){
    rep(j,5){
      // cout<<table[i][j]<<" ";
    }
    // cout<<endl;
  }

  cout<<ans<<endl;
}
