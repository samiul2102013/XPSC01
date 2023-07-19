#include<bits/stdc++.h>
using namespace std;
int serch(vector<int>v,vector<int>visited,int key){
    for(int i=0;i<v.size();i++){
        if(v[i]==key && visited[i]==0){
            return i;
        }
    }
    return -1;
}
void solve(){
      int n,m;
      cin>>n>>m;
      vector<int>v;
      set<int>s;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        s.insert(k);
      }
      vector<int>visited(v.size(),0); 
      sort(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
        if(visited[i]==0){
            int d = v[i]*m;
            if(s.count(d)>0){
                int index = serch(v,visited,d);
                if(index!=-1){
                    visited[i]=1;
                    visited[index]=1;
                }
            }
        }
      }
      int c=0;
      for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            c++;
        }
      }
      cout<<c<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}