#include<bits/stdc++.h>
using namespace std;
int const N = 1e5;
int visited[N];
vector<int>adj_list[N];
void DFS(int node)
{
    cout<<node<<endl;
    visited[node]=1;
    for(int adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            DFS(adj_node);
        }
    }
}
/* 
   0-------1-------2------3
           |       |
           |       |
           5-------4
    6 6

    0 1
    2 3
    1 5
    2 4
    5 4
    1 2

 */
int main()
{
    int node,edges;
    cin>>node>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int scr=0;
    DFS(scr);
    return 0;
}