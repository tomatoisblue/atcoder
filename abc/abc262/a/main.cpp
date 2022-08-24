#include <bits/stdc++.h>
using namespace std;

int main() {
  int y,a;
  cin>>y;
  vector<int> v = {2, 1, 0, 3};
  cout<<y+v.at(y%4)<<endl;
}