#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        m[i]=k;
    }
    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
    return 0;
}