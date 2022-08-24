#include<bits/stdc++.h>
using namespace std;

int main(){
  int s,n,x=0;
  cin >> s;
  n=s;
  while(true){
    int a;
    a = n%10;
    x += a;
    n /= 10;
    if(n<1)break;
  }
  if(s%x==0){
    cout << "Yes";
  }else{
    cout << "No";
  }
  return 0;
}