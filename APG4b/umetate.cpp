#include <bits/stdc++.h>
using namespace std;

#define N 10

vector<vector<int>> direction = {
  {-1, 0},
  {0, -1},
  {1, 0},
  {0, 1}
};

void explore(int x, int y, vector<vector<char>> &v, vector<vector<bool>> &checked){
  if(x<0 || x>=N || y<0 || y>=N || v.at(y).at(x)=='x' || checked.at(y).at(x)==true){
    return;
  }

  checked.at(y).at(x)=true;
  bool ans;
  for(auto nums: direction){
    int nx=x+nums.at(0);
    int ny=y+nums.at(1);
    explore(nx, ny, v, checked);
  }
}

bool check(vector<vector<char>> &v, vector<vector<bool>> &checked){
  bool flag=true;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(v.at(i).at(j)=='o' && checked.at(i).at(j)==false){
        flag=false;
        break;
      }
    }
    if(flag==false)break;
  }
  return flag;
}


void reverse(int x, int y, vector<vector<char>> &v){
  if(v.at(y).at(x)=='o'){
    v.at(y).at(x)='x';
  }else{
    v.at(y).at(x)='o';
  }
}

int main(){
  int s_x,s_y;
  vector<vector<char>> v(N, vector<char>(N));
  vector<vector<int>> checked(N, vector<int>(N));

  for(int i=0; i<N; i++){
    string s;
    cin >> s;
    for(int j=0; j<N; j++){
      v.at(i).at(j)=s.at(j);
      if(s.at(j)=='o'){
        s_y=i;
        s_x=j;
      }
    }
  }

  bool flag=false;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(v.at(i).at(j)=='x'){
        vector<vector<bool>> checked(N, vector<bool>(N));

        reverse(j,i,v);
        //..........
        explore(s_x,s_y,v,checked);
        if(check(v,checked)){
          flag=true;
          break;
        }else{
          reverse(j,i,v);
        }
      }
    }
    if(flag) break;
  }

  if(flag){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}