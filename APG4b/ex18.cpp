#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(m),b(m);
  for(int i=0; i<m; i++){
    cin >> a.at(i) >> b.at(i);
  }

  vector<vector<string>> v(n, vector<string>(n, "-"));
  for(int i=0; i<m; i++){
    int x=b.at(i)-1, y=a.at(i)-1;
    v.at(y).at(x) = "o";
    v.at(x).at(y) = "x";
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << v.at(i).at(j);
      if(j==n-1) continue;
      cout << " ";
    }
    cout << "" << endl;
  }
}