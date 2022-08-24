#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w;
  vector<vector<char>> v(h, vector<char>(w));
  cin>>h>>w;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>v.at(i).at(j);
      char c=v.at(i).at(j);
      if(c=='s'){
        vector<int> start={j,i};
      }else if(c=='g'){
        vector<int> goal={j,i};
      }
    }
  }

}