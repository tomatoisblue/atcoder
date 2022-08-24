#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x,y;
  cin >> n;
  vector<int> vec(n);

  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }

  reverse(vec.begin(), vec.end());
  for(int i=0; i<n; i++){
    if(i%2==0){
      x += vec.at(i);
    }else{
      y += vec.at(i);
    }
  }

  cout << x-y << endl;
  return 0;
}