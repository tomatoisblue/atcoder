#include<bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  string s;
  cin >> h >> w;
  vector<vector<string>> v(h, vector<string>(w));
  for(int i=0; i<h; i++){
    cin >> s;
    for(int j=0; j<w; j++){
    v.at(i).at(j) = s.at(j);
    }
  }

  vector<bool> row(h);
  vector<bool> column(w);

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      if(v.at(i).at(j)=="#"){
        row.at(i)=true;
        column.at(j)=true;
      }
    }
  }

  for(int i=0; i<h; i++){
    if(row.at(i)){
      for(int j=0; j<w; j++){
        if(column.at(j)){
          cout << v.at(i).at(j);
        }
      }
    }
    if(row.at(i)==false) continue;
    cout << "" << endl;
  }

}