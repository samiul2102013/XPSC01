#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int visited[N];
vector<int>adj_list[N];

bool dfs(int node){
    visited[node]=true;
    for(auto i:adj_list[node]){
        if(!visited[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int node,edges;
    cin>>node>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src;
    cin>>src;
    if(dfs(src)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}