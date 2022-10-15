#include <bits/stdc++.h>
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

int main() {
  int n,num; cin>>n;
  int largestEven,secondLargestEven;
  int largestOdd,secondLargestOdd;
  largestEven=secondLargestEven=largestOdd=secondLargestOdd=-1;
  rep(i,n){
    cin>>num;
    if(num%2==0){
      if(num>largestEven){
        secondLargestEven=largestEven;
        largestEven=num;
      }else if(num>secondLargestEven){
        secondLargestEven=num;
      }
    }else{
      if(num>largestOdd){
        secondLargestOdd=largestOdd;
        largestOdd=num;
      }else if(num>secondLargestOdd){
        secondLargestOdd=num;
      }
    }
  }
  int ansEven=-1;
  int ansOdd=-1;
  if(largestEven!=-1 && secondLargestEven!=-1){
    ansEven=largestEven+secondLargestEven;
  }
  if(largestOdd!=-1 && secondLargestOdd!=-1){
    ansOdd=largestOdd+secondLargestOdd;
  }
  cout<<max(ansEven,ansOdd)<<endl;
}
