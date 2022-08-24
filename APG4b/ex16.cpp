#include<bits/stdc++.h>
using namespace std;

int main(){
  int a;
  bool flag=false;
  vector<int> v;
  for(int i=0; i<5; i++){
    cin >> a; v.push_back(a);
  }

  for(int i=0; i<4; i++){
    if(v.at(i)==v.at(i+1)){
      flag = true;
    }
  }
  if(flag){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}