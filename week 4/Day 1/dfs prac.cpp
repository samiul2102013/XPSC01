#include<bits/stdc++.h>
using namespace std;

int const N=100000;
int visited[N];
vector<int>adj_node[N];

void dfs(int src){
    cout<<src<<" ";
    visited[src]=1;

    for(auto node:adj_node[src]){
        if(visited[node]==0){
            dfs(node);
        }
    }
}

int main(){

    int node,edges;
    cin>>node>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_node[u].push_back(v);
        adj_node[v].push_back(u);
    }

    dfs(0);
    return 0;
}