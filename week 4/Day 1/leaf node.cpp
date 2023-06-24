#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj_list;
vector<bool>visited;

bool isLeafNode(int node){
    visited[node]=true;
    for(auto neighbor : adj_list[node]){
        if(!visited[neighbor]){
            return false;
        }
    }
    return true;
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
    bool is_leaf=isLeafNode(src);
    
    return 0;
}