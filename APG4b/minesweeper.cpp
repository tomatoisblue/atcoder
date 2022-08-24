#include<bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  string table[h][w];
  string ans[h][w];
  for(int i=0; i<h; i++){
    string str;
    cin >> str;
    for(int j=0; j<w; j++){
      table[i][j] = str.at(j);
    }
  }

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      if(table[i][j]=="."){
        int cnt=0;
        for(int y=i-1; y<=i+1; y++){
          for(int x=j-1; x<=j+1; x++){
            if(x>-1 && x<w && y>-1 && y<h){
              if(table[y][x]=="#"){
                cnt++;
              }
            }
          }
        }
        ans[i][j]=to_string(cnt);

      }else{
        ans[i][j]="#";
      }
    }
  }

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cout << ans[i][j];
    }
    cout << "\n";
  }

}