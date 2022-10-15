#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
using namespace std;


vi dfs(int node, int pre_node, vi &list, vi &Loop_nodes, vvi &Graph){
  list.push_back(node);
  if(Graph[node].size()==1){
    return list;
  }

  for(auto next: Graph[node]){
    if(next != pre_node){
      pre_node = node;
      dfs(next, pre_node, list, Loop_nodes, Graph);
    }
  }
}

int main() {
  int N;
  cin >> N;
  vvi Graph(N+1);
  rep(i,N){
    int u,y;
    cin>>u>>y;
    Graph[u].push_back(y);
    Graph[y].push_back(u);
  }

  vvi Loop = Graph;

  while(true){
    bool flag = true;
    reps(i,1,N+1){
      if(Loop[i].size() == 1){
        flag = false;
        int node = Loop[i][0];
        Loop[i].pop_back();
        Loop[node].erase(remove(Loop[node].begin(), Loop[node].end(), i), Loop[node].end());
      }
    }
    if(flag) break;
  }

  vi Loop_nodes;
  vvi Tree(N+1);

  reps(i,1,N+1){
    if(Loop[i].size()>0){
      Loop_nodes.push_back(i);
    }
  }


  for(auto node: Loop_nodes){
    vi list;
    Tree[node] = dfs(node, 0, list, Loop_nodes, Graph);
  }


  int Q;
  cin >> Q;
  rep(i,Q){
    vi Check(N+1);
    int cnt=0;
    vi Routes;
    int start, goal;
    cin >> start >> goal;
    reps(i,1,N+1){
      bool flag = false;
      rep(j,Tree[i].size()){
        if(Tree[i][j] == start){
          rep(k,Tree[i].size()){
            if(Tree[i][k] == goal){
              cout << "Yes" << endl;
              flag = true;
              break;
            }
          }
          cout << "No" << endl;
          flag = true;
        if(flag) break;
        }
      }
      if(flag) break;
    }
  }
}
