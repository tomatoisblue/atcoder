#include<bits/stdc++.h>
using namespace std;

int main(){
  int blue, red;
  map<string, int> blue_mp, red_mp;
  cin >> blue;
  for(int i=0; i<blue; i++){
    string str;
    cin >> str;
    if(blue_mp.count(str)){
      blue_mp[str]++;
    }else{
      blue_mp[str] = 1;
    }
  }

  cin >> red;
  for(int i=0; i<red; i++){
    string str;
    cin >> str;
    if(red_mp.count(str)){
      red_mp[str]++;
    }else{
      red_mp[str] = 1;
    }
  }

  int ans=0;
  for(const auto& [key, value]: blue_mp){
    int num=0;
    if(red_mp.count(key)){
      num = value - red_mp[key];
      ans = max(ans, num);
    }else{
      ans = max(ans, value);
    }
  }
  cout << ans << endl;
  return 0;
}