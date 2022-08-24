#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, ans=0;
  cin >> a >> b;
  for(int i=a; i<=b; i++){
    string str = to_string(i);
    if(str[0]==str[4] && str[1]==str[3]){
      ans++;
    }
  }

  cout << ans << endl;
  return 0;

}
