#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  bool flag=false;
  cin >> n;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    if(s=="Y"){
      cout << "Four" << endl;
      flag=true;
      break;
    }
  }
  if (flag==false){
    cout << "Three" << endl;
  }
  return 0;
}