#include<bits/stdc++.h>
using namespace std;

void func(string c, int x){
  int i=0;
  string ans="";
  while(i<x){
    ans+="]";
    i++;
  }
  cout << c << ":" << ans << endl;
}

int main(){
  int A,B;
  cin >> A >> B;

  func("A", A);
  func("B", B);
  return 0;
}