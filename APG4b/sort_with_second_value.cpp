#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using vi = vector<int>;
using vc = vector<char>;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  vector<vector<int>> b(n, vector<int>(2));
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i][0];
    b[i][1]=i;
  }

  sort(b.begin(), b.end());

  for(auto &vec: b){
    int index=vec[1];
    int value=vec[0];
    cout << a[index] << " " << value;
    cout << endl;
  }


}