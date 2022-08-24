#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin>>n;
  vector<int> v(n+1);
  for(int i=1; i<=n; i++){
    cin>>v.at(i);
  }

  vector<int> x(n+1);
  int cnt1=0;
  int cnt2=0;
  for(int i=1; i<=n; i++){
    // cout << "i=" << i << "   ";
    if(i==v.at(i)){
      // cout << "i==v.at(i)" << endl;
      cnt1++;
    }else{

      x.at(v.at(i))=i;
      // cout << "x= ";
      // for(auto m: x) cout << m << " ";
      // if(x.at(i)==v.at(i)) cout<<"hit!";
      if(x.at(i)==v.at(i)) cnt2++;
    }
    // cout << endl;
  }

  // cout<<"cnt1="<<cnt1<<" cnt2="<<cnt2<<endl;
  if(cnt1<=1){
    cout << cnt2 << endl;
  }else{
    cout << (cnt1*(cnt1-1)/2) + cnt2 << endl;
  }

}
