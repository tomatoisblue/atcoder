#include <bits/stdc++.h>

using namespace std;

int main() {
  /* code */
  vector<int> vec(5);
  for(int i=0; i<5; i++){
    cin >> vec.at(i);
  }

  vector<int> v = vec;
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  if(v.size() == 2 && ( count(vec.begin(), vec.end(), v.at(0)) == 2 || count(vec.begin(), vec.end(), v.at(0)) == 3)){
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;


}