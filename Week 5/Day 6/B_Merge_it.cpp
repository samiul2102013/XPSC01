#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int visited[n];
    memset(visited,false,sizeof(visited));
    int count =0;
    for(int i=0;i<n;i++){
        if(v[i]%3==0){
            visited[i]==true;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(visited[i]==false && visited[j]==false){
                if((v[i]+v[j])%3==0){
                    count++;
                    visited[i]=true;
                    visited[j]=true;
                }
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}