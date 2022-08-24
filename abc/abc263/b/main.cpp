#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n+5);

  for(int i=2; i<=n; i++){
    cin >> v.at(i);
  }

  int num = n;
  int count = 0;
  while(num != 1){
    int p = v.at(num);
    count++;
    num = p;
  }

  cout<<count<<endl;
}