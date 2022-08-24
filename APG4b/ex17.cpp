#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,s,ans=0;
  cin >> n >> s;
  vector<int> apple(n), pine(n);
  for(int i=0; i<n; i++){
    cin >> apple.at(i);
  }
  for(int i=0; i<n; i++){
    cin >> pine.at(i);
  }

  for(int i: apple){
    for(int j: pine){
      if(i+j==s){
        ans++;
      }
    }
  }
  cout << ans << endl;
}