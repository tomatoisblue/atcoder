#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  int vec[n];
  bool flag=false;
  for(int i=0; i<n; i++){
    cin >> vec[i];
  }
  while(true){
    for(int i=0; i<n; i++){
      if(vec[i]%2==0){
        vec[i] /= 2;
      }else{
        flag=true;
      }
    }
    if(flag) break;
    ans++;
  }
  cout << ans << endl;
  return 0;
}