#include <bits/stdc++.h>

using namespace std;

bool route(int x, int y, vector<vector<char>> &v, int n, vector<vector<bool>> &passed){
  cout << "x=" << x << " y=" << y << endl;
  passed.at(y).at(x) = true;

  if(x==n-1 && y==n-1){
    cout << "/////REACHED//////" << endl;
    return true;
  }

  bool flag = false;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(passed.at(i).at(j)==true){
        cout << "o " ;
      }else{
        cout << "x " ;
      }
    }
    cout << "" << endl;
  }


  for(int dx=-1; dx<2; dx++){
    for(int dy=-1; dy<2; dy++){
      cout << "x+dx=" << x+dx << " y+dy=" << y+dy << endl;
      if(x+dx < 0 || x+dx >= n || y+dy < 0 || y+dy >= n  || dx == dy || dx == -dy || passed.at(y+dy).at(x+dx) == true){
        cout << "out of range" << endl;
        continue;
      }

      if(v.at(y+dy).at(x+dx) == '.'){
        cout << "next hop" << endl;
        flag = route(x+dx, y+dy, v, n, passed);
      }else{
        cout << "#" << endl;
      }
    }
  }

  return flag;
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    for(int j=0; j<n; j++){
      v.at(i).at(j) = s.at(j);
    }
  }

  cout << "input passed" << endl;

  vector<vector<bool>> passed(n, vector<bool>(n, false));

  if(route(0, 0, v, n, passed)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}