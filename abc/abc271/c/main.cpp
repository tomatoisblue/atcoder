#include <bits/stdc++.h>
#include <iostream>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vvll vector<vector<long long>>
#define ll long long
using namespace std;

const int INF = 0x3f3f3f3f;
 /*
  1.sell books that i have more than 2 and that is indexed over N
  2.buy books from smallest index that I don't have
  3.in case Im not be able to buy anything, sell the book that has biggest index in the books that i have
  4.if the biggest index book matches the very book you are reading, that's the last book you can read
  */

int main() {
  int n; cin>>n;
  vi sorted;
  set<int> books;
  int selling=0;
  int num;
  rep(i,n){
    cin>>num;
    if(num>n){
      selling++;
    }else{
      auto it=books.find(num);
      if(it==books.end()){
        books.insert(num);
        sorted.push_back(num);
      }else{
        selling++;
      }
    }
  }
  sort(all(sorted));

  for(auto x: sorted){
    cout<<x<<" ";
  }
  cout<<"\n";
  int ans=0;
  int index;
  int sellpos=INF;
  int cnt=0;
  auto it=sorted.begin();
  while(true){
    index=cnt+1;
    cout<<"index="<<index<<"sellpos="<<sellpos<<endl;
    cout<<"selling="<<selling<<endl;
    if(index==sellpos){
      cout<<index-1<<endl;
      return 0;
    }
    if(index!=sorted[cnt]){
      cout<<"i DON'T have "<<index<<endl;
      if(selling<2){
        int shouldbuy=4-2*selling;
        if((int)sorted.size()-cnt<shouldbuy){
          cout<<index-1<<endl;
          return 0;
        }
        if(sorted[-(shouldbuy)]>index){
          sellpos=sorted[-(shouldbuy)];
          sorted.insert(it+cnt,index);
        }else{
          cout<<index-1<<endl;
          return 0;
        }
      }else{
        selling-=2;
        sorted.insert(it+cnt,index);
        ans=index;
        cnt++;
      }
    }else{
      cout<<"i have "<<index<<endl;
      ans=index;
      cnt++;
    }
  }
  cout<<ans<<endl;
}
